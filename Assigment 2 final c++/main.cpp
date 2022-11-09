#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<math.h>
#define PI   3.14159265358979323846

GLfloat rotatei = 0.0f;
bool rt = false;

void display() {
    glClearColor(0.5f,0.5f,0.5f,0.5f);
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
	glLoadIdentity();
//body

    glColor3f(0.1, 0.1, 0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.0);
    glVertex2d(0.0, -0.4);
    glVertex2f(-0.02, -0.4);
    glVertex2d(0.02, -0.4);
    glVertex2f(-0.03, -0.41);
    glVertex2d(0.03, -0.41);
    glEnd();

  glPushMatrix();
    glColor3f(5.0, 5.0, 5.0);
    glLineWidth(2);
    if(rt){
    glRotatef(rotatei,0,0.0,0.1);
    }
    glBegin(GL_LINE_STRIP);         //p right
    glVertex2f(0.0, 0.0);
    glVertex2f(0.02, -0.02);
    glVertex2f(0.04, -0.02);
    glVertex2f(0.06, -0.03);
    glVertex2f(0.06, -0.01);
    glVertex2f(0.09, -0.03);
    glVertex2f(0.09, -0.05);
    glVertex2f(0.12, -0.07);
    glVertex2f(0.12, -0.02);
    glVertex2f(0.15, -0.05);
    glVertex2f(0.15, -0.07);
    glVertex2f(0.18, -0.09);
    glVertex2f(0.18, -0.05);
    glVertex2f(0.21, -0.07);
    glVertex2f(0.21, 0.07);
    glVertex2f(0.18, 0.05);
    glVertex2f(0.18, 0.09);
    glVertex2f(0.15, 0.07);
    glVertex2f(0.15, 0.05);
    glVertex2f(0.12, 0.02);
    glVertex2f(0.12, 0.07);
    glVertex2f(0.09, 0.05);
    glVertex2f(0.09, 0.03);
    glVertex2f(0.06, 0.01);
    glVertex2f(0.06, 0.03);
    glVertex2f(0.04, 0.02);
    glVertex2f(0.0, 0.0);
    glEnd();

    glBegin(GL_LINE_STRIP);      //p left
    glVertex2f(-0.0, 0.0);
    glVertex2f(-0.02, -0.02);
    glVertex2f(-0.04, -0.02);
    glVertex2f(-0.06, -0.03);
    glVertex2f(-0.06, -0.01);
    glVertex2f(-0.09, -0.03);
    glVertex2f(-0.09, -0.05);
    glVertex2f(-0.12, -0.07);
    glVertex2f(-0.12, -0.02);
    glVertex2f(-0.15, -0.05);
    glVertex2f(-0.15, -0.07);
    glVertex2f(-0.18, -0.09);
    glVertex2f(-0.18, -0.05);
    glVertex2f(-0.21, -0.07);
    glVertex2f(-0.21, 0.07);
    glVertex2f(-0.18, 0.05);
    glVertex2f(-0.18, 0.09);
    glVertex2f(-0.15, 0.07);
    glVertex2f(-0.15, 0.05);
    glVertex2f(-0.12, 0.02);
    glVertex2f(-0.12, 0.07);
    glVertex2f(-0.09, 0.05);
    glVertex2f(-0.09, 0.03);
    glVertex2f(-0.06, 0.01);
    glVertex2f(-0.06, 0.03);
    glVertex2f(-0.04, 0.02);
    glVertex2f(-0.0, 0.0);
    glEnd();

    glBegin(GL_LINE_STRIP);      //p up
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.03, 0.02);
    glVertex2f(-0.03, 0.04);
    glVertex2f(-0.05, 0.06);
    glVertex2f(-0.02, 0.06);
    glVertex2f(-0.04, 0.09);
    glVertex2f(-0.06, 0.09);
    glVertex2f(-0.09, 0.12);
    glVertex2f(-0.02, 0.12);
    glVertex2f(-0.05, 0.15);
    glVertex2f(-0.07, 0.15);
    glVertex2f(-0.09, 0.18);
    glVertex2f(-0.05, 0.18);
    glVertex2f(-0.07, 0.21);
    glVertex2f(0.07, 0.21);
    glVertex2f(0.05, 0.18);
    glVertex2f(0.09, 0.18);
    glVertex2f(0.07, 0.15);
    glVertex2f(0.05, 0.15);
    glVertex2f(0.02, 0.12);
    glVertex2f(0.07, 0.12);
    glVertex2f(0.05, 0.09);
    glVertex2f(0.03, 0.09);
    glVertex2f(0.01, 0.06);
    glVertex2f(0.03, 0.06);
    glVertex2f(0.02, 0.04);
    glVertex2f(0.02, 0.02);
    glVertex2f(0.0, 0.0);
    glEnd();

    glBegin(GL_LINE_STRIP);      //p down
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.03, -0.02);
    glVertex2f(-0.03, -0.04);
    glVertex2f(-0.05, -0.06);
    glVertex2f(-0.02, -0.06);
    glVertex2f(-0.04, -0.09);
    glVertex2f(-0.06, -0.09);
    glVertex2f(-0.09, -0.12);
    glVertex2f(-0.02, -0.12);
    glVertex2f(-0.05, -0.15);
    glVertex2f(-0.07, -0.15);
    glVertex2f(-0.09, -0.18);
    glVertex2f(-0.05, -0.18);
    glVertex2f(-0.07, -0.21);
    glVertex2f(0.07, -0.21);
    glVertex2f(0.05, -0.18);
    glVertex2f(0.09, -0.18);
    glVertex2f(0.07, -0.15);
    glVertex2f(0.05, -0.15);
    glVertex2f(0.02, -0.12);
    glVertex2f(0.07, -0.12);
    glVertex2f(0.05, -0.09);
    glVertex2f(0.03, -0.09);
    glVertex2f(0.01, -0.06);
    glVertex2f(0.03, -0.06);
    glVertex2f(0.02, -0.04);
    glVertex2f(0.02, -0.02);
    glVertex2f(0.0, -0.0);
    glEnd();
  glPopMatrix();

	glFlush();
}

void myKeyboard (unsigned char key, int x, int y) {
    glutPostRedisplay();
    switch (key)
    {
    case 'f':
        rt=true;
        rotatei+=25.0f;
    break;

     case 'm':
        rt=true;
        rotatei+=15.0f;
    break;

     case 's':
        rt=true;
        rotatei+=5.0f;
    break;
    default:
    break;
    }
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(150,50);
    glutCreateWindow("Stand fan");
    glutDisplayFunc(display);
    glutKeyboardFunc(myKeyboard);
    glutMainLoop();
    return 0;
}














