#include "ButtonFactory.h"

wxFont fontBtn(16, wxFONTFAMILY_SCRIPT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_SEMIBOLD, false);
ButtonFactory::ButtonFactory(Main* _tempView)
{
    calcView = _tempView;
}

ButtonFactory::~ButtonFactory()
{

}

wxButton* ButtonFactory::createZeroButton()
{
    wxButton* temp = new wxButton(calcView, 0, "0", wxPoint(125, 500), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createOneButton()

{
    wxButton* temp = new wxButton(calcView, 1, "1", wxPoint(0, 400), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createTwoButton()
{
    wxButton* temp = new wxButton(calcView, 2, "2", wxPoint(125, 400), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createThreeButton()
{
    wxButton* temp = new wxButton(calcView, 3, "3", wxPoint(250, 400), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createFourButton()
{
    wxButton* temp = new wxButton(calcView, 4, "4", wxPoint(0, 300), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createFiveButton()
{
    wxButton* temp = new wxButton(calcView, 5, "5", wxPoint(125, 300), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createSixButton()
{
    wxButton* temp = new wxButton(calcView, 6, "6", wxPoint(250, 300), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createSevenButton()
{
    wxButton* temp = new wxButton(calcView, 7, "7", wxPoint(0, 200), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createEightButton()
{
    wxButton* temp = new wxButton(calcView, 8, "8", wxPoint(125, 200), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createNineButton()
{
    wxButton* temp = new wxButton(calcView, 9, "9", wxPoint(250, 200), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}
wxButton* ButtonFactory::createEqualButton()
{
    wxButton* temp = new wxButton(calcView, 10, "=", wxPoint(375, 100), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createBinButton()
{
    wxButton* temp = new wxButton(calcView, 11, "bin", wxPoint(0, 100), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createHexButton()
{
    wxButton* temp = new wxButton(calcView, 12, "hex", wxPoint(125, 100), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createDecButton()
{
    wxButton* temp = new wxButton(calcView, 13, "dec", wxPoint(250, 100), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createAddButton()
{
    wxButton* temp = new wxButton(calcView, 14, "+", wxPoint(375, 200), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createMinButton()
{
    wxButton* temp = new wxButton(calcView, 15, "-", wxPoint(375, 300), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createMultButton()
{
    wxButton* temp = new wxButton(calcView, 16, "*", wxPoint(375, 400), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createDivButton()
{
    wxButton* temp = new wxButton(calcView, 17, "/", wxPoint(375, 500), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createModButton()
{
    wxButton* temp = new wxButton(calcView, 18, "%", wxPoint(0, 500), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createNegButton()
{
    wxButton* temp = new wxButton(calcView, 19, "+/-", wxPoint(250, 500), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

wxButton* ButtonFactory::createClearButton()
{
    wxButton* temp = new wxButton(calcView, 20, "Clear", wxPoint(375, 0), wxSize(125, 100));
    temp->SetFont(fontBtn);
    temp->SetBackgroundColour(wxColour(*wxBLACK));
    temp->SetForegroundColour(wxColour(150, 255, 150));
    return temp;
}

