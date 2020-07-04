struct Out_box : Widget
{

      Fl_Text_Display *pw;
      Fl_Text_Buffer *buff;

      Out_box(Point p,int w,int h,string s) : Widget(p,w,h,s,0){}
      void set_value(string v)
      {
          buff->text(v.c_str());

      }
      int get_value()
      {

         return stoi(buff->text());

      }
      void attach(Windows &w)
      {
          pw= new Fl_Text_Display(xy.x,xy.y,width,height,label.c_str());
	  buff = new Fl_Text_Buffer();
	  pw->buffer(buff);
	  pw->color(FL_BLACK);
	  pw->align(FL_ALIGN_LEFT);
	  pw->textcolor(FL_WHITE);
	  pw->labelcolor(FL_WHITE);
	  pw->labelsize(14);
	  pw->textsize(10);
	  own = &w;

      }
	

};
