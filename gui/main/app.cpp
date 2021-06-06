#include "app.h"

wxIMPLEMENT_APP(PiApp);

bool PiApp::OnInit()
{
	frame = new PiFrame();
	printf("Done");
	frame->Show(true);
	return true;
}