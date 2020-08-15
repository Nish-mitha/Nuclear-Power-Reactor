#include<stdio.h>
#include<windows.h>
#include<GL/glut.h>
#include<math.h>
void drawRectangle(float x1, float x2, float y1, float y2);
void drawLine(float x1, float x2, float y1, float y2);
void drawCircle(float x, float y ,float q, int n);
void drawTriangle(float x1, float x2, float x3, float y1, float y2, float y3);
void drawCircleNeg(float x,float y, float r,int n);
void drawCirclePitte(float x,float y, float r,int n);
void drawRectanglePol(float x1, float x2, float y1, float y2);

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.22, 0.31, 0.44);
    glLineWidth(5.0);
    /*reactor vessel*/
    drawRectangle(-0.8,-0.5,0.2,0.5);
    drawRectangle(-0.6,-0.7,0.3,0.4);
    glColor3f(0.7, 0.3, 0.0);
    drawCirclePitte(-0.65, 0.35, 0.02, 360);
    /*control rods*/
    glColor3f(0.4, 0.6, 0.0);
    drawLine(-0.63, -0.63, 0.44, 0.58);
    drawLine(-0.64, -0.64, 0.44, 0.58);
    drawLine(-0.65, -0.65, 0.44, 0.58);
    /*steam generator*/
    glColor3f(0.22, 0.31, 0.44);
    drawLine(-0.4, -0.4, 0.3, 0.5);
    drawLine(-0.15, -0.15, 0.3, 0.5);
    drawCircle(-0.275, 0.5, 0.125, 180);
    drawCircleNeg(-0.275, 0.3, 0.125, 180);

    /*pump*/
    glColor3f(0.7, 0.3, 0.0);
    drawLine(-0.52, -0.35, 0.4, 0.4);
    drawLine(-0.52, -0.32, 0.38, 0.38);
    drawLine(-0.35, -0.35, 0.4, 0.5);
    drawLine(-0.32, -0.32, 0.38, 0.48);
    drawLine(-0.35, -0.2, 0.5, 0.5);
    drawLine(-0.32, -0.22, 0.48, 0.48);
    drawLine(-0.2, -0.2, 0.5, 0.1);
    drawLine(-0.22, -0.22, 0.48, 0.12);
    drawLine(-0.2, -0.85, 0.1, 0.1);
    drawLine(-0.22, -0.83, 0.12, 0.12);
    drawLine(-0.85, -0.85, 0.1, 0.45);
    drawLine(-0.83, -0.83, 0.12, 0.43);
    drawLine(-0.85, -0.76, 0.45, 0.45);
    drawLine(-0.83, -0.76, 0.43, 0.43);
    drawCirclePitte(-0.45, 0.11, 0.02, 360);

    /*constraint structure*/
    glColor3f(0.22, 0.31, 0.44);
    drawLine(-0.1, -0.1, 0.05, 0.58);
    drawLine(-0.9, -0.9, 0.05, 0.58);
    drawLine(-0.1, -0.9, 0.05, 0.05);
    drawCircle(-0.5, 0.58, 0.4, 180);


    /*generator*/
    glColor3f(0.22, 0.31, 0.44);
    drawLine(0.15, 0.15, 0.05, 0.5);
    drawLine(0.6, 0.6, 0.05, 0.7);
    drawLine(0.15, 0.6, 0.5, 0.7);
    drawLine(0.15, 0.6, 0.05, 0.05);

    /*condesor cooling water*/
    glColor3f(0.7, 0.3, 0.0);
    drawLine(0.2, 0.7, 0.15, 0.15);
    drawLine(0.2, 0.7, 0.15, 0.15);
    drawLine(0.22, 0.7, 0.17, 0.17);
    drawLine(0.2, 0.2, 0.15, 0.25);
    drawLine(0.22, 0.22, 0.17, 0.23);
    drawLine(0.2, 0.7, 0.25, 0.25);
    drawLine(0.22, 0.7, 0.23, 0.23);

    /*turbine*/
    glColor3f(0.3, 0.1, 0.01);
    drawRectanglePol(0.35, 0.75, 0.38, 0.41);
    drawCircle(0.27, 0.38, 0.1, 360);
    drawCircle(0.27, 0.38, 0.09, 360);
    drawTriangle(0.27, 0.22, 0.22, 0.38, 0.33, 0.42);
    drawTriangle(0.27, 0.27, 0.35, 0.38, 0.45, 0.40);
    drawTriangle(0.27, 0.22, 0.3, 0.38, 0.3, 0.3);

    /*out turbine*/
    glColor3f(0.22, 0.31, 0.44);
    drawRectangle(0.6, 0.85, 0.3, 0.5);
    glColor3f(0,0,1);
    drawRectanglePol(0.6, 0.8, 0.3, 0.35);
    drawRectanglePol(0.62, 0.65, 0.35, 0.45);
    drawRectanglePol(0.67, 0.7, 0.35, 0.45);
    drawRectanglePol(0.72, 0.75, 0.35, 0.45);

    /*steam line*/
    glColor3f(0.7, 0.3, 0.0);
    drawLine(-0.3, -0.3, 0.58, 0.68);
    drawLine(-0.28, -0.28, 0.58, 0.66);
    drawLine(-0.3, 0.23, 0.68, 0.68);
    drawLine(-0.28, 0.21, 0.66, 0.66);
    drawLine(0.23, 0.23, 0.68, 0.5);
    drawLine(0.21, 0.21, 0.66, 0.5);
    drawLine(0.21, 0.19, 0.5, 0.46);
    drawLine(0.23, 0.25, 0.5, 0.46);
    drawLine(0.19, 0.25, 0.46, 0.46);

    /*center pump*/
    glColor3f(0.7, 0.3, 0.0);
    drawLine(-0.18, 0.0, 0.25, 0.25);
    drawLine(-0.18, -0.02, 0.23, 0.23);
    drawLine(-0.0, 0.0, 0.25, 0.1);
    drawLine(-0.02, -0.02, 0.23, 0.08);
    drawLine(0.0, 0.23, 0.1, 0.1);
    drawLine(-0.02, 0.23, 0.08, 0.08);
    glColor3f(0.7, 0.3, 0.0);
    drawCirclePitte(-0.01, 0.238, 0.02, 360);

    /*street light*/
    glColor3f(0,0,0);
    drawRectangle(0.69, 0.9, 0.7, 0.73);
    drawLine(0.7, 0.73, 0.73, 0.9);
    drawLine(0.88, 0.85, 0.73, 0.9);
    drawLine(0.73, 0.85, 0.9, 0.9);

    drawLine(0.72, 0.86, 0.81, 0.81);

    drawLine(0.7, 0.86, 0.73, 0.81);
    drawLine(0.88, 0.72, 0.73, 0.81);

    drawLine(0.73, 0.86, 0.9, 0.81);
    drawLine(0.72, 0.85, 0.81, 0.9);

    drawRectangle(0.73, 0.85, 0.9, 0.95);

    drawLine(0.73, 0.7, 0.95, 0.99);
    drawLine(0.85, 0.88, 0.95, 0.99);
    drawLine(0.7, 0.79, 0.99, 0.95);
    drawLine(0.88, 0.79, 0.99, 0.95);

    /*home*/
    glColor3f(0,1,0);
    drawRectanglePol(0.2, 0.4, 0.75, 0.99);
    glColor3f(1,1,1);
    drawRectanglePol(0.24, 0.36, 0.79, 0.95);
    glColor3f(1,1,1);
    drawRectanglePol(0.28, 0.32, 0.76, 0.78);
    glColor3f(0,0,0);
    drawLine(0.27, 0.27, 0.79, 0.95);
    glColor3f(0,0,0);
    drawLine(0.3, 0.3, 0.79, 0.95);
    glColor3f(0,0,0);
    drawLine(0.33, 0.33, 0.79, 0.95);
    glColor3f(0,0,0);
    drawLine(0.24, 0.36, 0.84, 0.84);
    glColor3f(0,0,0);
    drawLine(0.24, 0.36, 0.89, 0.89);
    glColor3f(0,0,0);
    drawLine(0.3, 0.3, 0.76, 0.78);
    glColor3f(0,1,0);
    drawRectanglePol(0.38,0.375,0.99,1.0);
    glColor3f(0,1,0);
    drawRectanglePol(0.36,0.373,0.99,1.0);

    glFlush();

}
void drawRectangle(float x1, float x2, float y1, float y2)
{
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
}
void drawRectanglePol(float x1, float x2, float y1, float y2)
{
    glBegin(GL_POLYGON);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
}
void drawLine(float x1, float x2, float y1,float y2)
{
    glBegin(GL_LINES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();
}
void drawCircle(float x,float y, float r,int n)
{
    float theta;
    glBegin(GL_LINE_STRIP);
        for (int i = 0; i < n; i++)
        {
            theta = i * 3.142/180;
            glVertex2f(x + r*cos(theta), y + r*sin(theta));
        }


    glEnd();
}
void drawCirclePitte(float x,float y, float r,int n)
{
    float theta;
    glBegin(GL_POLYGON);
        for (int i = 0; i < n; i++)
        {
            theta = i * 3.142/180;
            glVertex2f(x + r*cos(theta), y + r*sin(theta));
        }


    glEnd();
}
void drawCircleNeg(float x,float y, float r,int n)
{
    float theta;
    glBegin(GL_LINE_STRIP);
        for (int i = 0; i < n; i++)
        {
            theta = -i * 3.142/180;
            glVertex2f(x + r*cos(theta), y + r*sin(theta));
        }


    glEnd();
}

void drawTriangle(float x1, float x2, float x3, float y1, float y2, float y3)
{
    glBegin(GL_POLYGON);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glEnd();
}



void myinit()
{
    glClearColor(1.0,1.0,1.0,1.0);
    gluOrtho2D(-1.0,1.0,-0.1,1.0);
}
int main(int args,char **argv)
{
    glutInit(&args,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutInitWindowSize(1500,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow("NUCLEAR POWER PLANT");
    myinit();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
