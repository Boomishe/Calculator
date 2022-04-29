// CalculatorTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include "../Calculator/App.h"
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/CalculatorProcessor.h"
#include "../Calculator/Main.h"
#include "../Calculator/IBaseCommand.h"
#include "ProcessorTests.h"
#include "ButtonFactoryTests.h"


int main()
{
    ProcessorTests processorTest = ProcessorTests();
	ButtonFactoryTests buttonTest = ButtonFactoryTests();
	processorTest.Test91ToHex();//0x5B
	processorTest.Test0x5BToDec(); //91
	processorTest.Test1110000000ToDec(1110000000);//896	
	processorTest.Test0x56ToDec();//86
	processorTest.Test69ToHex();//0x45
	processorTest.Test0x45ToDec();//69
	processorTest.Test4Add16Mult5();//100
	processorTest.Test600Mult3Mod500();//300
	processorTest.Test34Min7Add69Div6();//16
	processorTest.Test9Div3Mult10Add15Min78();//-33

	buttonTest.Btn9Check();
	buttonTest.Btn9ColorCheck();
	buttonTest.BtnEqualCheck();
	buttonTest.BtnEqualColorCheck();
	buttonTest.BtnDecCheck();
	buttonTest.BtnDecColorCheck();
	buttonTest.BtnMinCheck();
	buttonTest.BtnMinColorCheck();
	buttonTest.BtnBinCheck();
	buttonTest.BtnBinColorCheck();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
