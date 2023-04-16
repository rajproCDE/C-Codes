#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(){
  int gd = DETECT, gm;
  initgraph(&gd,&gm,"C:\\turboc3\\BGI");
  int ax1=100, ay1=100;
  int ax2=200, ay2=100;
  int ax3=100, ay3=200;
  int ax4=200, ay4=200;

  line(ax1,ay1,ax2,ay2);
  line(ax2,ay3,ax4,ay4);
  line(ax3,ay3,ax4,ay4);
  line(ax3,ay3,ax1,ay1);

  int ax5=ax1+30, ay5=ay1-30;
  int ax6=ax2+30, ay6=ay2-30;
  int ax7=ax3+30, ay7=ay3-30;
  int ax8=ax4+30, ay8=ay4-30;

  line(ax5,ay5,ax6,ay6);
  line(ax6,ay6,ax8,ay8);
  line(ax5,ay5,ax7,ay7);
  line(ax7,ay7,ax8,ay8);

  line(ax1,ay1,ax5,ay5);
  line(ax2,ay2,ax6,ay6);
  line(ax3,ay3,ax7,ay7);
  line(ax4,ay4,ax8,ay8);

  getch();
  closegraph();
  return 0;
}
