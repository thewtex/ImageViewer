// generated by Fast Light User Interface Designer (fluid) version 1.0010

#ifndef liFilterConsoleGUI_h
#define liFilterConsoleGUI_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <liFilterConsoleBase.h>
#include <liLightButton.h>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Counter.H>
#include <FL/Fl_Slider.H>
#include <FL/Fl_Output.H>

class liFilterConsoleGUI : public liFilterConsoleBase {
public:
  liFilterConsoleGUI();
  Fl_Window *consoleWindow;
  static Fl_Menu_Item menu_[];
private:
  inline void cb_Load_i(Fl_Menu_*, void*);
  static void cb_Load(Fl_Menu_*, void*);
  inline void cb_Quit_i(Fl_Menu_*, void*);
  static void cb_Quit(Fl_Menu_*, void*);
  inline void cb_About_i(Fl_Menu_*, void*);
  static void cb_About(Fl_Menu_*, void*);
public:
  Fl_Group *Connectors;
  Fl_Group *controlsGroup;
  li::LightButton *inputButton;
private:
  inline void cb_inputButton_i(li::LightButton*, void*);
  static void cb_inputButton(li::LightButton*, void*);
public:
  li::LightButton *H1xButton;
private:
  inline void cb_H1xButton_i(li::LightButton*, void*);
  static void cb_H1xButton(li::LightButton*, void*);
  inline void cb_Execute_i(Fl_Button*, void*);
  static void cb_Execute(Fl_Button*, void*);
  inline void cb_Sigma_i(Fl_Counter*, void*);
  static void cb_Sigma(Fl_Counter*, void*);
public:
  li::LightButton *H1zButton;
private:
  inline void cb_H1zButton_i(li::LightButton*, void*);
  static void cb_H1zButton(li::LightButton*, void*);
public:
  li::LightButton *H1yButton;
private:
  inline void cb_H1yButton_i(li::LightButton*, void*);
  static void cb_H1yButton(li::LightButton*, void*);
public:
  li::LightButton *H2xButton;
private:
  inline void cb_H2xButton_i(li::LightButton*, void*);
  static void cb_H2xButton(li::LightButton*, void*);
public:
  li::LightButton *H2yButton;
private:
  inline void cb_H2yButton_i(li::LightButton*, void*);
  static void cb_H2yButton(li::LightButton*, void*);
public:
  li::LightButton *H2zButton;
private:
  inline void cb_H2zButton_i(li::LightButton*, void*);
  static void cb_H2zButton(li::LightButton*, void*);
public:
  li::LightButton *laplacianButton;
private:
  inline void cb_laplacianButton_i(li::LightButton*, void*);
  static void cb_laplacianButton(li::LightButton*, void*);
public:
  li::LightButton *modulusButton;
private:
  inline void cb_modulusButton_i(li::LightButton*, void*);
  static void cb_modulusButton(li::LightButton*, void*);
  inline void cb_2_i(Fl_Button*, void*);
  static void cb_2(Fl_Button*, void*);
  inline void cb_21_i(Fl_Button*, void*);
  static void cb_21(Fl_Button*, void*);
  inline void cb_22_i(Fl_Button*, void*);
  static void cb_22(Fl_Button*, void*);
  inline void cb_23_i(Fl_Button*, void*);
  static void cb_23(Fl_Button*, void*);
  inline void cb_24_i(Fl_Button*, void*);
  static void cb_24(Fl_Button*, void*);
public:
  li::LightButton *HxButton;
  li::LightButton *HyButton;
  li::LightButton *HzButton;
  li::LightButton *HxyButton;
  li::LightButton *HyzButton;
  li::LightButton *HzxButton;
  Fl_Slider *progressSlider;
  Fl_Output *statusTextOutput;
  Fl_Window *aboutWindow;
  virtual ~liFilterConsoleGUI();
  virtual void Quit( void );
  virtual void Load( void );
  virtual void ShowInput( void );
  virtual void ShowFilteredX( void );
  virtual void ShowFilteredY( void );
  virtual void ShowFilteredZ( void );
  virtual void ShowSecondDerivativeX( void );
  virtual void ShowSecondDerivativeY( void );
  virtual void ShowSecondDerivativeZ( void );
  virtual void ShowLaplacian( void );
  virtual void ShowGradientModulus( void );
  virtual void ShowAbout( void );
  virtual void WriteGradientX( void );
  virtual void WriteGradientY( void );
  virtual void WriteGradientZ( void );
  virtual void WriteGradientModulus( void );
  virtual void WriteLaplacian( void );
};
#endif
