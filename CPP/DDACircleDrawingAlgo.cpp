//dsprajput
//Circle drawing Algorithm

#include<GL/glut.h>
#include<math.h>
#include<GL/glu.h>
#include<iostream>
using namespace std;
static int window;
static int menu_id;
static int submenu_id;
static int value = 0;

void menu( int num)
{
    if(num==1){
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
        glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
        glLoadIdentity();
        glFlush();

         }
    else
        value=num;
    glutPostRedisplay();
}

void createmenu(void)
{
    submenu_id=glutCreateMenu(menu);
    glutAddMenuEntry("DDA circle",2);
    menu_id=glutCreateMenu(menu);
    glutAddMenuEntry("Clear",1);
    glutAddSubMenu("Create",submenu_id);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

double xini,yini,rad;
void myInit()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-700,700,-700,700);
}

void dda_circle()
{
    float x1,y1,startx,starty,x2,y2;
    x1=rad*cos(0);
    y1=rad*sin(0);
    startx=x1;
    starty=y1;
    int val;
    int i=0;
    do
    {
        val=pow(2,i);
        i++;
    }while(val<rad);



    float e=1/pow(2,i-1);



    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POINTS);
    do
    {
        x2=x1+y1*e;
        y2=y1-e*x2;



        glVertex2f(xini+x2,yini+y2);



        x1=x2;
        y1=y2;



    }while((y1-starty)<e||(startx-x1)>e);



  glEnd();
  glFlush();



}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    if (value==1)
        return;
    else if(value==2)
    {
        glPushMatrix();
        glColor3d(1.0,1.0,1.0);
        dda_circle();
        glPopMatrix();
    }
    glFlush();
}




int main(int argc, char** argv)
{
    cout<<"Enter center coordinates of circle :";
	cin>>xini>>yini;
	cout<<"Enter Radius :";
	cin>>rad;
    glutInit(&argc, argv);
    glutCreateWindow("Circle using DDA:");
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700,700);
	glutInitWindowPosition(100,150);
    glutDisplayFunc(display);
    createmenu();
    dda_circle();
    myInit();
    glutMainLoop();
}
