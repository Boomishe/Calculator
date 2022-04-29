#include "ButtonFactoryTests.h"

ButtonFactoryTests::ButtonFactoryTests()
{

}

ButtonFactoryTests::~ButtonFactoryTests()
{

}

bool ButtonFactoryTests :: Btn9Check() 
{
	testBtn = btnFactory.createNineButton();
	if (testBtn->GetId()== 9)
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::Btn9ColorCheck()
{
	testBtn = btnFactory.createNineButton();
	if (testBtn->GetBackgroundColour() == wxColour(150,255,150)) 
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::BtnEqualCheck()
{
	testBtn = btnFactory.createEqualButton();
	if (testBtn->GetId() == 10)
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::BtnEqualColorCheck()
{
	testBtn = btnFactory.createEqualButton();
	if (testBtn->GetBackgroundColour() == wxColour(150, 255, 150))
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::BtnDecCheck()
{
	testBtn = btnFactory.createDecButton();
	if (testBtn->GetId() == 13)
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::BtnDecColorCheck()
{
	testBtn = btnFactory.createDecButton();
	if (testBtn->GetBackgroundColour() == wxColour(150, 255, 150))
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::BtnMinCheck()
{
	testBtn = btnFactory.createMinButton();
	if (testBtn->GetId() == 15)
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::BtnMinColorCheck()
{
	testBtn = btnFactory.createMinButton();
	if (testBtn->GetBackgroundColour() == wxColour(150, 255, 150))
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::BtnBinCheck()
{
	testBtn = btnFactory.createBinButton();
	if (testBtn->GetId() == 11)
	{
		return true;
	}
	return false;
}
bool ButtonFactoryTests::BtnBinColorCheck()
{
	testBtn = btnFactory.createBinButton();
	if (testBtn->GetBackgroundColour() == wxColour(150, 255, 150))
	{
		return true;
	}
	return false;
}