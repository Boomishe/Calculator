#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
private:
	wxButton* btnPress = nullptr;
	wxButton* btnMe = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btn0 = nullptr;
	wxButton* btnNeg = nullptr;
	wxButton* btnPos = nullptr;
	wxButton* btnMult = nullptr;
	wxButton* btnDiv = nullptr;
	wxButton* btnDoNot = nullptr;
	wxButton* btnMod = nullptr;
	wxButton* btnSqrt = nullptr;
	wxButton* btnEqual = nullptr;
	wxButton* btnErase = nullptr;
	wxButton* btnDelete = nullptr;
	wxButton* btnFirstValueErase = nullptr;
	wxButton* btnClear = nullptr;
	wxButton* btnChangeMinPlu = nullptr;
	wxButton* btnDot = nullptr;
	wxButton* btnMultItSelf = nullptr;
	wxTextCtrl* text = nullptr;

	
public:
	Main();
	void OnButtonClick(wxCommandEvent& evt);


	wxDECLARE_EVENT_TABLE();
};

