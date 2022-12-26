#include<Windows.h>
#include<GL\glut.h>
#include <stdlib.h>

void depan (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();

}
void depanatas (int x1, int y1,int x2, int y2,int x3, int y3){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glEnd();
}
void pintu (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();
}
void gagang (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();
}
void dinding (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();

}
void atapbelakang (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();
}


void jendela1 (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();
}
void jendela2 (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();
}
void jendela3 (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();
}
void jendela4 (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();
}
void cerobong (int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4){
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
    glVertex2i(x4,y4);
    glEnd();
}
void userdraw() {

    glColor3f(0.0f,1.0f,1.0f);
    depan(50,50,50,240,200,240,200,50);
    glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(50, 50);
    glVertex2i(50, 240);
    glVertex2i(200, 240);
    glVertex2i(200, 50);
    glEnd();

    glColor3f(1.0f,0.6f,0.0f);
    depanatas(50,240,120,350,200,240);
    glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(50, 240);
    glVertex2i(120, 350);
    glVertex2i(200, 240);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
    pintu(90,50,90,150,160,150,160,50);
    glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(90, 50);
    glVertex2i(90, 150);
    glVertex2i(160, 150);
    glVertex2i(160, 50);
    glEnd();

        glColor3f(1.0f,1.0f,1.0f);
    gagang(100,85,105,85,105,80,100,80);
    glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(90, 50);
    glVertex2i(90, 150);
    glVertex2i(160, 150);
    glVertex2i(160, 50);
    glEnd();


    glColor3f(0.0f,1.0f,1.0f);
    dinding(200,50,200,240,500,240,500,50);
            glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(200, 50);
    glVertex2i(200, 240);
    glVertex2i(500, 240);
    glVertex2i(500, 50);
    glEnd();

    glColor3f(1.0f,0.4f,0.0f);
    atapbelakang(200,240,120,350,450,350,500,240);
            glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(200, 240);
    glVertex2i(120, 350);
    glVertex2i(450, 350);
    glVertex2i(500, 240);
    glEnd();


    glColor3f(1.0f,0.8f,1.0f);
    jendela1(400,100,350,100,350,150,400,150);
        glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(400, 100);
    glVertex2i(350, 100);
    glVertex2i(350, 150);
    glVertex2i(400, 150);
    glEnd();

    glColor3f(1.0f,1.0f,.0f);
    jendela2(350,100,300,100,300,150,350,150);
        glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(350, 100);
    glVertex2i(300, 100);
    glVertex2i(300, 150);
    glVertex2i(350, 150);
    glEnd();

    glColor3f(0.7f,0.7f,0.7f);
    jendela3(350,150,350,200,400,200,400,150);
        glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(350, 150);
    glVertex2i(350, 200);
    glVertex2i(400, 200);
    glVertex2i(400, 150);
    glEnd();

        glColor3f(0.0f,1.0f,0.0f);
    jendela4(350,150,300,150,300,200,350,200);
        glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(350, 150);
    glVertex2i(300, 150);
    glVertex2i(300, 200);
    glVertex2i(350, 200);
    glEnd();

    glColor3f(0.7f,0.7f,0.7f);
    cerobong(370,450,370,350,390,350,390,450);
        glBegin(GL_LINE_LOOP); // untuk membuat garis.
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2i(370, 450);
    glVertex2i(370, 350);
    glVertex2i(390, 350);
    glVertex2i(390, 450);
    glEnd();

}
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0,1.0,1.0,0.0);
    userdraw();
    glutSwapBuffers();
}
    int main (int argc, char** argv){

    glutInit(&argc,argv);
    glClearColor(1.0,1.0,1.0,0.0);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,400);
    glutCreateWindow("UTS GRAFIKA KOMPUTER");
    glClearColor(0,1,1,0);
    gluOrtho2D(0.,640.,0.,480.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
    }
