#include<iostream>
#include<graphics.h>
using namespace std;


int main()
{
    
    //mouse vars
int x1=60,x2=60,y1=300,y2=345;
int a1=130,a2=130,a3=400,a4=400;
int t1=95,t2=300,t3=95,t4=345;
int mox=95,moy=320,mor=10;
int w1x=170,w1y=300,w2x=65,w2y=180,wr=65;

//initialisation    
int gd=DETECT,gm;
char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
initgraph(&gd, &gm, data);//opening a window
POINT curpos;//struct to obtain cursor position
//looping for FPS 
 while(1){
    //keys vars
int v1l1x=220,v1l1y=320+20,v1l2x=190,v1l2y=360+20;
int v2l1x=480,v2l1y=320+20,v2l2x=510,v2l2y=360+20;
int h1l1x=190,h1l1y=360+20,h1l2x=510,h1l2y=360+20;
int h2l1x=220,h2l1y=320+20,h2l2x=480,h2l2y=320+20;
    if (GetAsyncKeyState(VK_RBUTTON)){//to stop the program loop  required
   break;
 }
GetCursorPos(&curpos);//update cursor pos everytime
int xc=curpos.x;
int yc=curpos.y;
cleardevice();//delete previous image of mouse every time berfore moving the mouse to new position{
//mouse
arc(w1x,w1y,w2x,w2y,wr);//the static wire to macintosh
// // int xc=100;
// // int yc=400;
//body of mouse
rectangle(xc-35,yc-50,xc+35,yc+50);
rectangle(xc-35,yc-10,xc+35,yc+50);
line(xc,yc-10,xc,yc-50);//the midline
line(xc,yc-50,w2x+40,w1y);//the line that connects mouse and arc in every loop
circle(xc,yc-30,mor);//mouse button
//colour
floodfill(xc,yc+35,WHITE);
floodfill(xc+1,yc-29,WHITE);
floodfill(xc-1,yc-31,WHITE);
//screen components
rectangle(200,30,500,310+20);//outer
rectangle(230,70,470,220+45);//inner
rectangle(400,250+45,470,260+45);//disc
circle(235,255+45,10);//power button that dosent work lol
//colouring
floodfill(201,31,WHITE);
floodfill(240,80,BLACK);
//apple logo
arc (250+90,250-80,105,239,50);
arc (246+90,222-80,50,470,22);
arc (280+90,220-80,30,490,20);
arc (264+90,205-80,180,0,3);
arc (235+90,277-80,220,330,20);
arc (256+90,290-80,14,520,5);
arc (272+90,160-80,255,6,23);
arc (292+90,182-80,89,180,25);
arc (304+90,235-80,105,265,25);
arc (266+90,265-80,305,7,35);
arc (275+90,282-80,200,321,16);
//keyboard body
line(200,310+20,150,380+20);
line(500,310+20,550,380+20);
line(150,380+20,550,380+20);
//keyboard thickness;
rectangle(150,380+20,550,410+20);
floodfill(151,401,WHITE);
 //keyspace verticals  
line(220,320+20,190,360+20);
line(480,320+20,510,360+20);
//keyspace horizontals   
line(190,360+20,510,360+20);
line(220,320+20,480,320+20);
//keys
//vertical lines
for (int i=0;i<5;i++){
v1l1x+=25;
v1l2x+=25;
v2l1x-=25;
v2l2x-=25;
if (i==4){
    v1l1x-=5;
    v2l1x+=5;
    v1l2x+=15;
    v2l2x-=15;
}
line(v1l1x,v1l1y,v1l2x,v1l2y);
line(v2l1x,v2l1y,v2l2x,v2l2y);
}
//horizontal lines
for (int i=0;i<2;i++){
h2l1x+=10;
h2l2x-=10;
h1l1x+=10;
h1l2x-=10;
h2l1y+=10;
h2l2y+=10;
h1l1y-=10;
h1l2y-=10;
line(h1l1x-5,h1l1y,h1l2x+5,h1l2y);
line(h2l2x-10,h2l2y,h2l1x+10,h2l1y);   
}
//creating and moving macintosh using mouse
char st1[20]="Macintosh";
settextstyle(7,0,3);
//border conditions
if (240+(xc-65)>344){
    xc=170;
}
if (240+(xc-65)<220){
    xc=60;
}
if (70-(-yc+345)<70){
    yc=230;
}
if (70-(-yc+345)>230){
    yc=50;
}
outtextxy(240+(xc-65),70-(-yc+345),st1);    
 delay(70);}
 getch();
     closegraph();
return 0;}