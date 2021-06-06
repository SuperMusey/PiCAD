#ifndef PI_WORKPLANE_H
#define PI_WORKPLANE_H

#include "GL/glew.h"
#include "wx/glcanvas.h"
#include "app.h"

class PiWorkPlane : public wxGLCanvas {
public:
	PiWorkPlane(PiFrame* frame, const wxGLAttributes& dispAttrs, wxWindowID id = wxID_ANY,
		const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0,
		const wxString& name = wxGLCanvasName, const wxPalette& palette = wxNullPalette);

	~PiWorkPlane();

	void OnPaint(wxPaintEvent& event);

private:
	wxGLContext* context;

	void InitGL();

	DECLARE_EVENT_TABLE()
};



#endif //PI_WORKPLANE_H