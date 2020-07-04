#include<iostream>
#include<math.h>
#include<algorithm>
#include<unistd.h>

void callback1(Fl_Widget* w1,void* v)
{
  Fl_Button *butt = (Fl_Button*)w1;
    butt->deactivate();
 Slab slab1(Point(w/6-70,h/2-h/15),Point(w/6-10,h/2-h/15),Point(w/6-70,h/2-h/15-10),Point(w/6-10,h/2-h/15-10),3,FL_WHITE,FL_GRAY); 
window.attach(slab1);

//Out_box outbox1(Point(w/3-21,65),17,20,"LIFE");
window.attach(outbox1);
outbox1.set_value("3");
int count = outbox1.get_value();

  double R=15;
  double xmin=R,xmax=w/3-R-60,ymin=R,ymax=h/2-R;
  double x0=(rand()/double(RAND_MAX) * (xmax-xmin)) + xmin;
  double y0= h/4;
  vector<double> x,y,vx,vy;
  x.push_back(x0);
  y.push_back(y0);
  Circle circle1(Point(x0,y0),R,1,FL_DARK_BLUE,FL_BLUE);
  window.attach(circle1);
  double v0 = 0.07;
  double dt=1;

  double theta= (rand()/double(RAND_MAX)  *3.1416); 
  vx.push_back(v0*cos(theta));
  vy.push_back(v0*sin(theta));
  while(true)
  {      if(count==0)
	  {     
		  
		   break;
		 
		  
                  
	  }
	 
	  
          Point tempx =slab1.get_x_value();
	  double tempy = slab1.get_y_value();
          int event =Fl::event_key();
          if(event == (int) 'a')
     		  {
			  slab1.reallocate(-0.07);
			 
		  }
	  if(event ==(int)'d')
	  {
		  slab1.reallocate(0.07);
		  event=0;
	  }

	  if(x[0] > xmax)
	  {
		  vx[0]*=-1;
		  x[0]=xmax;
	  }
	  else if(x[0] <xmin)
	  {
		  vx[0]*=-1;
		  x[0]=xmin;
	  }
	  if(y[0] > ymax)
	  {
		  vy[0]*=-1;
		  y[0]=ymax;
		  outbox1.set_value(to_string(--count));
		  
	  }
	  else if(y[0] < ymin)
	  {
             vy[0]*=-1;
	     y[0]=ymin;
	  }
          if(tempx.x <xmin)
	  {	  slab1.reallocate(0.07);
	  }
	  if(tempx.y >xmax)
	  {
		 slab1.reallocate(-0.07);
	  } 
	  
	  tempx=slab1.get_x_value();
          if(x[0] >=tempx.x && x[0] <=tempx.y && y[0]<=tempy+10 && y[0] >=tempy-10)
	  {
            vx[0]*=-1;
	    vy[0]*=-1;
	  }
     

     x[0]+= vx[0] * dt;
     y[0]+= vy[0] * dt;
     circle1.relocate(x[0],y[0]);
     Fl::check();
     Fl::redraw();
  }
}

