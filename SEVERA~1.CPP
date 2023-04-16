#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
  int gd = DETECT, gm;
  int c, x=200, y=100;
  initgraph(&gd,&gm,"C:\\turboc3\\BGI");
  for(c=0;c<5;c++){
    setlinestyle(c,0,1);
    line(x,y,x+200,y);
    y=y+25;
  }
  getch();
  closegraph();
  return 0;
}
