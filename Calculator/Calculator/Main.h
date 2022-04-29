#pragma once
#include "wx/wx.h"
#include "CalculatorProcessor.h"
class Main : public wxFrame
{
private:
	wxTextCtrl* textWindow = nullptr;
	wxButton* zeroBtn = nullptr;
	wxButton* oneBtn = nullptr;
	wxButton* twoBtn = nullptr;
	wxButton* threeBtn = nullptr;
	wxButton* fourBtn = nullptr;
	wxButton* fiveBtn = nullptr;
	wxButton* sixBtn = nullptr;
	wxButton* sevenBtn = nullptr;
	wxButton* eightBtn = nullptr;
	wxButton* nineBtn = nullptr;

	wxButton* multBtn = nullptr;
	wxButton* divBtn = nullptr;
	wxButton* minBtn = nullptr;
	wxButton* addBtn = nullptr;
	wxButton* equalBtn = nullptr;
	wxButton* binBtn = nullptr;
	wxButton* hexBtn = nullptr;
	wxButton* decBtn = nullptr;
	wxButton* modBtn = nullptr;
	wxButton* negBtn = nullptr;
	wxButton* clearBtn = nullptr;
	std::vector<wxButton*> buttons;
	CalculatorProcessor* processor = nullptr;
public:
	Main();
	void OnButtonClicked(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};