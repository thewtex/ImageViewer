// generated by Fast Light User Interface Designer (fluid) version 1.0011

#include "BacterialColonyGUI.h"

inline void BacterialColonyGUI::cb_Division_i(Fl_Value_Slider* o, void*) {
  bio::Bacteria::SetDivisionLatencyTime(
  static_cast<unsigned long>( o->value() ) );
}
void BacterialColonyGUI::cb_Division(Fl_Value_Slider* o, void* v) {
  ((BacterialColonyGUI*)(o->parent()->user_data()))->cb_Division_i(o,v);
}

inline void BacterialColonyGUI::cb_Growth_i(Fl_Value_Slider* o, void*) {
  bio::Bacteria::SetGrowthLatencyTime(
  static_cast<unsigned long>( o->value() ) );
}
void BacterialColonyGUI::cb_Growth(Fl_Value_Slider* o, void* v) {
  ((BacterialColonyGUI*)(o->parent()->user_data()))->cb_Growth_i(o,v);
}

BacterialColonyGUI::BacterialColonyGUI() {
  Fl_Window* w;
  { Fl_Window* o = panelWindow = new Fl_Window(330, 127);
    w = o;
    o->user_data((void*)(this));
    { Fl_Value_Slider* o = new Fl_Value_Slider(13, 19, 300, 25, "Division Latency");
      o->type(5);
      o->minimum(1);
      o->maximum(1000);
      o->step(1);
      o->value(100);
      o->callback((Fl_Callback*)cb_Division);
    }
    { Fl_Value_Slider* o = new Fl_Value_Slider(13, 70, 300, 25, "Growth Latency");
      o->type(5);
      o->minimum(1);
      o->maximum(1000);
      o->step(1);
      o->value(100);
      o->callback((Fl_Callback*)cb_Growth);
    }
    o->end();
  }
}

BacterialColonyGUI::~BacterialColonyGUI() {
}

void BacterialColonyGUI::Show(void) {
  panelWindow->show();
}

void BacterialColonyGUI::Hide(void) {
  panelWindow->hide();
}
