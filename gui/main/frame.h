

#ifndef PI_FRAME_H
#define PI_FRAME_H 1

#include "wx/wxprec.h"
#include "wx/frame.h"

class PiFrame : public wxFrame
{
public:
    PiFrame();
    ~PiFrame();
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

enum
{
    ID_Hello = 1,
    ID_Exit = 2
};

#endif // !PI_FRAME_H

