#include<stdio.h>
#include<windows.h>
#include<GL/glut.h>
#include<time.h>
#include<math.h>
void drawCircle(float posX,float posY ,float radius);
void drawTriangle(float x1,float y1,float x2,float y2,float x3,float y3);
void drawFan(float x1,float y1,float x2,float y2,float x3,float y3);
void drawLine(float x1,float x2,float y1,float y2);
int flag=0;
float th=0.0;
float trX=0.0,trY=0.0;
void drawText(const char str[],float x,float y,float j);
void keyboard(unsigned char key,int x,int y);
void menu();
void intro();
void working();
void reaction();
void about();
void delay(int);
void display();
void drawQuad(float x1,float y1,float x2, float y2,float x3, float y3,float x4, float y4);
void drawRectangle(float x1, float x2, float y1, float y2);
void drawSemiCircle(float posX,float posY ,float radius,int n,char figure);
void windows(float winlight1,float winlight2,float winlight3);
void streetlight();
void background(float cirlight1,float cirlight2);
void village(float winlight1,float winlight2,float winlight3,float cirlight1,float cirlight2);
void controlRods(float y1,float y2);
void drawpoint(float x,float y);

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    if(flag==0)
        intro();
    if(flag==1)
        menu();
    if(flag==2)
        working();
    if(flag==3)
        reaction();
    if(flag==4)
        about();
}
void intro()
{
    glClearColor(0.15,0.1,0.01,0);/*background for cover page*/
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    drawText(" CANARA ENGINEERING COLLEGE",-0.5,0.9,0.04);
    glColor3f(0.7,0,1);
    drawText(" DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING",-0.92,0.8,0.04);
    glColor3f(1,0.5,0);
    drawText(" A MINI PROJECT ON ",-0.45,0.6,0.055);
    glColor3f(0.2,0.7,0);
    drawText(" NUCLEAR POWER PLANT",-0.35,0.5,0.04);
    glColor3f(1,0.5,0);
    drawText(" BY:",-0.7,0.3,0.03);
    glColor3f(1,1,1);
    drawText(" Name:",-0.95,0.2,0.025);
    drawText(" Name:",-0.95,0.1,0.025);
    glColor3f(1,0.9,0);
    drawText(" NISHMITHA",-0.83,0.2,0.04);
    drawText(" HARSHITHA",-0.83,0.1,0.04);
    glColor3f(1,0.5,0);
    drawText(" GUIDE:",0.54,0.3,0.04);
    glColor3f(1,1,1);
    drawText(" Name:",0.45,0.2,0.025);
    glColor3f(1,0.9,0);
    drawText(" SHATANAND BHAT",0.59,0.2,0.023);
    glColor3f(1,0.1,1);
    drawText(" PRESS ENTER TO START",-0.3,-0.03,0.03);
    glFlush();
}
void menu()
{
    glClearColor(0.15,0.1,0.01,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.7,0,1);
    drawText(" MENU",-0.2,0.85,0.1);
    glColor3f(1,1,1);
    drawText(" PRESS",-0.8,0.64,0.03);
    glColor3f(1,0,0);
    drawText(" 1.         'A'            -         WORKING",-0.9,0.64,0.03);
    glColor3f(1,1,1);
    drawText(" PRESS",-0.8,0.44,0.03);
    glColor3f(0.9,0.9,0);
    drawText(" 2.         'B'            -         INTERNAL REACTION",-0.9,0.44,0.03);
    glColor3f(1,1,1);
    drawText(" PRESS",-0.8,0.24,0.03);
    glColor3f(0,0.5,1);
    drawText(" 3.         'C'            -         ABOUT NUCLEAR POWER PLANT",-0.9,0.24,0.03);
    glColor3f(1,1,1);
    drawText(" PRESS",-0.8,0.04,0.03);
    glColor3f(0,1,0);
    drawText(" 4.         'E'            -         QUIT",-0.9,0.04,0.03);
    glFlush();
}
void controlRods(float y1, float y2)
{
    glLineWidth(4.0);
    drawLine(-0.66, -0.66, y1, y2);
    drawLine(-0.65, -0.65, y1, y2);
    drawLine(-0.64, -0.64, y1, y2);
    glutSwapBuffers();
}
void working()
{
    glClearColor(0.15,0.1,0.01,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //constraint structure
    glLineWidth(5.0);
    glColor3f(0.22, 0.31, 0.44);
    drawLine(-0.2, -0.2, -0.05, 0.38);
    drawLine(-0.83, -0.83, -0.05, 0.38);
    drawLine(-0.2, -0.83, -0.05, -0.05);
    drawSemiCircle(-0.515, 0.35, 0.315,1,'l');

    //reactor vessel
    glColor3f(0.22, 0.31, 0.44);
    glLineWidth(5.0);
    drawRectangle(-0.75,-0.55,0.1,0.3);
    //control rods
    glColor3f(0,0,0);
    controlRods(0.4,0.23);
    //stored water
    glColor3f(0,0, 0.44);
    drawQuad(-0.747,0.105,-0.747,0.25,-0.553,0.25,-0.553,0.105);
    glColor3f(0.2,0.2,0.2);
    drawRectangle(-0.619,-0.679,0.17,0.23);
    glColor3f(0.7, 0.3, 0.0);
    drawCircle(-0.65, 0.2, 0.02);


    //steam generator
    glColor3f(0.22, 0.31, 0.44);
    drawLine(-0.45, -0.45, 0.19, 0.36);
    drawLine(-0.25, -0.25, 0.19, 0.36);
    drawSemiCircle(-0.35, 0.35, 0.1,1,'l');
    drawSemiCircle(-0.35, 0.2, 0.1,-1,'l');
    //stored water
    glColor3f(0,0, 0.44);
    drawSemiCircle(-0.35,0.2,0.099,-1,'s');
    drawQuad(-0.448,0.19,-0.448,0.23,-0.252,0.23,-0.252,0.19);

    //generator
    glLineWidth(5.0);
    glColor3f(0.22, 0.31, 0.44);
    drawLine(0.0, 0.0, -0.05, 0.4);
    drawLine(0.5, 0.5, -0.05, 0.6);
    drawLine(0.0, 0.5, 0.4, 0.6);
    drawLine(0.0, 0.5,  -0.05,  -0.05);

    //stored water
    glColor3f(0,0, 0.44);
    drawQuad(0.003,-0.047,0.003,0.03,0.4955,0.03,0.4955,-0.047);


    //pump
    glLineWidth(3.0);
    glColor3f(0.7, 0.3, 0.0);
    drawLine(-0.72,-0.795,0.275,0.275);
    drawLine(-0.72,-0.78,0.26,0.26);
    drawLine(-0.795,-0.795,0.275,0.0);
    drawLine(-0.78,-0.78,0.26,0.015);
    drawLine(-0.795,-0.29,0.0,0.0);
    drawLine(-0.78,-0.3,0.015,0.015);
    drawLine(-0.29,-0.29,0.0,0.35);
    drawLine(-0.3,-0.3,0.015,0.335);
    drawLine(-0.3,-0.388,0.335,0.335);
    drawLine(-0.29,-0.4,0.35,0.35);
    drawLine(-0.388,-0.388,0.335,0.229);
    drawLine(-0.4,-0.4,0.35,0.24);
    drawLine(-0.388,-0.57,0.229,0.229);
    drawLine(-0.4,-0.57,0.24,0.24);
    drawCircle(-0.5, 0.011, 0.02);

    //steam line
    glLineWidth(3.0);
    glColor3f(0.7, 0.3, 0.0);
    drawLine(-0.36, -0.36, 0.4, 0.5);
    drawLine(-0.35, -0.35, 0.4, 0.485);
    drawLine(-0.36, 0.1, 0.5, 0.5);
    drawLine(-0.35, 0.0885, 0.485, 0.485);
    drawLine(0.1, 0.1, 0.5, 0.42);
    drawLine(0.0885, 0.0885, 0.485, 0.42);

    //center pump
    glLineWidth(3.0);
    glColor3f(0.7, 0.3, 0.0);
    drawLine(-0.12, 0.02, 0.01, 0.01);
    drawLine(-0.13,0.02, 0.0, 0.0);
    drawLine(-0.12, -0.12, 0.01, 0.22);
    drawLine(-0.13, -0.13, 0.0, 0.22);
    drawCircle(-0.125, 0.22, 0.02);
    drawLine(-0.125, -0.27, 0.225, 0.225);
    drawLine(-0.125, -0.27, 0.215, 0.215);


    //condensor cooling water
    glLineWidth(3.0);
    glColor3f(0.7, 0.3, 0.0);
    drawLine(0.1, 0.6, 0.05, 0.05);
    drawLine(0.113, 0.6, 0.063, 0.063);
    drawLine(0.113, 0.113, 0.063, 0.15);
    drawLine(0.1, 0.1, 0.05, 0.165);
    drawLine(0.113, 0.6, 0.15, 0.15);
    drawLine(0.1, 0.6, 0.165, 0.165);

    //turbine
    glLineWidth(5.0);
    glColor3f(0, 0, 0);
    drawQuad(0.23, 0.31, 0.669, 0.31,0.669,0.29,0.23,0.29);
    drawSemiCircle(0.15, 0.3, 0.1,1,'l');
    drawSemiCircle(0.15, 0.3, 0.1,-1,'l');
    drawSemiCircle(0.15, 0.3, 0.08,1,'l');
    drawSemiCircle(0.15,0.3,0.08,-1,'l');
    drawCircle(0.15,0.3,0.01);
    drawTriangle(0.15, 0.31, 0.1, 0.36, 0.2, 0.36);
    drawTriangle(0.143, 0.295, 0.07, 0.31, 0.15, 0.22);
    drawTriangle(0.155, 0.299, 0.23, 0.315, 0.19, 0.235);

    //out turbine
    glColor3f(0.22, 0.31, 0.44);
    drawRectangle(0.5, 0.7, 0.4, 0.2);
    glColor3f(0.44,0,1);
    drawQuad(0.503, 0.203, 0.503, 0.235,0.669,0.235,0.669,0.203);
    drawQuad(0.52, 0.235, 0.52, 0.35,0.54,0.35,0.54,0.235);
    drawQuad(0.57,0.235,0.57,0.35,0.59,0.35,0.59,0.235);
    drawQuad(0.62,0.235,0.62,0.35,0.64,0.35,0.64,.235);

    //Power Supplier
    glLineWidth(5.0);
    glColor3f(0,0,0);
    drawQuad(0.79, 0.4, 0.79, 0.41,0.95,0.41,0.95,0.4);
    drawLine(0.79, 0.82, 0.4, 0.55);
    drawLine(0.95, 0.92, 0.4, 0.55);
    drawQuad(0.82, 0.55, 0.82, 0.57,0.92,0.57,0.92,0.55);
    drawLine(0.81, 0.93, 0.48, 0.48);
    drawLine(0.79, 0.93, 0.41, 0.48);
    drawLine(0.95, 0.81, 0.41, 0.48);
    drawLine(0.93, 0.82, 0.48, 0.55);
    drawLine(0.81, 0.92, 0.48, 0.55);
    drawLine(0.82, 0.79, 0.57, 0.62);
    drawLine(0.92, 0.95, 0.57, 0.62);
    drawLine(0.79, 0.865, 0.62, 0.57);
    drawLine(0.95, 0.865, 0.62, 0.57);


    //Overlap constraint structure
    glLineWidth(5.0);
    glColor3f(0.22, 0.31, 0.44);
    drawLine(-0.2, -0.2, -0.05, 0.38);
    drawLine(-0.83, -0.83, -0.05, 0.38);
    drawLine(-0.2, -0.83, -0.05, -0.05);
    drawSemiCircle(-0.515, 0.35, 0.315,1,'l');

    //overlap reactor vessel
    glColor3f(0.22, 0.31, 0.44);
    glLineWidth(5.0);
    drawRectangle(-0.75,-0.55,0.1,0.3);
    glColor3f(0.2,0.2,0.2);
    drawRectangle(-0.619,-0.679,0.17,0.23);
    glColor3f(0.7, 0.3, 0.0);
    drawCircle(-0.65, 0.2, 0.02);

    //overlap generator
    glLineWidth(5.0);
    glColor3f(0.22, 0.31, 0.44);
    drawLine(0.0, 0.0, -0.05, 0.4);
    drawLine(0.5, 0.5, -0.05, 0.6);
    drawLine(0.0, 0.5, 0.4, 0.6);
    drawLine(0.0, 0.5,  -0.05,  -0.05);

    //overlap steam generator
    glColor3f(0.22, 0.31, 0.44);
    drawLine(-0.45, -0.45, 0.19, 0.36);
    drawLine(-0.25, -0.25, 0.19, 0.36);
    drawSemiCircle(-0.35, 0.35, 0.1,1,'l');
    drawSemiCircle(-0.35, 0.2, 0.1,-1,'l');
    glFlush();
    delay(300);

    //Marking
    glColor3f(1,0,0);
    drawText(" turbine",0.13,0.42,0.019);
    drawText(" condensor cooling water",0.12,0.1,0.0166);
    glFlush();
    delay(500);
    drawText(" constraint structure",-0.71,0.55,0.02);
    drawText(" steam",-0.46,0.07,0.019);
    glFlush();
    delay(500);
    drawText(" generator",-0.47,0.03,0.019);
    drawText(" reactor vessel",-0.77,0.04,0.015);
    glFlush();
    delay(500);
    drawText(" core",-0.68,0.13,0.015);
    drawText(" control rods",-0.68,0.41,0.015);
    drawText(" pump",-0.53,-0.03,0.027);
    glFlush();
    delay(500);
    drawText(" generator",0.27,0.33,0.019);
    drawText(" steam line",-0.17,0.52,0.023);
    drawText(" pump",-0.138,0.26,0.028);
    glFlush();
    delay(500);

    village(1,1,1,0,0);

    //wires
    glLineWidth(4);
    glColor3f(1,0.4,0.4);
    drawLine(0.7,0.75,0.4,0.45);
    drawLine(0.7,0.85,0.4,0.45);
    drawLine(0.75,0.8,0.45,0.5);
    drawLine(0.85,0.9,0.45,0.5);
    drawLine(0.8,0.82,0.5,0.55);
    drawLine(0.9,0.92,0.5,0.55);
    drawLine(0.79,0.84,0.62,0.68);
    drawLine(0.95,0.93,0.62,0.68);
    //city power wires
    glLineWidth(2.9);
    glColor3f(0.3,0.3,0.3);
    drawLine(0.84,0.86,0.68,0.87);
    drawLine(0.93,0.94,0.68,0.87);
    drawLine(0.84,0.86,0.68,0.85);
    drawLine(0.93,0.94,0.68,0.85);
    drawLine(0.84,0.86,0.68,0.83);
    drawLine(0.93,0.94,0.68,0.83);
    glFlush();
    delay(1000);

    //working
    //movement of control rods
    glColor3f(0.15,0.1,0.01);
    controlRods(0.28,0.25);
    glFlush();
    delay(1000);
    glColor3f(0,0,0);
    controlRods(0.4,0.28);

    glColor3f(0,0,1);
    glPointSize(3);
    drawpoint(-0.628,0.288);
    drawpoint(-0.71,0.28);
    drawpoint(-0.63,0.25);
    drawpoint(-0.61,0.26);
    drawpoint(-0.66,0.27);
    drawpoint(-0.7,0.26);
    drawpoint(-0.59,0.25);

    //water Flow
    //condensor cooling water
    glColor3f(0,0,0.7);
    drawQuad(0.6,0.051,0.55,0.051,0.55,0.061,0.6,0.061);
    drawQuad(0.55,0.051,0.5,0.051,0.5,0.061,0.55,0.061);
    drawQuad(0.4,0.051,0.55,0.051,0.55,0.061,0.4,0.061);
    drawQuad(0.45,0.051,0.4,0.051,0.4,0.061,0.45,0.061);
    drawQuad(0.3,0.051,0.45,0.051,0.45,0.061,0.3,0.061);
    drawQuad(0.35,0.051,0.3,0.051,0.3,0.061,0.35,0.061);
    drawQuad(0.2,0.051,0.35,0.051,0.35,0.061,0.2,0.061);
    drawQuad(0.25,0.051,0.2,0.051,0.2,0.061,0.25,0.061);
    drawQuad(0.1,0.051,0.25,0.051,0.25,0.061,0.1,0.061);
    drawQuad(0.15,0.051,0.1,0.051,0.1,0.061,0.15,0.061);
    drawQuad(0.1,0.051,0.1,0.1,0.11,0.1,0.11,0.051);
    drawQuad(0.1,0.1,0.1,0.16,0.11,0.16,0.11,0.1);
    drawQuad(0.15,0.153,0.1,0.153,0.1,0.163,0.15,0.163);
    drawQuad(0.1,0.153,0.25,0.153,0.25,0.163,0.1,0.163);
    drawQuad(0.25,0.153,0.2,0.153,0.2,0.163,0.25,0.163);
    drawQuad(0.2,0.153,0.35,0.153,0.35,0.163,0.2,0.163);
    drawQuad(0.35,0.153,0.3,0.153,0.3,0.163,0.35,0.163);
    drawQuad(0.3,0.153,0.45,0.153,0.45,0.163,0.3,0.163);
    drawQuad(0.45,0.153,0.4,0.153,0.4,0.163,0.45,0.163);
    drawQuad(0.4,0.153,0.55,0.153,0.55,0.163,0.4,0.163);
    drawQuad(0.55,0.153,0.5,0.153,0.5,0.163,0.55,0.163);
    drawQuad(0.6,0.153,0.55,0.153,0.55,0.163,0.6,0.163);

    //pump
    drawQuad(-0.57,0.231,-0.57,0.24,-0.55,0.24,-0.55,0.231);
    drawQuad(-0.55,0.231,-0.55,0.24,-0.52,0.24,-0.52,0.231);
    drawQuad(-0.52,0.231,-0.52,0.24,-0.5,0.24,-0.5,0.231);
    drawQuad(-0.5,0.231,-0.5,0.24,-0.48,0.24,-0.48,0.231);
    drawQuad(-0.48,0.231,-0.48,0.24,-0.44,0.24,-0.44,0.231);
    drawQuad(-0.44,0.231,-0.44,0.24,-0.4,0.24,-0.4,0.231);
    drawQuad(-0.4,0.231,-0.4,0.24,-0.39,0.24,-0.39,0.231);

    drawQuad(-0.4,0.231,-0.4,0.25,-0.39,0.25,-0.39,0.231);
    drawQuad(-0.4,0.25,-0.4,0.28,-0.39,0.28,-0.39,0.25);
    drawQuad(-0.4,0.28,-0.4,0.32,-0.39,0.32,-0.39,0.28);
    drawQuad(-0.4,0.32,-0.4,0.35,-0.39,0.35,-0.39,0.32);

    drawQuad(-0.39,0.339,-0.39,0.35,-0.34,0.35,-0.34,0.339);
    drawQuad(-0.34,0.339,-0.34,0.35,-0.29,0.35,-0.29,0.339);

    drawQuad(-0.3,0.339,-0.29,0.339,-0.29,0.3,-0.3,0.3);
    drawQuad(-0.3,0.3,-0.29,0.3,-0.29,0.28,-0.3,0.28);
    drawQuad(-0.3,0.28,-0.29,0.28,-0.29,0.24,-0.3,0.24);
    drawQuad(-0.3,0.24,-0.29,0.24,-0.29,0.2,-0.3,0.2);
    drawQuad(-0.3,0.2,-0.29,0.2,-0.29,0.18,-0.3,0.18);
    drawQuad(-0.3,0.18,-0.29,0.18,-0.29,0.14,-0.3,0.14);
    drawQuad(-0.3,0.14,-0.29,0.14,-0.29,0.1,-0.3,0.1);
    drawQuad(-0.3,0.1,-0.29,0.1,-0.29,0.08,-0.3,0.08);
    drawQuad(-0.3,0.08,-0.29,0.08,-0.29,0.04,-0.3,0.04);
    drawQuad(-0.3,0.04,-0.29,0.04,-0.29,0.0,-0.3,0.0);

    drawQuad(-0.34,0.0,-0.34,0.014,-0.29,0.014,-0.29,0.0);
    drawQuad(-0.39,0.0,-0.39,0.014,-0.34,0.014,-0.34,0.0);
    drawQuad(-0.42,0.0,-0.42,0.014,-0.39,0.014,-0.39,0.0);
    drawQuad(-0.45,0.0,-0.45,0.014,-0.42,0.014,-0.42,0.0);
    drawQuad(-0.48,0.0,-0.48,0.014,-0.45,0.014,-0.45,0.0);
    drawQuad(-0.55,0.0,-0.55,0.014,-0.52,0.014,-0.52,0.0);
    drawQuad(-0.59,0.0,-0.59,0.014,-0.55,0.014,-0.55,0.0);
    drawQuad(-0.64,0.0,-0.64,0.014,-0.59,0.014,-0.59,0.0);
    drawQuad(-0.68,0.0,-0.68,0.014,-0.64,0.014,-0.64,0.0);
    drawQuad(-0.72,0.0,-0.72,0.014,-0.68,0.014,-0.68,0.0);
    drawQuad(-0.77,0.0,-0.77,0.014,-0.72,0.014,-0.72,0.0);
    drawQuad(-0.793,0.0,-0.793,0.014,-0.77,0.014,-0.77,0.0);

    drawQuad(-0.783,0.04,-0.793,0.04,-0.793,0.0,-0.783,0.0);
    drawQuad(-0.783,0.08,-0.793,0.08,-0.793,0.04,-0.783,0.04);
    drawQuad(-0.783,0.1,-0.793,0.1,-0.793,0.08,-0.783,0.08);
    drawQuad(-0.783,0.14,-0.793,0.14,-0.793,0.1,-0.783,0.1);
    drawQuad(-0.783,0.18,-0.793,0.18,-0.793,0.14,-0.783,0.14);
    drawQuad(-0.783,0.2,-0.793,0.2,-0.793,0.18,-0.783,0.18);
    drawQuad(-0.783,0.24,-0.793,0.24,-0.793,0.2,-0.783,0.2);
    drawQuad(-0.783,0.274,-0.793,0.274,-0.793,0.24,-0.783,0.24);

    drawQuad(-0.783,0.274,-0.74,0.274,-0.74,0.26,-0.783,0.26);
    drawQuad(-0.74,0.274,-0.72,0.274,-0.72,0.26,-0.74,0.26);
    glFlush();
    delay(400);

    //steam
    glColor3f(0.9,0.9,0.9);
    glPointSize(2);
    drawpoint(-0.34,0.3);
    drawpoint(-0.42,0.36);
    drawpoint(-0.27,0.35);
    drawpoint(-0.32,0.29);
    drawpoint(-0.38,0.37);
    drawpoint(-0.42,0.41);
    drawpoint(-0.33,0.32);
    drawpoint(-0.2687,0.39);
    drawpoint(-0.332,0.41);
    drawpoint(-0.34,0.28);
    drawpoint(-0.44,0.27);
    drawpoint(-0.43,0.24);
    drawpoint(-0.31,0.33);
    drawpoint(-0.28,0.29);
    drawpoint(-0.26,0.27);
    drawpoint(-0.4,0.27);
    drawpoint(-0.35,0.24);
    drawpoint(-0.37,0.33);
    drawpoint(-0.29,0.29);
    drawpoint(-0.366,0.27);
    glFlush();
    delay(200);

    //steam line
    glColor3f(0,0,0.7);
    drawQuad(-0.36,0.4,-0.36,0.44,-0.35,0.44,-0.35,0.4);
    drawQuad(-0.36,0.44,-0.36,0.497,-0.35,0.497,-0.35,0.44);
    drawQuad(-0.35,0.488,-0.35,0.497,-0.3,0.497,-0.3,0.488);
    drawQuad(-0.3,0.488,-0.3,0.497,-0.28,0.497,-0.28,0.488);
    drawQuad(-0.28,0.488,-0.28,0.497,-0.24,0.497,-0.24,0.488);
    drawQuad(-0.24,0.488,-0.24,0.497,-0.2,0.497,-0.2,0.488);
    drawQuad(-0.2,0.488,-0.2,0.497,-0.18,0.497,-0.18,0.488);
    drawQuad(-0.18,0.488,-0.18,0.497,-0.14,0.497,-0.14,0.488);
    drawQuad(-0.14,0.488,-0.14,0.497,-0.1,0.497,-0.1,0.488);
    drawQuad(-0.1,0.488,-0.1,0.497,-0.08,0.497,-0.08,0.488);
    drawQuad(-0.08,0.488,-0.08,0.497,-0.04,0.497,-0.04,0.488);
    drawQuad(-0.04,0.488,-0.04,0.497,0.0,0.497,0.0,0.488);
    drawQuad(0,0.488,0,0.497,0.04,0.497,0.04,0.488);
    drawQuad(0.04,0.488,0.04,0.497,0.08,0.497,0.08,0.488);
    drawQuad(0.08,0.488,0.08,0.497,0.099,0.497,0.099,0.488);
    drawQuad(0.091,0.42,0.091,0.497,0.099,0.497,0.099,0.42);
    glColor3f(0.3,0.3,0.3);
    drawQuad(0.0885,0.42,0.07,0.38,0.12,0.38,0.1,0.42);

    //turbine rotation
    glPushMatrix();
    for(int i=0;i<=100;i++)
    {
        glColor3f(0, 0, 0);
        drawCircle(0.15,0.3,0.01);
        trX=0.15; trY=0.3; th+=0.9;
        glTranslatef(trX,trY,0.0);
        glRotatef(th,0.0,0.0,1.0);
        glTranslatef(-trX,-trY,0.0);
        drawFan(0.15, 0.31, 0.1, 0.36, 0.2, 0.36);
        drawFan(0.143, 0.295, 0.07, 0.31, 0.15, 0.22);
        drawFan(0.155, 0.299, 0.23, 0.315, 0.19, 0.235);
        glColor3f(0.15,0.1,0.01);
        drawCircle(0.15,0.3,0.078);
        glFlush();

    }
    glPopMatrix();

    glColor3f(0, 0, 0);
    drawCircle(0.15,0.3,0.01);
    drawFan(0.15, 0.31, 0.1, 0.36, 0.2, 0.36);
    drawFan(0.143, 0.295, 0.07, 0.31, 0.15, 0.22);
    drawFan(0.155, 0.299, 0.23, 0.315, 0.19, 0.235);
    glFlush();
    delay(2000);

    //passing current
    glLineWidth(4);
    glColor3f(1,1,0);
    drawLine(0.7,0.75,0.4,0.45);
    glFlush();
    delay(300);
    drawLine(0.7,0.85,0.4,0.45);
    glFlush();
    delay(300);
    drawLine(0.75,0.8,0.45,0.5);
    glFlush();
    delay(300);
    drawLine(0.85,0.9,0.45,0.5);
    glFlush();
    delay(300);
    drawLine(0.8,0.82,0.5,0.55);
    glFlush();
    delay(300);
    drawLine(0.9,0.92,0.5,0.55);
    glFlush();
    delay(300);
    drawLine(0.79,0.84,0.62,0.68);
    glFlush();
    delay(300);
    drawLine(0.95,0.93,0.62,0.68);
    glFlush();
    delay(800);
    //city lights
    glPointSize(5);
    glColor3f(1,1,0);
    drawpoint(0.86,0.87);
    drawpoint(0.86,0.85);
    drawpoint(0.86,0.83);
    drawpoint(0.94,0.87);
    drawpoint(0.94,0.85);
    drawpoint(0.94,0.83);

    //on lights
    background(1,1);
    streetlight();
    windows(0.9,0.9,0);
    glFlush();

}
void background(float cirlight1,float cirlight2)
{
    glColor3f(1,cirlight1,cirlight2);
    drawCircle(-0.9,0.9,0.02);
}
void streetlight()
{
    glColor3f(0.9,0.9,0);
    drawTriangle(-0.99,0.7,-0.95,0.7,-0.97,0.819);
    drawTriangle(-0.37,0.7,-0.35,0.7,-0.36,0.819);
    drawTriangle(-0.32,0.7,-0.3,0.7,-0.31,0.819);
    drawTriangle(0.77,0.7,0.84,0.7,0.78,0.819);
}
void windows(float winlight1,float winlight2,float winlight3)
{
   //windows
    glColor3f(winlight1,winlight2,winlight3);
    //Building1
    drawQuad(-0.89,0.78,-0.89,0.72,-0.86,0.72,-0.86,0.78);
    drawQuad(-0.81,0.78,-0.81,0.72,-0.84,0.72,-0.84,0.78);
    //Building 2
    drawQuad(-0.79,0.85,-0.79,0.83,-0.76,0.83,-0.76,0.85);
    drawQuad(-0.71,0.85,-0.71,0.83,-0.74,0.83,-0.74,0.85);
    drawQuad(-0.79,0.8,-0.79,0.78,-0.76,0.78,-0.76,0.8);
    drawQuad(-0.71,0.8,-0.71,0.78,-0.74,0.78,-0.74,0.8);
    drawQuad(-0.79,0.75,-0.79,0.73,-0.76,0.73,-0.76,0.75);
    drawQuad(-0.71,0.75,-0.71,0.73,-0.74,0.73,-0.74,0.75);
    //Building3
    drawQuad(-0.69,0.83,-0.69,0.81,-0.66,0.81,-0.66,0.83);
    drawQuad(-0.69,0.78,-0.69,0.76,-0.66,0.76,-0.66,0.78);
    drawQuad(-0.69,0.73,-0.69,0.71,-0.66,0.71,-0.66,0.73);
    //Building 4
    drawQuad(-0.59,0.73,-0.59,0.71,-0.56,0.71,-0.56,0.73);
    drawQuad(-0.51,0.73,-0.51,0.71,-0.54,0.71,-0.54,0.73);
    //Building5
    drawQuad(-0.41,0.83,-0.41,0.81,-0.44,0.81,-0.44,0.83);
    drawQuad(-0.41,0.78,-0.41,0.76,-0.44,0.76,-0.44,0.78);
    drawQuad(-0.41,0.73,-0.41,0.71,-0.44,0.71,-0.44,0.73);
    //Building6
    drawQuad(-0.22,0.83,-0.22,0.81,-0.13,0.81,-0.13,0.83);
    drawQuad(-0.22,0.78,-0.22,0.76,-0.13,0.76,-0.13,0.78);
    drawQuad(-0.22,0.73,-0.22,0.71,-0.13,0.71,-0.13,0.73);
    //Building 7
    drawQuad(-0.09,0.73,-0.09,0.71,-0.06,0.71,-0.06,0.73);
    drawQuad(-0.01,0.73,-0.01,0.71,-0.04,0.71,-0.04d,0.73);
    //Building 8
    drawQuad(0.01,0.73,0.01,0.71,0.04,0.71,0.04,0.73);
    drawQuad(0.09,0.73,0.09,0.71,0.06,0.71,0.06,0.73);
    //Building 9
    drawQuad(0.11,0.85,0.11,0.83,0.14,0.83,0.14,0.85);
    drawQuad(0.19,0.85,0.19,0.83,0.16,0.83,0.16,0.85);
    drawQuad(0.11,0.8,0.11,0.78,0.14,0.78,0.14,0.8);
    drawQuad(0.19,0.8,0.19,0.78,0.16,0.78,0.16,0.8);
    drawQuad(0.11,0.75,0.11,0.73,0.14,0.73,0.14,0.75);
    drawQuad(0.19,0.75,0.19,0.73,0.16,0.73,0.16,0.75);
    //Building10
    drawQuad(0.21,0.78,0.21,0.72,0.29,0.72,0.29,0.78);
    //Building11
    drawQuad(0.31,0.84,0.31,0.72,0.34,0.72,0.34,0.84);
    drawQuad(0.38,0.84,0.38,0.72,0.41,0.72,0.41,0.84);
    drawQuad(0.49,0.84,0.49,0.72,0.46,0.72,0.46,0.84);
    //Building12
    drawQuad(0.51,0.86,0.51,0.83,0.54,0.83,0.54,0.86);
    drawQuad(0.58,0.86,0.58,0.83,0.61,0.83,0.61,0.86);
    drawQuad(0.69,0.86,0.69,0.83,0.66,0.83,0.66,0.86);
    drawQuad(0.51,0.75,0.51,0.78,0.54,0.78,0.54,0.75);
    drawQuad(0.58,0.75,0.58,0.78,0.61,0.78,0.61,0.75);
    drawQuad(0.69,0.75,0.69,0.78,0.66,0.78,0.66,0.75);

}
void village(float winlight1,float winlight2,float winlight3,float cirlight1,float cirlight2)
{
    //background
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0);
    glVertex2f(-1,0.7);
    glColor3f(0,0,0);
    glVertex2f(-1,1);
    glColor3f(0,0,0);
    glVertex2f(1,1);
    glColor3f(0.5,0.2,0);
    glVertex2f(1,0.7);
    glEnd();
    background(cirlight1,cirlight2); //sun or moon

    //Light Pole1
    glColor3f(0,0,1);
    drawQuad(-0.94,0.7,-0.95,0.7,-0.95,0.71,-0.94,0.71);
    glLineWidth(3);
    drawLine(-0.945,-0.945,0.71,0.8);
    glLineWidth(2);
    drawLine(-0.945,-0.97,0.8,0.819);
    drawCircle(-0.97,0.819,0.005);

    //light pole2
    glColor3f(0,0,1);
    drawQuad(-0.38,0.7,-0.37,0.7,-0.37,0.71,-0.38,0.71);
    glLineWidth(3);
    drawLine(-0.375,-0.375,0.71,0.8);
    glLineWidth(2);
    drawLine(-0.375,-0.36,0.8,0.819);
    drawCircle(-0.36,0.819,0.005);

    //light pole3
    glColor3f(0,0,1);
    drawQuad(-0.30,0.7,-0.29,0.7,-0.29,0.71,-0.30,0.71);
    glLineWidth(3);
    drawLine(-0.295,-0.295,0.71,0.8);
    glLineWidth(2);
    drawLine(-0.295,-0.31,0.8,0.819);
    drawCircle(-0.31,0.819,0.005);

    //light pole4
    glColor3f(0,0,1);
    drawQuad(0.75,0.7,0.76,0.7,0.76,0.71,0.75,0.71);
    glLineWidth(3);
    drawLine(0.755,0.755,0.71,0.8);
    glLineWidth(2);
    drawLine(0.755,0.78,0.8,0.819);
    drawCircle(0.78,0.819,0.005);

    //Power Supplier
    glColor3f(0,1,0);
    glLineWidth(5);
    drawLine(0.9,0.9,0.7,0.89);
    glLineWidth(3);
    drawLine(0.86,0.94,0.87,0.87);
    drawLine(0.86,0.94,0.85,0.85);
    drawLine(0.86,0.94,0.83,0.83);

    //Buildings
    glColor3f(0.44,0,0);
    drawQuad(-0.8,0.7,-0.8,0.88,-0.7,0.88,-0.7,0.7);
    glColor3f(0.44,0,1);
    drawQuad(-0.9,0.7,-0.8,0.7,-0.8,0.8,-0.9,0.8);
    glColor3f(0.44,0,0.5);
    drawQuad(-0.7,0.7,-0.7,0.84,-0.6,0.84,-0.6,0.7);
    glColor3f(0.44,0.6,1);
    drawQuad(-0.6,0.7,-0.6,0.75,-0.5,0.75,-0.5,0.7);
    glColor3f(0.2,0,1);
    drawQuad(-0.5,0.7,-0.5,0.85,-0.4,0.85,-0.4,0.7);
    glColor3f(0.44,0.3,1);
    drawQuad(-0.25,0.7,-0.25,0.85,-0.1,0.85,-0.1,0.7);
    glColor3f(0.44,0,0);
    drawQuad(-0.1,0.7,-0.1,0.75,0,0.75,0,0.7);
    glColor3f(0.44,0,0.5);
    drawQuad(0,0.7,0,0.75,0.1,0.75,0.1,0.7);
    glColor3f(0.44,0.6,1);
    drawQuad(0.1,0.7,0.1,0.88,0.2,0.88,0.2,0.7);
    glColor3f(0.2,0,1);
    drawQuad(0.2,0.7,0.2,0.8,0.3,0.8,0.3,0.7);
    glColor3f(0.2,0,1);
    drawQuad(0.3,0.7,0.3,0.85,0.5,0.85,0.5,0.7);
    glColor3f(0.44,0,1);
    drawQuad(0.5,0.7,0.5,0.9,0.7,0.9,0.7,0.7);
    windows(winlight1,winlight2,winlight3);
    glFlush();
}


