#pragma once
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/Main.h"
class ButtonFactoryTests
{
private:
	wxButton* testBtn = nullptr;
	Main* btnMain = new Main();
	ButtonFactory btnFactory = ButtonFactory(btnMain);
public:
	ButtonFactoryTests();
	~ButtonFactoryTests();

	bool Btn9Check();
	bool Btn9ColorCheck();

	bool BtnEqualCheck();
	bool BtnEqualColorCheck();

	bool BtnDecCheck();
	bool BtnDecColorCheck();

	bool BtnMinCheck();
	bool BtnMinColorCheck();

	bool BtnBinCheck();
	bool BtnBinColorCheck();
};
