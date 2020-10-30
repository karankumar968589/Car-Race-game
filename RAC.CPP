#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<iostream.h>
#include<PROCESS.h>

void pla(int x);
void color(void);
void border(int x);
void control(int x);
void com(int x);

int j,i,t=130,d=20;

void main()
{
int x=250;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c://turboc3//bgi");

   setbkcolor(4);  // background color
  control(x);
  getch();
 closegraph();
// return 0;
}

void color()
{




}

void border(int x)
{
//int r=4;

while(!kbhit())
{
//  cleardevice();

  i+=4;

  j+=4;

//   if(i%2==0)
//   cleardevice();
// pla(x,i);

// rectangle(10,10,620,465); // 1 layer

// setfillstyle(1,8);       // layer 1 color
// floodfill(11,11,WHITE);

 rectangle(150,10,155,465);  // road left borde
 setfillstyle(4,8);         // left border
 floodfill(153,11,WHITE);



 rectangle(450,10,455,465);   // road right border
 setfillstyle(4,8);       // rigth border
 floodfill(453,11,WHITE);

    rectangle(250,d+j,255,30+d+j);   // left divider
   setfillstyle(1,3);      // left devider
 floodfill(253,21,WHITE);  // 1

    rectangle(250,60+d+j,255,90+d+j);
       setfillstyle(1,3);
      floodfill(253,81+d+j,WHITE); // 2

    rectangle(250,120+d+j,255,150+d+j);
	 setfillstyle(1,3);
      floodfill(253,141+d+j,WHITE); // 2

    rectangle(250,180+d+j,255,210+d+j);
	setfillstyle(1,3);
     floodfill(253,211+d+j,WHITE); // 2

    rectangle(250,240+d+j,255,270+d+j);
	 setfillstyle(1,3);
      floodfill(253,271+d+j,WHITE); // 2

    rectangle(250,300+d+j,255,330+d+j);
      setfillstyle(1,3);
   floodfill(253,331+d+j,WHITE); // 2

    rectangle(250,360+d+j,255,390+d+j);
       setfillstyle(1,3);
    floodfill(253,391+d+j,WHITE); // 2

    rectangle(250,420+d+j,255,445+d+j);
       setfillstyle(1,3);
    floodfill(253,451+d+j,WHITE); // 2

    rectangle(350,d+j,355,30+d+j);     // right divider
 setfillstyle(1,4);
 floodfill(353,d+j+3,WHITE);  // 1


    rectangle(350,60+d+j,355,90+d+j);
     setfillstyle(1,4);
      floodfill(353,63+d+j,WHITE); // 2

    rectangle(350,120+d+j,355,150+d+j);
       setfillstyle(1,4);
      floodfill(353,63+d+j,WHITE); // 2

    rectangle(350,180+d+j,355,210+d+j);
	   setfillstyle(1,4);
	  floodfill(353,183+d+j,WHITE); // 2

    rectangle(350,240+d+j,355,270+d+j);
	   setfillstyle(1,4);
	  floodfill(353,243+d+j,WHITE); // 2

    rectangle(350,300+d+j,355,330+d+j);
     setfillstyle(1,4);
    floodfill(353,303+d+j,WHITE); // 2

    rectangle(350,360+d+j,355,390+d+j);
     setfillstyle(1,4);
    floodfill(353,363+d+j,WHITE); // 2

    rectangle(350,420+d+j,355,445+d+j);
     setfillstyle(1,4);
    floodfill(353,423+d+j,WHITE); // 2
   // if(r==40)
    //  r=0;

    // tree

    ellipse(80,70+t+i,110,260,7,40);   // right
    ellipse(50,70+t+i,280,70,9,40);    // left
    ellipse(65,110+t+i,180,0,14,5);     // bottom
    ellipse(65,30+t+i,180,0,12,15);   // wood top

    ellipse(52,20+t+i,70,290,20,30);
    ellipse(70,20+t+i,280,100,20,30);
    ellipse(60,t+i,0,190,20,15);

    setfillstyle(1,GREEN);     // leaves
    floodfill(55,23+t+i,WHITE);

    setfillstyle(1,6);      // leave
    floodfill(72,72+t+i,WHITE);

    // tree  2

    ellipse(570,200+i,110,260,7,40);   // right
    ellipse(540,200+i,280,70,9,40);    // left
    ellipse(555,240+i,180,0,14,5);     // bottom
    ellipse(555,160+i,180,0,12,15);   // wood top

    ellipse(542,150+i,100,290,20,30);
    ellipse(560,150+i,280,90,20,30); // right leave
    ellipse(550,130+i,0,180,20,15);

    setfillstyle(1,GREEN);      // leave
    floodfill(552,151+i,WHITE);


    setfillstyle(1,6);     // wood
    floodfill(547,230+i,WHITE);
//  pla(x,i);


    if(t+i>450)
     {
      i=50;
      t=0;
     }
       if(d+j>50)
    {
    d=0;
    j=0;
    }



     bar3d(x+30,350,70+x,400,10,15);
     setfillstyle(1,17);       // top
     floodfill(x+35,360,WHITE);

     setfillstyle(1,17);         // left
     floodfill(x+75,355,WHITE);

     setfillstyle(1,7);         // middle
     floodfill(x+75,345,WHITE);

     ellipse(x+81,385,0,360,5,7);  // tyre 1
     ellipse(x+81,355,0,360,5,7);  // tyre 2

     setfillstyle(1,BLACK);    // head light
     floodfill(x+79,386,WHITE);
     floodfill(x+79,356,WHITE); // head light

     ellipse(x+50,320,180,55,4,6);   // head light
     ellipse(x+75,320,110,360,4,6);   // head light 2

     ellipse(x+63,320,0,180,17,6);
     line(x+45,319,x+43,343);
     line(x+80,319,x+80,343);

     setfillstyle(1,17);        // bonot
     floodfill(x+75,335,WHITE);


     setfillstyle(1,YELLOW);    // head light
     floodfill(x+51,322,WHITE);

     setfillstyle(1,YELLOW);    // head light
     floodfill(x+76,322,WHITE);
     border(x);

     rectangle(10,10,600,400);
     setfillstyle(1,BLACK);    // head light
     floodfill(15,16,WHITE);


    color();



    }
}

