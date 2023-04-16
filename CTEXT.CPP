#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>

int main(){
  int gd = DETECT, gm;
  initgraph(&gd,&gm,"C:\\turboc3\\BGI");
  int x=200, y=200, radius = 100;
  int cx1 = 100, cy1 = 200, cx2 = 300, cy2 = 200;
  
  line(x,y+5,x,y+100-5);
  outtextxy(x+5, y+50, "Radius");
  
  int tx1 = x, ty1=y, tx2=x-5, ty2=y+5, tx3=x+5, ty3=y+5;
  line(tx1, ty1, tx2, ty2);
  line(tx1, ty1, tx3, ty3);
  line(tx2, ty2, tx3, ty3);
  
  tx1=x, ty1= y+100;
  tx2=x-5, ty2=y-5+100;
  tx3=x+5, ty3=y-5+100;
  
  line(tx1, ty1, tx2, ty2);
  line(tx1, ty1, tx3, ty3);
  line(tx2, ty2, tx3, ty3);
  
  outtextxy(x+15, y+5,"Diameter");
  
  line(cx1+5, cy1, cx2-5, cy2);
  tx1 = cx2, ty1=cy2, tx2=cx2-5;
  ty2=cy2-5;
  tx3=cx2-5, ty3=cy2+5;
  
  line(tx1, ty1, tx2, ty2);
  line(tx1, ty1, tx3, ty3);
  line(tx2, ty2, tx3, ty3);
  circle(x,y,radius);
  
  tx1=cx1, ty1=cy1;
  tx2=cx1+5, ty2=cy2-5, tx3=cx1+5, ty3=cy2+5;
  
  line(tx1, ty1, tx2, ty2);
  line(tx1, ty1, tx3, ty3);
  line(tx2, ty2, tx3, ty3);
  
  getch();
  closegraph();
  return 0;
}
