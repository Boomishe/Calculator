#pragma once
#include "wx/wx.h"
#include "Main.h"

class ButtonFactory;


class App : public wxApp
{
public:
	App();
	~App();

private:
	ButtonFactory* showMp = nullptr;

public:
	virtual bool OnInit();

};