void reaction()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);

    //Neutron
    glColor3f(0.7,0,1);
    drawCircle(-0.8,0.5,0.05);
    glColor3f(0,0,1);
    drawText(" Neutron",-0.9,0.4,0.03);

    //Arrow
    glColor3f(0,1,0);
    drawQuad(-0.7,0.49,-0.3,0.49,-0.3,0.485,-0.7,0.485);
    drawTriangle(-0.3,0.51,-0.25,0.487,-0.3,0.47);

    //U 235
    glColor3f(1,0.5,0);
    drawCircle(-0.15,0.5,0.09);
    glFlush();
    delay(1100);
    glColor3f(0,0,1);
    drawText(" U 235",-0.2,0.35,0.02);

    //Arrow
    glColor3f(0,1,0);
    drawQuad(0.0,0.49,0.3,0.49,0.3,0.485,0.0,0.485);
    drawTriangle(0.3,0.51,0.35,0.487,0.3,0.47);

    //fire
    glColor3f(1.0,0.9,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.5,0.5);
    glVertex2f(0.52,0.55);
    glVertex2f(0.54,0.5);
    glVertex2f(0.6,0.52);
    glVertex2f(0.54,0.45);
    glVertex2f(0.6,0.4);
    glVertex2f(0.5,0.45);
    glVertex2f(0.45,0.4);
    glVertex2f(0.48,0.45);
    glVertex2f(0.4,0.487);
    glVertex2f(0.45,0.5);
    glVertex2f(0.45,0.55);
    glVertex2f(0.5,0.5);
    glEnd();

    //Arrow
    glColor3f(0,1,0);
    drawQuad(0.5,0.57,0.6,0.8,0.6,0.79,0.5,0.56);
    drawTriangle(0.6,0.8,0.56,0.78,0.6,0.75);

    //Light Nucleus
    glColor3f(1,1,1);
    drawCircle(0.63,0.87,0.03);
    glColor3f(0,0,1);
    drawText(" Light    Nucleus",0.69,0.9,0.03);

    //Arrow
    glColor3f(0,1,0);
    drawQuad(0.5,0.4,0.6,0.2,0.6,0.21,0.5,0.39);
    drawTriangle(0.58,0.2,0.62,0.15,0.62,0.22);

    //Heavy Nucleus
    glColor3f(1,0,0);
    drawCircle(0.64,0.1,0.03);
    glColor3f(0,0,1);
    drawText(" Heavy    Nucleus",0.69,0.15,0.03);

    //Arrow
    glColor3f(0,1,0);
    drawLine(0.6,0.75,0.55,0.59);
    drawLine(0.6,0.74,0.5,0.5);
    drawLine(0.6,0.74,0.43,0.4);

    //Neutron1
    glColor3f(0.7,0,1);
    drawCircle(0.78,0.62,0.03);
    glColor3f(1,0,0);
    drawText(" n",0.77,0.61,0.03);

    //Neutron2
    glColor3f(0.7,0,1);
    drawCircle(0.78,0.5,0.03);
    glColor3f(1,0,0);
    drawText(" n",0.77,0.49,0.03);

    //Neutron3
    glColor3f(0.7,0,1);
    drawCircle(0.78,0.4,0.03);
    glColor3f(1,0,0);
    drawText(" n",0.77,0.39,0.03);
    glFlush();
    delay(1000);
    //+Energy
    glColor3f(0,1,0);
    drawText(" +",0.87,0.49,0.03);
    glColor3f(1,0,0);
    drawText("  ENERGY",0.899,0.6,0.03);

    glColor3f(1,0,1);
    drawText("  - Neutrons produced can initiate further fission of U 235,making the reaction to be self sustainable chain reaction.",-0.99,0.01,0.03);
    glFlush();
    delay(1000);
    glColor3f(1,0,0);
    drawText("  NUCLEAR FISSION REACTION",-0.9,0.9,0.05);
    glFlush();
}
void about()
{
    glClearColor(0.15,0.1,0.01,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    drawText(" 1.A nuclear power plant is a thermal power station in which the heat source  is a nuclear reactor.",-0.95,0.9,0.023);
    drawText(" 2.Nuclear reactor is a device to initiate and control a sustained nuclear chain    reaction, the most common use of nuclear reactors is to generate electric energy",-0.95,0.75,0.023);
    drawText(" 3.The nuclear reactor is contained inside the spherical containment building in   the centre.",-0.95,0.6,0.023);
    drawText(" 4.Fission is the splitting of a nucleus into two or more separate nuclei of comparable mass one neutron interacts with one fissionable nucleus",-0.95,0.45,0.023);
    drawText(" 5.A slow moving neutron induces fission in Uranium 235. Fission Products are two heavy nuclides one heavier than the other.",-0.95,0.3,0.023);
    drawText(" 6.A chain reaction refers to a process in which neutron released in fission produced in additional fission in atleast one further nucleus. This nucleus in turn produces neutrons and the process repeats. If the process is controlled it is used for nuclear power or if uncontrolled it is used for nuclear weapon.",-0.95,0.15,0.023);
    glFlush();

}
void drawQuad(float x1,float y1,float x2, float y2,float x3, float y3,float x4, float y4)
{
    glBegin(GL_QUADS);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glVertex2f(x4,y4);
    glEnd();
    glFlush();
    delay(600);
}
void drawpoint(float x,float y)
{
    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
    glFlush();
    delay(100);
}
void drawLine(float x1,float x2,float y1,float y2)
{
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
    glFlush();
    delay(500);
}
void drawText(const char str[],float x,float y,float j)
{
    int len=strlen(str);
    float posx=x;
    for (int i = 0; i <len; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
        glRasterPos2f(x,y);
        if(x>0.9)
        {
          x=posx;
          y=y-0.05;
        }
        x=x+j;
    }

}
void delay(int x)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<i*1000;j++)
            ;
    }
}

