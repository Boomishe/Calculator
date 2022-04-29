#pragma once
#include "wx/wx.h"
#include "IBaseCommand.h"

class Main;

class CalculatorProcessor
{

public:
	static CalculatorProcessor& GetInstance() {
		static CalculatorProcessor processor;
		return processor;
	}
private:
	wxTextCtrl* textWindow = nullptr;
	std::vector<double> num;
	std::vector<char> binhex;
	std::vector<IBaseCommand*> op1;
	std::vector<int> op2;
	int lastBtn = 0;
	int lastCount = 0;
	double answer;
public:
	CalculatorProcessor();
	~CalculatorProcessor();
	CalculatorProcessor(CalculatorProcessor const&) = delete;
	void operator= (CalculatorProcessor const&) = delete;
	void WindowFrame(int id);
	void AddOperation(int id);
	bool BinaryCheck(wxString temp);
	void MergeNumbers(float mergeNum);
	double SaveVal(wxString toSaveVal);
	void CreateTextWindow(Main* window);
	int BinaryToDecimal(int num);
	std::string DecimalToBinary(std::string num);
	std::string HexToDecimal(std::string hexToDec);
	std::string DecimalToHex(int num);
	void Calculate();
	double GetAnswer() 
	{
		return answer;
	}
};