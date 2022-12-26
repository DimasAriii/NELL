#include <gl/Gl.h>
#include <gl/glut.h>

void myInit(void){
     glClearColor(1.0,1.0,1.0,0.0);
     glColor3f(0.0f, 0.0f, 0.0f);
     glPointSize(4.0);
     glLineWidth(4.0f);    //garis tebal
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void myDisplay(void){
     glClear(GL_COLOR_BUFFER_BIT);

     //MEWARNAI

     glColor3f(1.7f,1.7f,0.7f);
     glBegin(GL_POLYGON);
     glVertex2i(100, 100);
     glVertex2i(100, 280);
     glVertex2i(220, 280);
     glVertex2i(220, 100);
     glEnd();

     glColor3f(0.9f,1.9f,1.9f);
     glBegin(GL_POLYGON);
     glVertex2i(130, 100);
     glVertex2i(130, 200);
     glVertex2i(190, 200);
     glVertex2i(190, 100);
     glEnd();

     glColor3f(0.3f,0.3f,0.3f);
     glBegin(GL_POLYGON);
     glVertex2i(100, 280);
     glVertex2i(160, 360);
     glVertex2i(220, 280);
     glEnd();

     glColor3f(1.8f,1.8f,0.8f);
     glBegin(GL_POLYGON);
     glVertex2i(220, 100);
     glVertex2i(220, 280);
     glVertex2i(500, 280);
     glVertex2i(500, 100);
     glEnd();

     glColor3f(1.0f,1.0f,1.0f);
     glBegin(GL_POLYGON);
     glVertex2i(320, 200);
     glVertex2i(320, 240);
     glVertex2i(360, 240);
     glVertex2i(360, 200);
     glEnd();

     glColor3f(1.0f,1.0f,1.0f);
     glBegin(GL_POLYGON);
     glVertex2i(360, 200);
     glVertex2i(360, 240);
     glVertex2i(400, 240);
     glVertex2i(400, 200);
     glEnd();

     glColor3f(1.0f,1.0f,1.0f);
     glBegin(GL_POLYGON);
     glVertex2i(320, 200);
     glVertex2i(320, 160);
     glVertex2i(360, 160);
     glVertex2i(360, 200);
     glEnd();

     glColor3f(1.0f,1.0f,1.0f);
     glBegin(GL_POLYGON);
     glVertex2i(360, 200);
     glVertex2i(360, 160);
     glVertex2i(400, 160);
     glVertex2i(400, 200);
     glEnd();

     glColor3f(0.5f,0.5f,0.5f);
     glBegin(GL_POLYGON);
     glVertex2i(160, 360);
     glVertex2i(220, 280);
     glVertex2i(500, 280);
     glVertex2i(440, 360);
     glEnd();

     glColor3f(0.7f,0.7f,0.7f);

     glBegin(GL_POLYGON);
     glVertex2i(400, 360);
     glVertex2i(400, 400);
     glVertex2i(380, 400);
     glVertex2i(380, 360);
     glEnd();



     //garis garis
     glColor3f(0.0f, 0.0f, 0.0f);
     glBegin(GL_LINE_LOOP);
     glVertex2i(100, 100);
     glVertex2i(100, 280);
     glVertex2i(220, 280);
     glVertex2i(220, 100);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(130, 100);
     glVertex2i(130, 200);
     glVertex2i(190, 200);
     glVertex2i(190, 100);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(100, 280);
     glVertex2i(160, 360);
     glVertex2i(220, 280);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(220, 100);
     glVertex2i(220, 280);
     glVertex2i(500, 280);
     glVertex2i(500, 100);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(320, 200);
     glVertex2i(320, 240);
     glVertex2i(360, 240);
     glVertex2i(360, 200);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(360, 200);
     glVertex2i(360, 240);
     glVertex2i(400, 240);
     glVertex2i(400, 200);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(320, 200);
     glVertex2i(320, 160);
     glVertex2i(360, 160);
     glVertex2i(360, 200);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(360, 200);
     glVertex2i(360, 160);
     glVertex2i(400, 160);
     glVertex2i(400, 200);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(160, 360);
     glVertex2i(220, 280);
     glVertex2i(500, 280);
     glVertex2i(440, 360);
     glEnd();

     glBegin(GL_POINTS);
     glVertex2i(140,140);
     glEnd();

     glBegin(GL_LINE_LOOP);
     glVertex2i(400, 360);
     glVertex2i(400, 400);
     glVertex2i(380, 400);
     glVertex2i(380, 360);
     glEnd();


     glFlush();
}

int main(int argc, char** argv){
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize(720,480);
     glutInitWindowPosition(100, 150);
     glutCreateWindow("Sweet Home");
     glutDisplayFunc(myDisplay);
     myInit();
     glutMainLoop();
}

