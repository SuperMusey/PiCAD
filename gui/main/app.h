#ifndef PI_APP_H
#define PI_APP_H 1

#include "wx/wxprec.h"

#include "frame.h"
#include "main.h"

class PiApp : public wxApp
{

	PiFrame* frame;

public:
	virtual bool OnInit();
};
#endif //PI_APP_H






