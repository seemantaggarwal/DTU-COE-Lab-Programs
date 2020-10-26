#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#define ROUND(a) ((int)(a+0.5))

void ddaline(int x1, int y1, int x2, int y2)
{
     float xinc, yinc, x=x1, y=y1;
     int dx = x2-x1;
     int dy = y2-y1;
     int length,k=1;
     if(abs(dx)>=abs(dy))
     {length=abs(dx);
     }
     else
     {length=abs(dy);
     }
     xinc= dx/(float)length;
     yinc= dy/(float)length;
     clrscr();
     putpixel(ROUND(x),ROUND(y),WHITE);

     while(k<=length)
     {
           x+=xinc;
           y+=yinc;
           putpixel(ROUND(x), ROUND(y),WHITE);
           delay(50);
           k++;
     }
}

int main()
{
    int x1, x2, y1, y2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    printf("Enter intial point\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter end point\n");
    scanf("%d %d", &x2, &y2);
    ddaline(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}

