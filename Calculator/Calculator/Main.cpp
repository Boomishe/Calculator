#include "Main.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(wxID_ANY, OnButtonClicked)

wxEND_EVENT_TABLE()


Main::Main() : wxFrame(nullptr, wxID_ANY, "Main", wxPoint(600, 300), wxSize(520, 640))
{
	processor = &CalculatorProcessor::GetInstance();
	ButtonFactory creator = ButtonFactory(this);
	equalBtn = creator.createEqualButton();
	clearBtn = creator.createClearButton();
	binBtn = creator.createBinButton();
	hexBtn = creator.createHexButton();
	decBtn = creator.createDecButton();

	addBtn = creator.createAddButton();
	sevenBtn = creator.createSevenButton();
	eightBtn = creator.createEightButton();
	nineBtn = creator.createNineButton();

	minBtn = creator.createMinButton();
	fourBtn = creator.createFourButton();
	fiveBtn = creator.createFiveButton();
	sixBtn = creator.createSixButton();

	multBtn = creator.createMultButton();
	threeBtn = creator.createThreeButton();
	twoBtn = creator.createTwoButton();
	oneBtn = creator.createOneButton();

	divBtn = creator.createDivButton();
	modBtn = creator.createModButton();
	zeroBtn = creator.createZeroButton();
	negBtn = creator.createNegButton();
	processor->CreateTextWindow(this);

}



void Main::OnButtonClicked(wxCommandEvent& evt)
{
	processor->WindowFrame(evt.GetId());
	evt.Skip();
}

