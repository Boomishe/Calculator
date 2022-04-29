#include "CalculatorProcessor.h"
#include "Main.h"
#include <iomanip>
#include <vector>
wxFont fontTextBox(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT, false);




CalculatorProcessor::CalculatorProcessor()
{

}

CalculatorProcessor::~CalculatorProcessor()
{
	for (int i = 0; i < op1.size(); i++) {
		delete op1[i];
	}
}

void CalculatorProcessor::CreateTextWindow(Main* window)
{
	textWindow = new wxTextCtrl(window, 125, "0", wxPoint(0, 0), wxSize(375, 100), wxTE_RIGHT);
	textWindow->SetFont(fontTextBox);
	textWindow->SetBackgroundColour(wxColour(*wxBLACK));
	textWindow->SetForegroundColour(wxColour(150, 255, 150));
}

void CalculatorProcessor::WindowFrame(int id)
{
	int cases = id;
	lastBtn = cases;
	if (cases < 10) {
		*textWindow << cases;
	}
	else {
		wxString textVal = textWindow->GetValue();
		float value = SaveVal(textVal);
		num.push_back(value);
		textWindow->Clear();
		op2.push_back(id);
		if (num.size() >= 2) {
			switch (cases) {
			case 10:
			{
				for (int i = 0; i < op2.size(); i++) {
					if (op2[i] == 14) {
						AddCommand* add = new AddCommand(num[i], num[i + 1]);
						op1.push_back(add);
					}
					else if (op2[i] == 15) {
						MinCommand* sub = new MinCommand(num[i], num[i + 1]);
						op1.push_back(sub);
					}
					else if (op2[i] == 16) {
						MultCommand* mult = new MultCommand(num[i], num[i + 1]);
						op1.push_back(mult);
					}
					else if (op2[i] == 17) {
						DivCommand* div = new DivCommand(num[i], num[i + 1]);
						op1.push_back(div);
					}
					else if (op2[i] == 18) {
						ModCommand* mod = new ModCommand(num[i], num[i + 1]);
						op1.push_back(mod);
					}
				}
			}

			Calculate();
			break;
			}
		}
		switch (cases)
		{
		case 11:
		{
			int tempNum = (int)num[0];
			while (tempNum != 0) {
				binhex.push_back(tempNum % 2);
				tempNum /= 2;
			}
			num.clear();
			for (int i = binhex.size() - 1; i >= 0; i--) {
				*textWindow << (int)binhex[i];
			}
			binhex.clear();
			lastCount = 11;
			break;
		}
		case 12:
		{
			bool binary = BinaryCheck(textVal);
			int hexToDec = (int)num[0];
			if (binary) {
				hexToDec = BinaryToDecimal(hexToDec);
			}
			while (hexToDec != 0)
			{
				int temp = hexToDec % 16;
				if (temp < 10) {
					binhex.push_back(temp % 16 + 48);
				}
				else {
					binhex.push_back(temp % 16 + 55);
				}
				hexToDec /= 16;
			}

			num.clear();
			*textWindow << "0x";
			for (int i = binhex.size() - 1; i >= 0; i--) {
				*textWindow << binhex[i];
			}
			lastCount = 12;
			binhex.clear();
			break;
		}
		case 13:
		{
			bool binary = BinaryCheck(textVal);
			int nums = num[0];
			num.clear();
			if (binary) {
				int saveTemp = BinaryToDecimal(nums);
				*textWindow << saveTemp;
			}
			else if (textVal.Contains("0x")) {
				int length = textVal.size();
				int base = 1;
				int saveTemp = 0;
				for (int i = length - 1; i > 1; i--) {
					if (textVal[i] >= '0' && textVal[i] <= '9') {
						saveTemp += ((int)textVal[i] - 48) * base;
						base = base * 16;
					}
					else if (textVal[i] >= 'A' && textVal[i] <= 'F') {
						saveTemp += ((int)textVal[i] - 55) * base;
						base = base * 16;
					}
				}
				*textWindow << saveTemp;
			}
			break;
		}
		case 19:
		{
			textWindow->Clear();
			textWindow->Clear();
			num[0] = num[0] * -1;
			*textWindow << num[0];
			break;
		}
		case 20:
		{
			SaveVal(textVal);
			textWindow->Clear();
			num.clear();
			binhex.clear();
			op1.clear();
			op2.clear();
		}
		}
	}
}


void CalculatorProcessor::Calculate()
{
	answer = 0;
	for (int i = 0; i < op1.size(); i++) {
		if (i - 1 >= 0) {
			op1[i]->setFirst(answer);
		}
		answer = op1[i]->CalculateCommands();
	}
	if (answer == (int)answer) {
		*textWindow << (int)answer;
	}
	else {
		*textWindow << answer;
	}
	op1.clear();
	num.clear();
	op2.clear();
}

double CalculatorProcessor::SaveVal(wxString toSaveVal)
{
	double value;
	if (!toSaveVal.ToDouble(&value)) {
	}
	return value;
}

bool CalculatorProcessor::BinaryCheck(wxString temp)
{
	for (int i = 0; i < temp.size(); i++) {
		if ((int)temp[i] - 48 > 1) {
			return false;
			break;
		}
	}
	return true;
}

std::string CalculatorProcessor::DecimalToBinary(std::string num)
{
	int toBin = std::atoi(num.c_str());
	std::string toReverse = "";
	while (toBin != 0) {
		toReverse = std::to_string(toBin % 2) + toReverse;
		toBin /= 2;
	}
	return toReverse;
}

int CalculatorProcessor::BinaryToDecimal(int num)
{
	int saveTemp = 0;
	int base = 1;
	while (num) {
		int lastDigit = num % 10;
		num = num / 10;
		saveTemp += lastDigit * base;

		base = base * 2;
	}
	return saveTemp;
}



std::string CalculatorProcessor::DecimalToHex(int num)
{
	std::string endString = "0x";
	std::string tempString = "";
	int temp = num;
	int calculation;
	while (temp != 0)
	{
		calculation = temp % 16;
		if (calculation < 10) {
			tempString += (calculation + 48);
		}
		else {
			tempString += (calculation + 55);
		}
		temp /= 16;
	}
	for (int i = tempString.length() - 1; i >= 0; i--) {
		endString += tempString[i];
	}
	return endString;
}

std::string CalculatorProcessor::HexToDecimal(std::string hexToDec)
{
	int length = hexToDec.size();
	int base = 1;
	int temp = 0;
	std::string answer = "";
	for (size_t i = length - 1; i > 1; i--)
	{
		if (hexToDec[i] >= '0' && hexToDec[i] <= '9')
		{
			temp += ((int)hexToDec[i] - 48) * base;

		}
		else if (hexToDec[i] >= 'A' && hexToDec[i] <= 'F')
		{
			temp += ((int)hexToDec[i] - 55) * base;
		}
		base = base * 16;
	}
	answer = std::to_string(temp);
	return answer;
}

void CalculatorProcessor::MergeNumbers(float mergeNum)
{
	num.push_back(mergeNum);
}

void CalculatorProcessor::AddOperation(int id)
{
	op2.push_back(id);
}