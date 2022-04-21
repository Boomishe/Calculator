#include "App.h"
#include "ButtonFactory.h"
wxIMPLEMENT_APP(App);

App::App()
{

}
App::~App() {

}

bool App::OnInit() {

	showMp = new ButtonFactory();
	showMp->Show();

	return true;
}