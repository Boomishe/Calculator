#pragma once
#include "wx/wx.h"
#include "Main.h"

class ButtonFactory
{
private:
	Main* calcView = nullptr;
public:

	ButtonFactory(Main* _tempView);
	~ButtonFactory();
	wxButton* createZeroButton();
	wxButton* createOneButton();
	wxButton* createTwoButton();
	wxButton* createThreeButton();
	wxButton* createFourButton();
	wxButton* createFiveButton();
	wxButton* createSixButton();
	wxButton* createSevenButton();
	wxButton* createEightButton();
	wxButton* createNineButton();

	wxButton* createBinButton();
	wxButton* createHexButton();
	wxButton* createDecButton();

	wxButton* createAddButton();
	wxButton* createMinButton();
	wxButton* createMultButton();
	wxButton* createDivButton();
	wxButton* createModButton();
	wxButton* createNegButton();
	wxButton* createClearButton();
	wxButton* createEqualButton();
};
