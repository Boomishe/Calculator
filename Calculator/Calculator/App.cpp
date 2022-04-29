#include "App.h"
#include "Main.h"
wxIMPLEMENT_APP(App);

App::App()
{

}
App::~App() {

}

bool App::OnInit() {

	showMp = new Main();
	showMp->Show();

	return true;
}