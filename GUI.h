#include<FL/Fl.H>
#include<FL/Fl_Double_Window.H>  
#include<vector>
#include<FL/fl_draw.H>
#include<string>
#include<FL/Fl_Text_Display.H>
#include<FL/Fl_Button.H>
#include<FL/Fl_Widget.H>
#include<time.h>
#include<fstream>
using namespace std;
using Callback=void(*)(Fl_Widget*,void*);
int w =Fl::w();
int h=Fl::h();
struct Windows;

#include "Point.h"
#include "Shape.h"
#include "Line.h"
#include "Text.h"
#include "Slab.h"
#include "Circle.h"
#include "Widget.h"
#include "Button.h"
#include "Out_box.h"
#include "windows.h"
