#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
#include <GL/gl.h>





void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


 glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    //gluOrtho2D(-2,2,-1,1);


////////////////////////
//other code


    glColor3ub(16,218,0);
    glBegin(GL_QUADS);
    glVertex2f(-1,-.3);
    glVertex2f(1,-.3);
    glVertex2f(1,.5);
    glVertex2f(-1,.5);
    glEnd();

    glColor3ub(134, 240, 215);
    glBegin(GL_QUADS);
    glVertex2f(-1,.5);
    glVertex2f(1,.5);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();
    ////
    glColor3ub(0, 179, 134);
    glBegin(GL_QUADS);
    glVertex2f(-1,-.15);
    glVertex2f(0,-.15);
    glVertex2f(0,.3);
    glVertex2f(-1,.3);
    glEnd();

     glColor3ub(251,102,12);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1,.3);
    glVertex2f(0,.3);
    glVertex2f(-.5,.5);
    glEnd();

    glColor3ub(6, 72, 94);
    glBegin(GL_QUADS);
    glVertex2f(-.2,.15);
    glVertex2f(-.8,.15);
    glVertex2f(-.8,.3);
    glVertex2f(-.2,.3);
    glEnd();

    glColor3ub(96, 97, 94);
    glBegin(GL_QUADS);
    glVertex2f(-.8,-.3);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.1);
    glVertex2f(-.7,-.1);
    glEnd();


    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    int k;
    GLfloat x=-.8f; GLfloat y=.8f;GLfloat radius =.15f;
	 int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
	glEnd();



	glColor3ub(63,151,162);
    glBegin(GL_QUADS);
    glVertex2f(-1,-.9);
    glVertex2f(1,-.9);
    glVertex2f(1,-.3);
    glVertex2f(-1,-.3);
    glEnd();

    glColor3ub(34,139,34);
    glBegin(GL_QUADS);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-.9);
    glVertex2f(-1,-.9);
    glEnd();


//PLane


    glColor3ub(51,116,68);
    glBegin(GL_QUADS);
    glVertex2f(.4,-.5);
    glVertex2f(.8,-.5);
    glVertex2f(.8,-.3);
    glVertex2f(.4,-.3);
    glEnd();


    glColor3ub(251,102,12);
    glBegin(GL_TRIANGLES);
    glVertex2f(.2,-.5);
    glVertex2f(.4,-.5);
    glVertex2f(.4,-.3);
    glEnd();

    glColor3ub(251,102,12);
    glBegin(GL_TRIANGLES);
    glVertex2f(.8,-.3);
    glVertex2f(.9,-.3);
    glVertex2f(.9,-.2);
    glEnd();

    glColor3ub(51,116,68);
    glBegin(GL_QUADS);
    glVertex2f(.8,-.5);
    glVertex2f(.9,-.5);
    glVertex2f(.9,-.3);
    glVertex2f(.8,-.3);
    glEnd();



    glColor3ub(7, 8, 7);
    int i;

	 x=.4f;  y=-.53f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glColor3ub(7, 8, 7);

    int j;
    x=.7f;  y=-.53f; radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}

	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint



	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
