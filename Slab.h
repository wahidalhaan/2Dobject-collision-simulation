struct Slab: Shape
{

 Slab(Point p1,Point p2,Point p3,Point p4,int lw,int lc,int fc):Shape(lw,lc,fc){
	 add(p1);
	 add(p2);
	 add(p3);
	 add(p4);
 }

 void reallocate(double dx)
 {
        for(int i=0;i<pts.size();i++)
	 pts[i].x+=dx;
	 
 }

 Point get_x_value()
 {
    return Point(pts[2].x,pts[3].x);


 }

 int get_y_value()
 {
 return pts[0].y;


 }
 void draw()
 {
   fl_line_style(FL_SOLID,line_width);
   fl_line(pts[0].x,pts[0].y,pts[1].x,pts[1].y);
   fl_line(pts[2].x,pts[2].y,pts[3].x,pts[3].y);
   fl_arc((pts[0].x+pts[2].x)/2-3,(pts[0].y+pts[2].y)/2-5,10,10,90,270);
   fl_arc((pts[1].x+pts[3].x)/2-5,(pts[1].y+pts[3].y)/2-5,10,10,90,-90);
 }
 
};
