#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(100, OnButtonClick)
EVT_BUTTON(101, OnButtonClick)
EVT_BUTTON(102, OnButtonClick)
EVT_BUTTON(103, OnButtonClick)
EVT_BUTTON(104, OnButtonClick)
EVT_BUTTON(105, OnButtonClick)
EVT_BUTTON(106, OnButtonClick)
EVT_BUTTON(107, OnButtonClick)
EVT_BUTTON(108, OnButtonClick)
EVT_BUTTON(109, OnButtonClick)
EVT_BUTTON(110, OnButtonClick)
EVT_BUTTON(111, OnButtonClick)
EVT_BUTTON(112, OnButtonClick)
EVT_BUTTON(120, OnButtonClick)
EVT_BUTTON(121, OnButtonClick)
EVT_BUTTON(122, OnButtonClick)
EVT_BUTTON(123, OnButtonClick)
EVT_BUTTON(124, OnButtonClick)
EVT_BUTTON(125, OnButtonClick)
EVT_BUTTON(126, OnButtonClick)
EVT_BUTTON(127, OnButtonClick)
EVT_BUTTON(128, OnButtonClick)
EVT_BUTTON(129, OnButtonClick)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Main", wxPoint(200, 200), wxSize(400, 520)) {

	//------------------Lane 1------------------------
	btnDoNot = new wxButton(this, 100, "DO NOT CLICK!!!", wxPoint(2, 90), wxSize(95, 65));
	btnFirstValueErase = new wxButton(this, 101, "CE", wxPoint(97, 90), wxSize(95, 65));
	btnDelete = new wxButton(this, 102, "C", wxPoint(192, 90), wxSize(95, 65));
	btnErase = new wxButton(this, 103, "-->", wxPoint(287, 90), wxSize(95, 65));

	//------------------Lane 2------------------------
	btnMod = new wxButton(this, 104, "%", wxPoint(2, 155), wxSize(95, 65));
	btnMultItSelf = new wxButton(this, 105, "x^2", wxPoint(97, 155), wxSize(95, 65));
	btnSqrt = new wxButton(this, 106, "SQRT", wxPoint(192, 155), wxSize(95, 65));
	btnDiv = new wxButton(this, 107, "/", wxPoint(287, 155), wxSize(95, 65));
	
	//------------------Lane 3------------------------
	btn1 = new wxButton(this, 121, "1", wxPoint(2, 220), wxSize(95, 65));
	btn2 = new wxButton(this, 122, "2", wxPoint(97, 220), wxSize(95, 65));
	btn3 = new wxButton(this, 123, "3", wxPoint(192, 220), wxSize(95, 65));
	btnMult = new wxButton(this, 108, "*", wxPoint(287, 220), wxSize(95, 65));

	//------------------Lane 4------------------------
	btn4 = new wxButton(this, 124, "4", wxPoint(2, 285), wxSize(95, 65));
	btn5 = new wxButton(this, 125, "5", wxPoint(97, 285), wxSize(95, 65));
	btn6 = new wxButton(this, 126, "6", wxPoint(192, 285), wxSize(95, 65));
	btnNeg = new wxButton(this, 109, "-", wxPoint(287, 285), wxSize(95, 65));

	//------------------Lane 5------------------------
	btn7 = new wxButton(this, 127, "7", wxPoint(2, 350), wxSize(95, 65));
	btn8 = new wxButton(this, 128, "8", wxPoint(97, 350), wxSize(95, 65));
	btn9 = new wxButton(this, 129, "9", wxPoint(192, 350), wxSize(95, 65));
	btnPos = new wxButton(this, 110, "+", wxPoint(287, 350), wxSize(95, 65));

	//------------------Lane 6------------------------
	btnChangeMinPlu = new wxButton(this, 111, "+/-", wxPoint(2, 415), wxSize(95, 65));
	btn0 = new wxButton(this, 120, "0", wxPoint(97, 415), wxSize(95, 65));
	btnDot = new wxButton(this, 112, ".", wxPoint(192, 415), wxSize(95, 65));
	btnEqual = new wxButton(this, 113, "=", wxPoint(287, 415), wxSize(95, 65));

	//------------------Text------------------------
	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(2, 2), wxSize(381, 88),wxTE_RIGHT);
}

void Main::OnButtonClick(wxCommandEvent& evt) {
	if (evt.GetId() == 100) {
		text->SetValue("WHAT DID I SAY HUH?");
	}
	else if (evt.GetId() == 101) {
		text->SetValue("CE");
	}
	else if (evt.GetId() == 102) {
		text->SetValue("C");
	}
	else if (evt.GetId() == 103) {
		text->SetValue("-->");
	}
	else if (evt.GetId() == 104) {
		text->SetValue("%");
	}
	else if (evt.GetId() == 105) {
		text->SetValue("x^2");
	}
	else if (evt.GetId() == 106) {
		text->SetValue("SQRT");
	}
	else if (evt.GetId() == 107) {
		text->SetValue("/");
	}
	else if (evt.GetId() == 108) {
		text->SetValue("*");
	}
	else if (evt.GetId() == 109) {
		text->SetValue("-");
	}
	else if (evt.GetId() == 110) {
		text->SetValue("+");
	}
	else if (evt.GetId() == 111) {
		text->SetValue("+/-");
	}
	else if (evt.GetId() == 112) {
		text->SetValue(".");
	}
	else if (evt.GetId() == 113) {
		text->SetValue("=");
	}
	else if (evt.GetId() == 120) {
		text->SetValue("0");
	}
	else if (evt.GetId() == 121) {
		text->SetValue("1");
	}
	else if (evt.GetId() == 122) {
		text->SetValue("2");
	}
	else if (evt.GetId() == 123) {
		text->SetValue("3");
	}
	else if (evt.GetId() == 124) {
		text->SetValue("4");
	}
	else if (evt.GetId() == 125) {
		text->SetValue("5");
	}
	else if (evt.GetId() == 126) {
		text->SetValue("6");
	}
	else if (evt.GetId() == 127) {
		text->SetValue("7");
	}
	else if (evt.GetId() == 128) {
		text->SetValue("8");
	}
	else if (evt.GetId() == 129) {
		text->SetValue("9");
	}
	else {
		wxMessageBox(wxT("LUL"));
	}
	evt.Skip();

}