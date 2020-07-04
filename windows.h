struct Windows : Fl_Double_Window {

   Windows(Point topleft,int w,int h,string title) : Fl_Double_Window(topleft.x,topleft.y,w,h,title.c_str()) {
	   color(FL_BLACK);
	   show();
                        }		
  // virtual int handle(int e){ }
   int key_pressed()
   {
	   return Fl::event_key();
   }
vector<Shape*> shapes;  
   void attach(Shape &s)
   {
	   shapes.push_back(&s);
   }
 
   void attach(Widget &w)
   {
        begin();
       w.attach(*this);
        end();

   } 

   void draw()
   {

	   Fl_Double_Window::draw();
	 for(int i=0;i<shapes.size();i++)
	       shapes[i]->draw();

    
   }
  
   
    
};   
