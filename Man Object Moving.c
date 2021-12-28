#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
void main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    setcolor(7);
    setfillstyle(SOLID_FILL, 10);
    circle(50, 50, 30);
    floodfill(52, 52, 7);
    setcolor(13);
    line(50, 80, 50, 200);
    line(50, 110, 20, 140);
    line(50, 110, 80, 140);
    line(50, 200, 20, 230);
    line(50, 200, 80, 230);
    for (i = 50; i <= getmaxx(); i++)
    {
        setcolor(7);
        setfillstyle(SOLID_FILL, 10);
        circle(i, 50, 30);
        floodfill(i + 2, 52, 7);
        setcolor(13);
        line(i, 80, i, 200);
        line(i, 110, i - 30, 140);
        line(i, 110, i + 30, 140);
        line(i, 200, i - 30, 230);
        line(i, 200, i + 30, 230);
        cleardevice();
        delay(10);
    }
    for (i = 50; i <= getmaxx() / 2; i++)
    {
        setcolor(7);
        setfillstyle(SOLID_FILL, 10);
        circle(i, 50, 30);
        floodfill(i + 2, 52, 7);
        setcolor(13);
        line(i, 80, i, 200);
        line(i, 110, i - 30, 140);
        line(i, 110, i + 30, 140);
        line(i, 200, i - 30, 230);
        line(i, 200, i + 30, 230);
        cleardevice();
        delay(10);
    }
    getch();
}