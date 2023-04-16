#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

int main(){
  int gd=DETECT, gm, errorcode;
  int maxx,maxy;
  initgraph(&gd,&gm,"C:\\turboc3\\BGI");
  errorcode = graphresult();
  if(errorcode != grOk){
    printf("Error");
    getch();
    exit(1);
  }
  maxx = getmaxx();
  maxy = getmaxy();
  setcolor(getmaxcolor());
  setfillstyle(SOLID_FILL,BLUE);
  rectangle(0,0,maxx, maxy);
  int x=50, y=50;
  int div = -1;
  int i=0;
  while(x<maxx+50){
    if(y>maxy-50 && div==1){
      div = -1;
      setfillstyle(SOLID_FILL,RED);
    }
    if(y<=50 && div==-1){
      setfillstyle(SOLID_FILL,BLUE);
      div = +1;
    }
    
    x=x+1;
    y=y+div*4;
    circle(x,y,50);
    floodfill(x,y,WHITE);
    delay(10);
    cleardevice();
    i++;
  }
  getch();
  closegraph();
  return 0;
}
