#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void main()
{
clrscr();
int gdriver=DETECT,gmode,sx,sy;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
line(100,200,50,50);
cout<<"Enter the value  for sx: \t";
cin>>sx;
cout<<"Enter the value  for sy: \t";
cin>>sy;
line(100*sx,200*sy,50*sx,50*sy);
getch();
closegraph();
}
