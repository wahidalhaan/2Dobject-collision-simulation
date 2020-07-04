struct Button : Widget {
	Fl_Button *pw;
	Button(Point p,int w,int h,string s,Callback cb) : Widget(p,w,h,s,cb)
	{
	}

	void attach(Windows &w)
	{

                pw = new Fl_Button(xy.x,xy.y,width,height,label.c_str());
                pw->color(FL_GREEN);
		pw->labelcolor(FL_BLACK);
		pw->callback(do_it);
		own =&w;
	
	}


	


	
};
