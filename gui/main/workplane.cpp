#include "workplane.h"

BEGIN_EVENT_TABLE(PiWorkPlane, wxGLCanvas)
EVT_PAINT(PiWorkPlane::OnPaint)
END_EVENT_TABLE()


PiWorkPlane::PiWorkPlane(PiFrame* frame, const wxGLAttributes& dispAttrs, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name, const wxPalette& palette) : wxGLCanvas(frame, dispAttrs, id, pos, size, style, name, palette) {
	InitGL();
}

PiWorkPlane::~PiWorkPlane() {

}



/* -----------------	Methods		----------------- */

void PiWorkPlane::InitGL() {
	context = new wxGLContext(this);

	glewExperimental = GL_TRUE;

	GLenum error = glewInit();
	if (error != GLEW_OK) {
		printf("Error: %s", glewGetErrorString(error));
		return;
	}

}

void PiWorkPlane::OnPaint(wxPaintEvent& event) {

	SetCurrent(*context);

	GLsizei width, height;

	this->GetClientSize(&width, &height);

	glViewport(0, 0, width, height);

	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glColor3f(0.4, 0.5, 0.4);
	glVertex2f(0.0, -0.8);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.1, 0.1);
	glVertex2f(-0.1, 0.1);
	glVertex2f(-0.1, -0.1);
	glVertex2f(0.1, -0.1);
	glEnd();

	glFlush();
	SwapBuffers();
}