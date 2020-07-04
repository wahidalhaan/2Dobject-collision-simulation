#include "GUI.h"
#include<math.h>
#include<algorithm>

string title ="PING PONG";
Windows window(Point(w/2,0),w/3,h/2,title);
//Line line1(Point(0,h/2-h/15) , Point(w/3,h/2-h/15),3,FL_WHITE);
Line line2(Point(1,0),Point(1,h/2),3,FL_WHITE);
Line line3(Point(w/3-1,0),Point(w/3-1,h/2),3,FL_WHITE);
Line line4(Point(w/3-60,0),Point(w/3-60,h/2),3,FL_WHITE);
Line line5(Point(1,h/2-1),Point(w/3,h/2-1),3,FL_WHITE);
Line line6(Point(0,1),Point(w/3,1),3,FL_WHITE);
Text text1(Point(w/3-56,25),17,FL_WHITE,FL_HELVETICA,"LIVES");
Text text2(Point(w/3-56,h/2-10),12,FL_WHITE,FL_HELVETICA,"#//#");
Text text3(Point(w/3-56,h/2-29),12,FL_WHITE,FL_HELVETICA,"FLTK");
//Slab slab1(Point(w/6-70,h/2-h/15),Point(w/6-10,h/2-h/15),Point(w/6-70,h/2-h/15-10),Point(w/6-10,h/2-h/15-10),3,FL_WHITE,FL_GRAY);

Out_box outbox1(Point(w/3-21,65),17,20,"LIFE");
#include "callback.h"
//Out_box outbox1(Point(w/3-21,65),17,20,"LIFE");		
//Circle circle1(Point(20,200),25,5,FL_DARK_BLUE,FL_BLUE);
Button button1(Point(w/3-56,h/3),50,40,"START",callback1);

int main()
{       	
	srand(time(NULL));
        //window.attach(line1);
	window.attach(line2);
	window.attach(line3);
	window.attach(line4);
	window.attach(line5);
	window.attach(line6);
	window.attach(text1);
	window.attach(text2);
	window.attach(text3);
//	window.attach(outbox1);
	//window.attach(slab1);
        window.attach(button1);
  //      window.attach(circle1);
//	outbox1.set_value("3");
        
  //{
//	  Text text4(Point(w/6-30,h/4),20,FL_HELVETICA,FL_WHITE,"GAME OVER");
  //         window.attach(text4);
  //}
 	return Fl::run();


}
 








