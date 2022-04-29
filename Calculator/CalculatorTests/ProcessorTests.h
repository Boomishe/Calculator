#pragma once
#include "../Calculator/App.h"
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/CalculatorProcessor.h"
#include "../Calculator/Main.h"
#include "../Calculator/IBaseCommand.h"
class ProcessorTests
{
private:
	CalculatorProcessor* testCalcProcessor = nullptr;
public:
	ProcessorTests();
	~ProcessorTests();

	void Test91ToHex();//0x5B
	void Test0x5BToDec(); //91
	void Test1110000000ToDec(int binToDec);//896	
	void Test0x56ToDec();//86
	void Test69ToHex();//0x45
	void Test0x45ToDec();//69
	void Test4Add16Mult5();//100
	void Test600Mult3Mod500();//300
	void Test34Min7Add69Div6();//16
	void Test9Div3Mult10Add15Min78();//-33


};