void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
    case 13: menu();
             flag=1;
             break;
    case 'A': working();
              flag=2;
              break;
    case 'B': reaction();
              flag=3;
              break;
    case 'C': about();
              flag=4;
              break;
    case 'E': exit(0);
              break;
    default :break;
    }
}
void drawCircle(float posX,float posY ,float radius)
{
    float theta;
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(posX+radius*cos(theta),posY+radius*sin(theta));
    }
    glEnd();
    glFlush();
    delay(300);
}
void drawSemiCircle(float posX,float posY ,float radius,int n,char figure)
{
    float theta;
    if(figure=='s')
    {
        glBegin(GL_POLYGON);
        for(int i=0;i<180;i++)
        {
            if(n==1)
                theta=i*3.142/180;
            else
                theta=-i*3.142/180;
            glVertex2f(posX+radius*cos(theta),posY+radius*sin(theta));
        }
        glEnd();
    }
    else
    {
        glBegin(GL_LINE_STRIP);
        for(int i=0;i<180;i++)
        {
            if(n==1)
                theta=i*3.142/180;
            else
                theta=-i*3.142/180;
            glVertex2f(posX+radius*cos(theta),posY+radius*sin(theta));
        }
        glEnd();
    glFlush();
    delay(300);
    }

}
void drawRectangle(float x1, float x2, float y1, float y2)
{
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
    glFlush();
    delay(300);
}
void drawTriangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
    glFlush();
    delay(300);
}
void drawFan(float x1,float y1,float x2,float y2,float x3,float y3)
{
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
    glFlush();
    delay(250);
}
void myinit()
{
    glClearColor(0.15,0.1,0.01,0);
    gluOrtho2D(-1.0,1.0,-0.1,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
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
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}

