// generated by Fast Light User Interface Designer (fluid) version 1.0011

#ifndef CellsViewerGUI_h
#define CellsViewerGUI_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include "CellsViewerBase.h"
#include <FL/Fl_Button.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Browser.H>

class CellsViewerGUI : public bio::CellsViewerBase {
public:
  CellsViewerGUI();
  Fl_Window *controlWindow;
  static Fl_Menu_Item menu_[];
private:
  inline void cb_Load_i(Fl_Menu_*, void*);
  static void cb_Load(Fl_Menu_*, void*);
  inline void cb_Quit_i(Fl_Menu_*, void*);
  static void cb_Quit(Fl_Menu_*, void*);
  inline void cb_Cellular_i(Fl_Menu_*, void*);
  static void cb_Cellular(Fl_Menu_*, void*);
  inline void cb_Substrates_i(Fl_Menu_*, void*);
  static void cb_Substrates(Fl_Menu_*, void*);
  inline void cb_3_i(Fl_Button*, void*);
  static void cb_3(Fl_Button*, void*);
  inline void cb_4square_i(Fl_Button*, void*);
  static void cb_4square(Fl_Button*, void*);
public:
  Fl_Value_Output *iterationValueOutput;
  Fl_Value_Output *numberOfCellsValueOutput;
private:
  inline void cb__i(Fl_Button*, void*);
  static void cb_(Fl_Button*, void*);
public:
  Fl_Value_Output *timeValueOutput;
  Fl_Window *substratesWindow;
  Fl_Browser *substratesBrowser;
private:
  inline void cb_substratesBrowser_i(Fl_Browser*, void*);
  static void cb_substratesBrowser(Fl_Browser*, void*);
public:
  virtual ~CellsViewerGUI();
};
#endif
