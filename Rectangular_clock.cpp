#include<graphics.h>
#include<iostream>
#include<cmath>
#include<ctime>

#define PI 3.14

using namespace std;

int main()
{
  initwindow(500,500,"Rectangular clock");
  int page=0;
while(1)
{  
  setactivepage(page);
  setvisualpage(1-page);
  cleardevice(); 
  setcolor(WHITE); 
  rectangle(50,50,450,450);
  rectangle(52,52,452,452);
  rectangle(58,58,458,458);
  circle(250,250,5);
  circle(250,250,7);
  circle(250,250,9);
  circle(250,250,18);

  outtextxy((250+210*sin(1*PI/6)) , (250-210*cos(1*PI/6)),"1" );
  outtextxy(250+210*sin(2*PI/6) , 250-210*cos(2*PI/6),"2");
  outtextxy(250+185*sin(3*PI/6) , 250-210*cos(3*PI/6),"3");
  outtextxy(250+210*sin(4*PI/6) , 250-210*cos(4*PI/6),"4");
  outtextxy(250+210*sin(5*PI/6) , 250-210*cos(5*PI/6),"5");
  outtextxy(250+185*sin(6*PI/6) , 250-185*cos(6*PI/6),"6");
  outtextxy(250+210*sin(7*PI/6) , 250-210*cos(7*PI/6),"7");
  outtextxy(250+210*sin(8*PI/6) , 250-210*cos(8*PI/6),"8");
  outtextxy(250+185*sin(9*PI/6) , 250-210*cos(9*PI/6),"9");
  outtextxy(250+210*sin(10*PI/6) , 250-210*cos(10*PI/6),"10");
  outtextxy(250+210*sin(11*PI/6) , 250-210*cos(11*PI/6),"11");
  outtextxy(250+185*sin(12*PI/6) , 250-185*cos(12*PI/6),"12");
  
  time_t current = time(0);
        tm *ltm = localtime(&current);
        system("cls");
        cout<<ltm->tm_hour<<" "<<ltm->tm_min;

    
        //Hour hand
        setcolor(RED);
        line(250,250,250+150*sin(ltm->tm_hour * PI/6) , 250-150*cos(ltm->tm_hour * PI/6));
    
        //Minuite hand
        setcolor(GREEN);
        line(250,250,250+180*sin(ltm->tm_min * PI/30) , 250-180*cos(ltm->tm_min * PI/30));

        //Second hand
        setcolor(WHITE);
        line(250,250,250+150*sin(ltm->tm_sec * PI/30),250-150*cos(ltm->tm_sec * PI/30));
    
        if(GetAsyncKeyState(VK_RETURN))
        {
            break;
        }
        delay(10);
        page=1-page;

}        
  getch();
  closegraph();
  return 0;  
}