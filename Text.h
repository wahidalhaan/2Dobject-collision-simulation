struct Text : Shape
{
   int font;
   string content;
   Text(Point p,int lw,int lc,int f,string s): font(f) ,content(s), Shape(lw,lc,0) {
	add(p);   

   }

   void draw()
   { 
     fl_font(font,line_width);
     fl_color(line_color);
     fl_draw(content.c_str(),pts[0].x,pts[0].y);

   }
};