void control(int x)
{
 char ch;

 while(1)
 {

   ch=getch();
 switch(ch)
 {
  case 'a':
  x-=100;
  break;

  case 's':
  x+=100;
  break;

  case 'q':
   exit(1);
   break;
 }
 if(x<200)
 {
    x=150;
 }
 if(x>350)
 {
    x=350;
  }
 if(i==100)
  {
   i=0;
  }

// if(j<=50)



   border(x);

   }
}

/*
void com(int x)
{
//int i
//   for(i=0;i<100;i++)
  {
//    bar3d(200,10+i,250,50+i,10,10);
    control(x,i);
  }

}
*/

void pla(int x)
{
 while(!kbhit())
 {
     bar3d(x+30,350,70+x,400,10,15);
     setfillstyle(1,17);       // top
     floodfill(x+35,360,WHITE);

     setfillstyle(1,17);         // left
     floodfill(x+75,355,WHITE);

     setfillstyle(1,7);         // middle
     floodfill(x+75,345,WHITE);

     ellipse(x+81,385,0,360,5,7);  // tyre 1
     ellipse(x+81,355,0,360,5,7);  // tyre 2

     setfillstyle(1,BLACK);    // head light
     floodfill(x+79,386,WHITE);
     floodfill(x+79,356,WHITE); // head light

     ellipse(x+50,320,180,55,4,6);   // head light
     ellipse(x+75,320,110,360,4,6);   // head light 2

     ellipse(x+63,320,0,180,17,6);
     line(x+45,319,x+43,343);
     line(x+80,319,x+80,343);

     setfillstyle(1,17);        // bonot
     floodfill(x+75,335,WHITE);


     setfillstyle(1,YELLOW);    // head light
     floodfill(x+51,322,WHITE);

     setfillstyle(1,YELLOW);    // head light
     floodfill(x+76,322,WHITE);
//     border(x,i);

    }

}