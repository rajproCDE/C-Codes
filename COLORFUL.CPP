#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(){
  int gdrive = DETECT, gmode, errorcode;
  int midx, midy;
  int radius;
  initgraph(&gdrive,&gmode,"C:\\turboc3\\BGI");
  errorcode = graphresult();
  if(errorcode!=grOk){
    printf("Graphics Error: %s\n",grapherrormsg(errorcode));
    printf("Press any key to halt");
    getch();
    exit(1);
  }
  midx = getmaxx()/2;
  midy = getmaxy()/2;
  setcolor(getmaxcolor());
  setcolor(5);
  circle(midx, midy, radius = 50);
  setcolor(4);
  circle(midx, midy, radius = 70);
  setcolor(6);
  circle(midx, midy, radius = 90);
  setcolor(3);
  circle(midx, midy, radius = 110);
  
  getch();
  closegraph();
  return 0;
}
  
