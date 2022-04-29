#include "ProcessorTests.h"

ProcessorTests::ProcessorTests()
{
	testCalcProcessor = &CalculatorProcessor::GetInstance();
}

ProcessorTests::~ProcessorTests()
{
}

void ProcessorTests::Test91ToHex()
{
	std::string temp = testCalcProcessor->DecimalToHex(91);
	if (temp == "0x5B") {
		std::cout << "Hey everything went right and 91 was properly calculated" << std::endl;
	}
	else {
		std::cout << "91 didn't work :(";
	}
}
void ProcessorTests::Test0x5BToDec()
{
	std::string temp = testCalcProcessor->HexToDecimal("0x5B");
	if (temp == "91") {
		std::cout << "0x5B had no issue trasfering" << std::endl;
	}
	else {
		std::cout << "Well 0x5B had some issue";
	}
}
void ProcessorTests::Test1110000000ToDec(int binToDec)
{
	int temp = testCalcProcessor->BinaryToDecimal(10101100);
	if (temp == 896) {
		std::cout << "Test computed correctly to 896" << std::endl;
	}
}
void ProcessorTests::Test0x56ToDec()
{
	std::string temp = testCalcProcessor->HexToDecimal("0x5B");
	if (temp == "86") {
		std::cout << "0x56 Yay you are good" << std::endl;
	}
	else {
		std::cout << "Well 0x56 was not trasfered you not good";
	}
}
void ProcessorTests::Test69ToHex()
{
	std::string temp = testCalcProcessor->DecimalToHex(69);
	if (temp == "0x45") {
		std::cout << "Hey everything went right and 69 was properly calculated" << std::endl;
	}
	else {
		std::cout << "69 didn't work :(";
	}
}
void ProcessorTests::Test0x45ToDec()
{
	std::string temp = testCalcProcessor->HexToDecimal("0x45");
	if (temp == "69") {
		std::cout << "0x45 had no issue trasfering" << std::endl;
	}
	else {
		std::cout << "Well 0x45 had some issue";
	}
}
void ProcessorTests::Test4Add16Mult5()
{
	testCalcProcessor->MergeNumbers(4);
	testCalcProcessor->AddOperation(14);
	testCalcProcessor->MergeNumbers(16);
	testCalcProcessor->AddOperation(16);
	testCalcProcessor->MergeNumbers(5);
	testCalcProcessor->WindowFrame(10);
	if (testCalcProcessor->GetAnswer() == 100) {
		std::cout << "4 + 16 * 5 = 100 you got it boss" << std::endl;
	}
	else {
		std::cout << "4 + 16 * 5 = 100 something is off" << std::endl;
	}
}
void ProcessorTests::Test600Mult3Mod500()
{
	testCalcProcessor->MergeNumbers(600);
	testCalcProcessor->AddOperation(16);
	testCalcProcessor->MergeNumbers(3);
	testCalcProcessor->AddOperation(18);
	testCalcProcessor->MergeNumbers(500);
	testCalcProcessor->WindowFrame(10);
	if (testCalcProcessor->GetAnswer() == 300) {
		std::cout << "600 * 3 %(modulo) 500 = 300 you got it boss" << std::endl;
	}
	else {
		std::cout << "600 * 3 %(modulo) 500 = 300 something is off" << std::endl;
	}
}
void ProcessorTests::Test34Min7Add69Div6()
{
	testCalcProcessor->MergeNumbers(34);
	testCalcProcessor->AddOperation(15);
	testCalcProcessor->MergeNumbers(7);
	testCalcProcessor->AddOperation(14);
	testCalcProcessor->MergeNumbers(69);
	testCalcProcessor->AddOperation(17);
	testCalcProcessor->MergeNumbers(6);
	testCalcProcessor->WindowFrame(10);
	if (testCalcProcessor->GetAnswer() == 16) {
		std::cout << "34 - 7 + 69 / 6 = 16 you got it boss" << std::endl;
	}
	else {
		std::cout << "34 - 7 + 69 / 6 = 16 something is off" << std::endl;
	}
}
void ProcessorTests::Test9Div3Mult10Add15Min78()
{
	testCalcProcessor->MergeNumbers(9);
	testCalcProcessor->AddOperation(17);
	testCalcProcessor->MergeNumbers(3);
	testCalcProcessor->AddOperation(16);
	testCalcProcessor->MergeNumbers(10);
	testCalcProcessor->AddOperation(14);
	testCalcProcessor->MergeNumbers(15);
	testCalcProcessor->AddOperation(15);
	testCalcProcessor->MergeNumbers(78);
	testCalcProcessor->WindowFrame(10);
	if (testCalcProcessor->GetAnswer() == -33) {
		std::cout << "9 / 3 * 10 + 15 - 78 = -33 you got it boss" << std::endl;
	}
	else {
		std::cout << "9 / 3 * 10 + 15 - 78 = -33 something is off" << std::endl;
	}
}