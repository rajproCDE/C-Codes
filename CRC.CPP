#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
  int gd=DETECT, gm;
  initgraph(&gd,&gm,"C:\\turboc3\\BGI");
  int x=80, y=80;
  int radius = 20;
  int tempx = x, tempy = y;
  for(int j=0; j<8; j++){
    for(int i=0; i<8; i++){
      circle(tempx, tempy, radius);
      tempx+= 2*radius+10;
    }
    tempx = x;
    tempy += radius*2+10;
  }
  
  getch();
  closegraph();
  return 0;
}
