#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/gl.h>
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat j = 0.0f;
GLfloat l = 0.0f;
GLfloat m = 0.0f;
//......................plane...................
GLfloat position = -1.0f;
GLfloat speed = 0.01f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.011f;

void dis();
void display();
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void disback(int val)
{
//    glutDisplayFunc(display);
}

//................................................................
void night() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


// DOWN SIDE GRASS ABCD

glBegin(GL_QUADS);
glColor3ub(40, 180, 99  );

glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.77f);
glVertex2f(-1.0f,-0.77f);
glEnd();



// down grass and road black broder

glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );

glVertex2f(-1.0f,-0.77f);
glVertex2f(1.0f,-0.77f);
glVertex2f(1.0f,-0.75f);
glVertex2f(-1.0f,-0.75f);

glEnd();


//Road

glBegin(GL_QUADS);
glColor3ub(127, 140, 141  );

glVertex2f(-1.0f,-0.75f);
glVertex2f(1.0f,-0.75f);
glVertex2f(1.0f,-0.38f);
glVertex2f(-1.0f,-0.38f);

glEnd();

//Road line
//(1)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(-0.9f,-0.57f);
glVertex2f(-0.7f,-0.57f);
glVertex2f(-0.7f,-0.56f);
glVertex2f(-0.9f,-0.56f);
glEnd();
//(2)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(-0.5f,-0.57f);
glVertex2f(-0.3f,-0.57f);
glVertex2f(-0.3f,-0.56f);
glVertex2f(-0.5f,-0.56f);

glEnd();

//(3)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(-0.1f,-0.57f);
glVertex2f(0.1f,-0.57f);
glVertex2f(0.1f,-0.56f);
glVertex2f(-0.1f,-0.56f);

glEnd();

//(4)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(0.3f,-0.57f);
glVertex2f(0.5f,-0.57f);
glVertex2f(0.5f,-0.56f);
glVertex2f(0.3f,-0.56f);

glEnd();

//(5)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(0.7f,-0.57f);
glVertex2f(0.9f,-0.57f);
glVertex2f(0.9f,-0.56f);
glVertex2f(0.7f,-0.56f);

glEnd();

//upper grass and road black broder

glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );

glVertex2f(-1.0f,-0.38f);
glVertex2f(1.0f,-0.38f);
glVertex2f(1.0f,-0.365f);
glVertex2f(-1.0f,-0.365f);


glEnd();


//Upper grass


glBegin(GL_QUADS);
glColor3ub(40, 180, 99  );

glVertex2f(-1.0f,-0.365f);
glVertex2f(1.0f,-0.365f);
glVertex2f(1.0f,-0.32f);
glVertex2f(-1.0f,-0.32f);

glEnd();


//Back Side

glBegin(GL_QUADS);
glColor3ub(153, 161, 171);

glVertex2f(-1.f,-0.32f);
glVertex2f(1.0f,-0.32f);
glVertex2f(1.0f,0.1f);
glVertex2f(-1.0f,0.1f);


//SKY

glBegin(GL_QUADS);
glColor3ub(0,0,0);

glVertex2f(-1.0f,0.1f);
glVertex2f(1.0f,0.1f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();



//SUN

glColor3ub(251,251,251);
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	int i;

	GLfloat x=.80f; GLfloat y=.78f; GLfloat radius =.14f;
	int triangleAmount = 10;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);       //center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



glColor3ub(0,0,0);
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	int v;

	GLfloat x9=.85f; GLfloat y9=.82f; GLfloat radius9 =.14f;
	int triangleAmount9 = 20;

	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9);       //center of circle
		for(v = 0; v <= triangleAmount9;v++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(i * twicePi9 / triangleAmount9))
			);
		}
	glEnd();


// School Building
//.......................................


glBegin(GL_QUADS);              //DOWN Border
glColor3ub(23, 32, 42   );

glVertex2f(-0.2f,-0.32f);
glVertex2f(0.9f,-0.32f);
glVertex2f(0.9f,-0.3f);
glVertex2f(-0.2f,-0.3f);

glEnd();


//LEFT SIDE PART

glBegin(GL_QUADS);
glColor3ub(215, 219, 221 );

glVertex2f(-0.2f,-0.3f);
glVertex2f(0.2f,-0.3f);
glVertex2f(0.2f,0.2f);
glVertex2f(-0.2f,0.2f);

glEnd();


glBegin(GL_QUADS);                //left side window
glColor3ub(28, 40, 51  );

glVertex2f(-0.1f,-0.2f);
glVertex2f(0.1f,-0.2f);
glVertex2f(0.1f,0.1f);
glVertex2f(-0.1f,0.1f);
glEnd();


glBegin(GL_LINES);
glColor3ub(255, 255, 255 );
glVertex2f(-0.1f,0.0f);
glVertex2f(0.1f,0.0);

glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255 );
glVertex2f(-0.1f,-0.1f);
glVertex2f(0.1f,-0.1f);

glVertex2f(0.0f,-0.2f);
glVertex2f(0.0f,0.1f);

glEnd();



//RIGHT SIDE PART

glBegin(GL_QUADS);
glColor3ub(215, 219, 221 );

glVertex2f(0.5f,-0.3f);
glVertex2f(0.9f,-0.3f);
glVertex2f(0.9f,0.2f);
glVertex2f(0.5f,0.2f);

glEnd();


glBegin(GL_QUADS);                //Right side window
glColor3ub(28, 40, 51  );

glVertex2f(0.6f,-0.2f);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,0.1f);
glVertex2f(0.6f,0.1f);

glEnd();


glBegin(GL_LINES);
glColor3ub(255, 255, 255 );
glVertex2f(0.6f,0.0f);
glVertex2f(0.8f,0.0);



glVertex2f(0.6f,-0.1f);
glVertex2f(0.8f,-0.1f);

glVertex2f(0.7f,-0.2f);
glVertex2f(0.7f,0.1f);

glEnd();





glBegin(GL_QUADS);                    // RIGHT Border
glColor3ub(23, 32, 42 );

glVertex2f(0.2f,-0.3f);
glVertex2f(0.2f,0.35f);
glVertex2f(0.19f,0.35f);
glVertex2f(0.19f,-0.3f);

glEnd();


glBegin(GL_QUADS);                    // LEFT Border
glColor3ub(23, 32, 42 );

glVertex2f(0.5f,-0.3f);
glVertex2f(0.512f,-0.3f);
glVertex2f(0.512f,0.35f);
glVertex2f(0.5f,0.35f);

glEnd();


//MIDDLE PART

glBegin(GL_POLYGON);
glColor3ub(247, 220, 111   );

glVertex2f(0.2f,-0.3f);
glVertex2f(0.5f,-0.3f);
glVertex2f(0.5f,0.35f);
glVertex2f(0.35f,0.5f);
glVertex2f(0.2f,0.35f);

glEnd();

//.............................................
glBegin(GL_QUADS);            //DOOR
glColor3ub(52, 73, 94 );

glVertex2f(0.22f,-0.3f);
glVertex2f(0.48f,-0.3f);
glVertex2f(0.48f,-0.28f);
glVertex2f(0.22f,-0.28f);

glEnd();

glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );

glVertex2f(0.24f,-0.28f);
glVertex2f(0.46f,-0.28f);
glVertex2f(0.46f,-0.26f);
glVertex2f(0.24f,-0.26f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(52, 73, 94 );

glVertex2f(0.28f,-0.26f);
glVertex2f(0.42f,-0.26f);
glVertex2f(0.42f,-0.08f);
glVertex2f(0.28f,-0.08f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(253, 254, 254  );

glVertex2f(0.3f,-0.26f);
glVertex2f(0.4f,-0.26f);
glVertex2f(0.4f,-0.1f);
glVertex2f(0.3f,-0.1f);

glEnd();


glBegin(GL_LINES);
glColor3ub(44, 62, 80);
glVertex2f(0.35f,-0.26f);
glVertex2f(0.35f,-0.1);

glEnd();


glBegin(GL_QUADS);
glColor3ub(44, 62, 80);

glVertex2f(0.33f, -0.18f);
glVertex2f(0.37f, -0.18f);
glVertex2f(0.37f, -0.17f);
glVertex2f(0.33f, -0.17f);

glEnd();


//...................................................

glBegin(GL_QUADS);               //WINDOW
glColor3ub(44, 62, 80);

glVertex2f(0.24f, 0.0f);
glVertex2f(0.33f, 0.0f);
glVertex2f(0.33f, 0.14f);
glVertex2f(0.24f, 0.14f);

glEnd();

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.285f,0.0f);
glVertex2f(0.285f,0.14);

glEnd();

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.33f,0.07f);
glVertex2f(0.24f,0.07);

glEnd();


glBegin(GL_QUADS);               //WINDOW
glColor3ub(44, 62, 80);

glVertex2f(0.37f, 0.0f);
glVertex2f(0.46f, 0.0f);
glVertex2f(0.46f, 0.14f);
glVertex2f(0.37f, 0.14f);

glEnd();

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.415f,0.00f);
glVertex2f(0.415f,0.14f);

glEnd();

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.37f,0.07f);
glVertex2f(0.46f,0.07f);

glEnd();



//...............................................
//CLOCK

int w;


	GLfloat x4=0.35f; GLfloat y4=0.29f; GLfloat radius4 =.11f;          //Clock_Dial
	int triangleAmount4 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(44, 62, 80);
		glVertex2f(x4, y4); // center of circle
		for(w = 0; w <= triangleAmount4;w++) {
			glVertex2f(
		            x4 + (radius4 * cos(w *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(w * twicePi4 / triangleAmount4))
			);
		}
	glEnd();


int k;

	GLfloat x2=0.35f; GLfloat y2=0.29f; GLfloat radius2 =.09f;          //Clock_Dial
	int triangleAmount2 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(236, 236, 236);
		glVertex2f(x2, y2); // center of circle
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();



//................................................




glBegin(GL_QUADS);       //roof border right
glColor3ub(23, 32, 42 );

glVertex2f(0.50f, 0.35f);
glVertex2f(0.545f, 0.3512f);
glVertex2f(0.35f,0.55f);
glVertex2f(0.35f,0.5f);

glEnd();


glBegin(GL_QUADS);         //roof border left
glColor3ub(23, 32, 42 );

glVertex2f(0.35f,0.5f);
glVertex2f(0.35f,0.55f);
glVertex2f(0.15f,0.35f);
glVertex2f(0.2f,0.35f);


glEnd();




glBegin(GL_QUADS);                    // RIGHT finishing Border
glColor3ub(23, 32, 42 );

glVertex2f(0.9f,-0.32f);
glVertex2f(0.915f,-0.32f);
glVertex2f(0.915f,0.2f);
glVertex2f(0.9f,0.2f);
glEnd();



glBegin(GL_QUADS);                    // Left finishing Border
glColor3ub(23, 32, 42 );

glVertex2f(-0.215f,-0.32f);
glVertex2f(-0.2f,-0.32f);
glVertex2f(-0.2f,0.2f);
glVertex2f(-0.215f,0.2f);
glEnd();



glBegin(GL_QUADS);                    // Building roof top left
glColor3ub(23, 32, 42 );

glVertex2f(-0.28f,0.2f);
glVertex2f(0.2f,0.2f);
glVertex2f(0.2f,0.3f);
glVertex2f(-0.18f,0.3f);
glEnd();




glBegin(GL_QUADS);                    // Building roof top Right
glColor3ub(23, 32, 42 );

glVertex2f(0.5f,0.2f);
glVertex2f(0.98f,0.2f);
glVertex2f(0.88f,0.3f);
glVertex2f(0.5f,0.3f);

glEnd();

//...................................
// Buildind part Finish .............................................


	//.............WindMIll...........................


glBegin(GL_QUADS);
glColor3ub(75, 72, 56  );
glVertex2f(-0.88f, -0.12f);
glVertex2f(-0.7f, -0.12f);
glVertex2f(-0.7f,-0.1f);
glVertex2f(-0.88f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(31, 30, 22 );
glVertex2f(-0.86f, -0.1f);
glVertex2f(-0.72f, -0.1f);
glVertex2f(-0.72f,-0.08f);
glVertex2f(-0.86f,-0.08f);
glEnd();



glEnable(GL_LIGHTING);
GLfloat global_ambient[] = {1.9,0.0,0.0, 0.1};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);

glBegin(GL_POLYGON);
glColor3ub(189, 181, 130 );
glVertex2f(-0.84f, -0.08f);
glVertex2f(-0.74f, -0.08f);
glVertex2f(-0.74f, 0.16f);
glVertex2f(-0.79f, 0.22f);
glVertex2f(-0.84f, 0.16f);
glEnd();

glDisable(GL_LIGHTING);

int z;

	GLfloat x3=-0.79f; GLfloat y3=0.22f; GLfloat radius3 =.02f;          //Clock_Dial
	int triangleAmount3 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(236, 236, 236);
		glVertex2f(x3, y3); // center of circle
		for(z = 0; z <= triangleAmount3;z++) {
			glVertex2f(
		            x3 + (radius3 * cos(z *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(z * twicePi3 / triangleAmount3))
			);
		}
	glEnd();








glPushMatrix();




glTranslatef(-0.79,0.22,0.0);
    glRotatef(j,0.0,0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(224, 224, 224);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( -0.05f, 0.2f);
    glVertex2f( 0.05f, 0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(224, 224, 224);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( -0.05f, -0.2f);
    glVertex2f( 0.05f, -0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(224, 224, 224);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.2f, -0.05f);
    glVertex2f( 0.2f, 0.05f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(224, 224, 224);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( -0.2f, 0.05f);
    glVertex2f( -0.2f, -0.05f);
    glEnd();
glLoadIdentity();

//................................................



//...................Plane..........................

glPushMatrix();
glTranslatef(position,position,0);

glBegin(GL_QUADS);
glColor3ub(250,253,254);
glVertex2f(-0.4f,0.7f);
glVertex2f(0.1f,0.7f);
glVertex2f(0.1f,0.8f);
glVertex2f(-0.4f,0.8f);
glEnd();

glBegin(GL_QUADS);         //......... lanja........
glColor3ub(219, 0, 0);
glVertex2f(-0.4f, 0.8f);
glVertex2f(-0.3f,0.8f);
glVertex2f(-0.35f, 0.85f);
glVertex2f(-0.4f, 0.85f);
glEnd();


glBegin(GL_QUADS);        //Pankha 1
glColor3ub(219, 0, 0);
glVertex2f(-0.25f, 0.65f);
glVertex2f(-0.19f,0.65f);
glVertex2f(-0.1f, 0.75f);
glVertex2f(-0.15f, 0.75f);
glEnd();


glBegin(GL_QUADS);        //Pankha 2
glColor3ub(219, 0, 0);
glVertex2f(-0.15f, 0.8f);
glVertex2f(-0.1f,0.8f);
glVertex2f(-0.14f, 0.85f);
glVertex2f(-0.2f, 0.85f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(219, 0, 0);
glVertex2f(0.1f, 0.7f);
glVertex2f(0.12f,0.7f);
glVertex2f(0.14f,0.71f);
glVertex2f(0.17f, 0.73f);
glVertex2f(0.185f, 0.74f);
glVertex2f(0.19f, 0.745f);
glVertex2f(0.19f, 0.75f);
glVertex2f(0.1f,0.75f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(250,251,254);
glVertex2f(0.1f,0.75f);
glVertex2f(0.19f, 0.75f);
glVertex2f(0.19f, 0.755f);
glVertex2f(0.185f, 0.76f);
glVertex2f(0.17f, 0.77f);
glVertex2f(0.155f, 0.78f);
glVertex2f(0.135f, 0.79f);
glVertex2f(0.12f, 0.795f);
glVertex2f(0.1f, 0.8f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.1f, 0.8f);
glVertex2f(0.1f, 0.7f);

glEnd();
glPopMatrix();



//................................................


//............Cloud...................


//(1)

glPushMatrix();
glTranslatef(position1,0,0);

int e;

	GLfloat x5=-0.805f; GLfloat y5=0.79f; GLfloat radius5 =.06f;          //Clock_Dial
	int triangleAmount5 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 122, 255);
		glVertex2f(x5, y5); // center of circle
		for(e = 0; e <= triangleAmount5;e++) {
			glVertex2f(
		            x5 + (radius5 * cos(e *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(e * twicePi5 / triangleAmount5))
			);
		}
	glEnd();


//(2)
	int g;


	GLfloat x6=-0.745f; GLfloat y6=0.83f; GLfloat radius6 =.06f;          //Clock_Dial
	int triangleAmount6 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 122, 255 );
		glVertex2f(x6, y6); // center of circle
		for(g = 0; g <= triangleAmount6;g++) {
			glVertex2f(
		            x6 + (radius6 * cos(g *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(g * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

//(3)
	int h;


	GLfloat x7=-0.745f; GLfloat y7=0.75f; GLfloat radius7 =.06f;          //Clock_Dial
	int triangleAmount7 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 122, 255 );
		glVertex2f(x7, y7); // center of circle
		for(h = 0; h <= triangleAmount7;h++) {
			glVertex2f(
		            x7 + (radius7 * cos(h *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(h * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

//(4)

int s;

	GLfloat x8=-0.685f; GLfloat y8=0.79f; GLfloat radius8 =.06f;          //Clock_Dial
	int triangleAmount8 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 122, 255);
		glVertex2f(x8, y8); // center of circle
		for(s = 0; s <= triangleAmount8;s++) {
			glVertex2f(
		            x8 + (radius8 * cos(s *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(s * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

glPopMatrix();
glLoadIdentity();


//.....................................................................



glTranslatef(0.35,0.29,0.0);
glRotatef(j,0.0,0.0, 1.0);
glBegin(GL_LINES);                               //Clock's_Hand
    glColor3ub(0, 0, 0);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.0f, 0.08f);
    glEnd();
    glLoadIdentity();
glTranslatef(0.35,0.29,0.0);
glRotatef(l,0.0,0.0, 1.0);
glBegin(GL_LINES);                               //Clock's_Hand
    glColor3ub(0, 0, 0);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.07f, 0.0f);
    glEnd();
    glLoadIdentity();

glTranslatef(0.35,0.29,0.0);
glRotatef(m,0.0,0.0, 1.0);
glBegin(GL_LINES);                               //Clock's_Hand
    glColor3ub(0, 0, 0);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.0f, -0.055f);
    glEnd();
    glLoadIdentity();
glPopMatrix();              //glPopMatrix pops the top matrix off the stack
    j-=0.1f;               //i=i+.1=.2
    l-=0.01f;
    m-=0.0015f;
    glFlush();
glLoadIdentity();

glFlush();

}

	void night_demo(int val) {

 glutDisplayFunc(night);

 }
//........................................DAY mood.................





void day() {
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


// DOWN SIDE GRASS ABCD

glBegin(GL_QUADS);
glColor3ub(40, 180, 99  );

glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.77f);
glVertex2f(-1.0f,-0.77f);
glEnd();



// down grass and road black broder

glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );

glVertex2f(-1.0f,-0.77f);
glVertex2f(1.0f,-0.77f);
glVertex2f(1.0f,-0.75f);
glVertex2f(-1.0f,-0.75f);

glEnd();


//Road

glBegin(GL_QUADS);
glColor3ub(127, 140, 141  );

glVertex2f(-1.0f,-0.75f);
glVertex2f(1.0f,-0.75f);
glVertex2f(1.0f,-0.38f);
glVertex2f(-1.0f,-0.38f);

glEnd();

//Road line
//(1)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(-0.9f,-0.57f);
glVertex2f(-0.7f,-0.57f);
glVertex2f(-0.7f,-0.56f);
glVertex2f(-0.9f,-0.56f);
glEnd();
//(2)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(-0.5f,-0.57f);
glVertex2f(-0.3f,-0.57f);
glVertex2f(-0.3f,-0.56f);
glVertex2f(-0.5f,-0.56f);

glEnd();

//(3)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(-0.1f,-0.57f);
glVertex2f(0.1f,-0.57f);
glVertex2f(0.1f,-0.56f);
glVertex2f(-0.1f,-0.56f);

glEnd();

//(4)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(0.3f,-0.57f);
glVertex2f(0.5f,-0.57f);
glVertex2f(0.5f,-0.56f);
glVertex2f(0.3f,-0.56f);

glEnd();

//(5)

glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );

glVertex2f(0.7f,-0.57f);
glVertex2f(0.9f,-0.57f);
glVertex2f(0.9f,-0.56f);
glVertex2f(0.7f,-0.56f);

glEnd();

//upper grass and road black broder

glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );

glVertex2f(-1.0f,-0.38f);
glVertex2f(1.0f,-0.38f);
glVertex2f(1.0f,-0.365f);
glVertex2f(-1.0f,-0.365f);


glEnd();


//Upper grass


glBegin(GL_QUADS);
glColor3ub(40, 180, 99  );

glVertex2f(-1.0f,-0.365f);
glVertex2f(1.0f,-0.365f);
glVertex2f(1.0f,-0.32f);
glVertex2f(-1.0f,-0.32f);

glEnd();


//Back Side

glBegin(GL_QUADS);
glColor3ub(153, 161, 171);

glVertex2f(-1.f,-0.32f);
glVertex2f(1.0f,-0.32f);
glVertex2f(1.0f,0.1f);
glVertex2f(-1.0f,0.1f);


//SKY

glBegin(GL_QUADS);
glColor3ub(93, 173, 226);

glVertex2f(-1.0f,0.1f);
glVertex2f(1.0f,0.1f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();



//SUN

glColor3ub(255, 57, 29);
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	int i;

	GLfloat x=.80f; GLfloat y=.78f; GLfloat radius =.14f;
	int triangleAmount = 20;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);       //center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



// School Building
//.......................................


glBegin(GL_QUADS);              //DOWN Border
glColor3ub(23, 32, 42   );

glVertex2f(-0.2f,-0.32f);
glVertex2f(0.9f,-0.32f);
glVertex2f(0.9f,-0.3f);
glVertex2f(-0.2f,-0.3f);

glEnd();


//LEFT SIDE PART

glBegin(GL_QUADS);
glColor3ub(215, 219, 221 );

glVertex2f(-0.2f,-0.3f);
glVertex2f(0.2f,-0.3f);
glVertex2f(0.2f,0.2f);
glVertex2f(-0.2f,0.2f);

glEnd();


glBegin(GL_QUADS);                //left side window
glColor3ub(28, 40, 51  );

glVertex2f(-0.1f,-0.2f);
glVertex2f(0.1f,-0.2f);
glVertex2f(0.1f,0.1f);
glVertex2f(-0.1f,0.1f);
glEnd();


glBegin(GL_LINES);
glColor3ub(255, 255, 255 );
glVertex2f(-0.1f,0.0f);
glVertex2f(0.1f,0.0);

glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255 );
glVertex2f(-0.1f,-0.1f);
glVertex2f(0.1f,-0.1f);

glVertex2f(0.0f,-0.2f);
glVertex2f(0.0f,0.1f);

glEnd();



//RIGHT SIDE PART

glBegin(GL_QUADS);
glColor3ub(215, 219, 221 );

glVertex2f(0.5f,-0.3f);
glVertex2f(0.9f,-0.3f);
glVertex2f(0.9f,0.2f);
glVertex2f(0.5f,0.2f);

glEnd();


glBegin(GL_QUADS);                //Right side window
glColor3ub(28, 40, 51  );

glVertex2f(0.6f,-0.2f);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,0.1f);
glVertex2f(0.6f,0.1f);

glEnd();


glBegin(GL_LINES);
glColor3ub(255, 255, 255 );
glVertex2f(0.6f,0.0f);
glVertex2f(0.8f,0.0);



glVertex2f(0.6f,-0.1f);
glVertex2f(0.8f,-0.1f);

glVertex2f(0.7f,-0.2f);
glVertex2f(0.7f,0.1f);

glEnd();





glBegin(GL_QUADS);                    // RIGHT Border
glColor3ub(23, 32, 42 );

glVertex2f(0.2f,-0.3f);
glVertex2f(0.2f,0.35f);
glVertex2f(0.19f,0.35f);
glVertex2f(0.19f,-0.3f);

glEnd();


glBegin(GL_QUADS);                    // LEFT Border
glColor3ub(23, 32, 42 );

glVertex2f(0.5f,-0.3f);
glVertex2f(0.512f,-0.3f);
glVertex2f(0.512f,0.35f);
glVertex2f(0.5f,0.35f);

glEnd();


//MIDDLE PART

glBegin(GL_POLYGON);
glColor3ub(247, 220, 111   );

glVertex2f(0.2f,-0.3f);
glVertex2f(0.5f,-0.3f);
glVertex2f(0.5f,0.35f);
glVertex2f(0.35f,0.5f);
glVertex2f(0.2f,0.35f);

glEnd();

//.............................................
glBegin(GL_QUADS);            //DOOR
glColor3ub(52, 73, 94 );

glVertex2f(0.22f,-0.3f);
glVertex2f(0.48f,-0.3f);
glVertex2f(0.48f,-0.28f);
glVertex2f(0.22f,-0.28f);

glEnd();

glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );

glVertex2f(0.24f,-0.28f);
glVertex2f(0.46f,-0.28f);
glVertex2f(0.46f,-0.26f);
glVertex2f(0.24f,-0.26f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(52, 73, 94 );

glVertex2f(0.28f,-0.26f);
glVertex2f(0.42f,-0.26f);
glVertex2f(0.42f,-0.08f);
glVertex2f(0.28f,-0.08f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(253, 254, 254  );

glVertex2f(0.3f,-0.26f);
glVertex2f(0.4f,-0.26f);
glVertex2f(0.4f,-0.1f);
glVertex2f(0.3f,-0.1f);

glEnd();


glBegin(GL_LINES);
glColor3ub(44, 62, 80);
glVertex2f(0.35f,-0.26f);
glVertex2f(0.35f,-0.1);

glEnd();


glBegin(GL_QUADS);
glColor3ub(44, 62, 80);

glVertex2f(0.33f, -0.18f);
glVertex2f(0.37f, -0.18f);
glVertex2f(0.37f, -0.17f);
glVertex2f(0.33f, -0.17f);

glEnd();


//...................................................

glBegin(GL_QUADS);               //WINDOW
glColor3ub(44, 62, 80);

glVertex2f(0.24f, 0.0f);
glVertex2f(0.33f, 0.0f);
glVertex2f(0.33f, 0.14f);
glVertex2f(0.24f, 0.14f);

glEnd();

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.285f,0.0f);
glVertex2f(0.285f,0.14);

glEnd();

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.33f,0.07f);
glVertex2f(0.24f,0.07);

glEnd();


glBegin(GL_QUADS);               //WINDOW
glColor3ub(44, 62, 80);

glVertex2f(0.37f, 0.0f);
glVertex2f(0.46f, 0.0f);
glVertex2f(0.46f, 0.14f);
glVertex2f(0.37f, 0.14f);

glEnd();

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.415f,0.00f);
glVertex2f(0.415f,0.14f);

glEnd();

glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2f(0.37f,0.07f);
glVertex2f(0.46f,0.07f);

glEnd();



//...............................................
//CLOCK

int w;


	GLfloat x4=0.35f; GLfloat y4=0.29f; GLfloat radius4 =.11f;          //Clock_Dial
	int triangleAmount4 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(44, 62, 80);
		glVertex2f(x4, y4); // center of circle
		for(w = 0; w <= triangleAmount4;w++) {
			glVertex2f(
		            x4 + (radius4 * cos(w *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(w * twicePi4 / triangleAmount4))
			);
		}
	glEnd();


int k;

	GLfloat x2=0.35f; GLfloat y2=0.29f; GLfloat radius2 =.09f;          //Clock_Dial
	int triangleAmount2 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(236, 236, 236);
		glVertex2f(x2, y2); // center of circle
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();



//................................................




glBegin(GL_QUADS);       //roof border right
glColor3ub(23, 32, 42 );

glVertex2f(0.50f, 0.35f);
glVertex2f(0.545f, 0.3512f);
glVertex2f(0.35f,0.55f);
glVertex2f(0.35f,0.5f);

glEnd();


glBegin(GL_QUADS);         //roof border left
glColor3ub(23, 32, 42 );

glVertex2f(0.35f,0.5f);
glVertex2f(0.35f,0.55f);
glVertex2f(0.15f,0.35f);
glVertex2f(0.2f,0.35f);


glEnd();




glBegin(GL_QUADS);                    // RIGHT finishing Border
glColor3ub(23, 32, 42 );

glVertex2f(0.9f,-0.32f);
glVertex2f(0.915f,-0.32f);
glVertex2f(0.915f,0.2f);
glVertex2f(0.9f,0.2f);
glEnd();



glBegin(GL_QUADS);                    // Left finishing Border
glColor3ub(23, 32, 42 );

glVertex2f(-0.215f,-0.32f);
glVertex2f(-0.2f,-0.32f);
glVertex2f(-0.2f,0.2f);
glVertex2f(-0.215f,0.2f);
glEnd();



glBegin(GL_QUADS);                    // Building roof top left
glColor3ub(23, 32, 42 );

glVertex2f(-0.28f,0.2f);
glVertex2f(0.2f,0.2f);
glVertex2f(0.2f,0.3f);
glVertex2f(-0.18f,0.3f);
glEnd();




glBegin(GL_QUADS);                    // Building roof top Right
glColor3ub(23, 32, 42 );

glVertex2f(0.5f,0.2f);
glVertex2f(0.98f,0.2f);
glVertex2f(0.88f,0.3f);
glVertex2f(0.5f,0.3f);

glEnd();

//...................................
// Buildind part Finish .............................................


	//.............WindMIll...........................

glBegin(GL_QUADS);
glColor3ub(75, 72, 56  );
glVertex2f(-0.88f, -0.12f);
glVertex2f(-0.7f, -0.12f);
glVertex2f(-0.7f,-0.1f);
glVertex2f(-0.88f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(31, 30, 22 );
glVertex2f(-0.86f, -0.1f);
glVertex2f(-0.72f, -0.1f);
glVertex2f(-0.72f,-0.08f);
glVertex2f(-0.86f,-0.08f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(189, 181, 130 );
glVertex2f(-0.84f, -0.08f);
glVertex2f(-0.74f, -0.08f);
glVertex2f(-0.74f, 0.16f);
glVertex2f(-0.79f, 0.22f);
glVertex2f(-0.84f, 0.16f);
glEnd();


int z;

	GLfloat x3=-0.79f; GLfloat y3=0.22f; GLfloat radius3 =.02f;          //Clock_Dial
	int triangleAmount3 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(236, 236, 236);
		glVertex2f(x3, y3); // center of circle
		for(z = 0; z <= triangleAmount3;z++) {
			glVertex2f(
		            x3 + (radius3 * cos(z *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(z * twicePi3 / triangleAmount3))
			);
		}
	glEnd();








glPushMatrix();




glTranslatef(-0.79,0.22,0.0);
    glRotatef(j,0.0,0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(224, 224, 224);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( -0.05f, 0.2f);
    glVertex2f( 0.05f, 0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(224, 224, 224);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( -0.05f, -0.2f);
    glVertex2f( 0.05f, -0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(224, 224, 224);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.2f, -0.05f);
    glVertex2f( 0.2f, 0.05f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(224, 224, 224);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( -0.2f, 0.05f);
    glVertex2f( -0.2f, -0.05f);
    glEnd();
glLoadIdentity();

//................................................



//...................Plane..........................

glPushMatrix();
glTranslatef(position,position,0);

glBegin(GL_QUADS);
glColor3ub(250,253,254);
glVertex2f(-0.4f,0.7f);
glVertex2f(0.1f,0.7f);
glVertex2f(0.1f,0.8f);
glVertex2f(-0.4f,0.8f);
glEnd();

glBegin(GL_QUADS);         //......... lanja........
glColor3ub(219, 0, 0);
glVertex2f(-0.4f, 0.8f);
glVertex2f(-0.3f,0.8f);
glVertex2f(-0.35f, 0.85f);
glVertex2f(-0.4f, 0.85f);
glEnd();


glBegin(GL_QUADS);        //Pankha 1
glColor3ub(219, 0, 0);
glVertex2f(-0.25f, 0.65f);
glVertex2f(-0.19f,0.65f);
glVertex2f(-0.1f, 0.75f);
glVertex2f(-0.15f, 0.75f);
glEnd();


glBegin(GL_QUADS);        //Pankha 2
glColor3ub(219, 0, 0);
glVertex2f(-0.15f, 0.8f);
glVertex2f(-0.1f,0.8f);
glVertex2f(-0.14f, 0.85f);
glVertex2f(-0.2f, 0.85f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(219, 0, 0);
glVertex2f(0.1f, 0.7f);
glVertex2f(0.12f,0.7f);
glVertex2f(0.14f,0.71f);
glVertex2f(0.17f, 0.73f);
glVertex2f(0.185f, 0.74f);
glVertex2f(0.19f, 0.745f);
glVertex2f(0.19f, 0.75f);
glVertex2f(0.1f,0.75f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(250,251,254);
glVertex2f(0.1f,0.75f);
glVertex2f(0.19f, 0.75f);
glVertex2f(0.19f, 0.755f);
glVertex2f(0.185f, 0.76f);
glVertex2f(0.17f, 0.77f);
glVertex2f(0.155f, 0.78f);
glVertex2f(0.135f, 0.79f);
glVertex2f(0.12f, 0.795f);
glVertex2f(0.1f, 0.8f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.1f, 0.8f);
glVertex2f(0.1f, 0.7f);

glEnd();
glPopMatrix();



//................................................


//............Cloud...................


//(1)

glPushMatrix();
glTranslatef(position1,0,0);

int e;

	GLfloat x5=-0.805f; GLfloat y5=0.79f; GLfloat radius5 =.06f;          //Clock_Dial
	int triangleAmount5 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 122, 255);
		glVertex2f(x5, y5); // center of circle
		for(e = 0; e <= triangleAmount5;e++) {
			glVertex2f(
		            x5 + (radius5 * cos(e *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(e * twicePi5 / triangleAmount5))
			);
		}
	glEnd();


//(2)
	int g;


	GLfloat x6=-0.745f; GLfloat y6=0.83f; GLfloat radius6 =.06f;          //Clock_Dial
	int triangleAmount6 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 122, 255 );
		glVertex2f(x6, y6); // center of circle
		for(g = 0; g <= triangleAmount6;g++) {
			glVertex2f(
		            x6 + (radius6 * cos(g *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(g * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

//(3)
	int h;


	GLfloat x7=-0.745f; GLfloat y7=0.75f; GLfloat radius7 =.06f;          //Clock_Dial
	int triangleAmount7 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 122, 255 );
		glVertex2f(x7, y7); // center of circle
		for(h = 0; h <= triangleAmount7;h++) {
			glVertex2f(
		            x7 + (radius7 * cos(h *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(h * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

//(4)

int s;

	GLfloat x8=-0.685f; GLfloat y8=0.79f; GLfloat radius8 =.06f;          //Clock_Dial
	int triangleAmount8 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 122, 255);
		glVertex2f(x8, y8); // center of circle
		for(s = 0; s <= triangleAmount8;s++) {
			glVertex2f(
		            x8 + (radius8 * cos(s *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(s * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

glPopMatrix();
glLoadIdentity();


//.....................................................................



glTranslatef(0.35,0.29,0.0);
glRotatef(j,0.0,0.0, 1.0);
glBegin(GL_LINES);                               //Clock's_Hand
    glColor3ub(0, 0, 0);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.0f, 0.08f);
    glEnd();
    glLoadIdentity();
glTranslatef(0.35,0.29,0.0);
glRotatef(l,0.0,0.0, 1.0);
glBegin(GL_LINES);                               //Clock's_Hand
    glColor3ub(0, 0, 0);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.07f, 0.0f);
    glEnd();
    glLoadIdentity();

glTranslatef(0.35,0.29,0.0);
glRotatef(m,0.0,0.0, 1.0);
glBegin(GL_LINES);                               //Clock's_Hand
    glColor3ub(0, 0, 0);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 0.0f, -0.055f);
    glEnd();
    glLoadIdentity();
glPopMatrix();              //glPopMatrix pops the top matrix off the stack
    j-=0.1f;               //i=i+.1=.2
    l-=0.01f;
    m-=0.0015f;
    glFlush();
glLoadIdentity();




 glutTimerFunc(10000,night_demo,0);
	glFlush();
}






//...............................................

void update(int value) {

    if(position <-1.0)
        position = -1.0f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}





void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed = 0.00f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed += 0.01f;
			}
	glutPostRedisplay();
	}





//...........................................


void update1(int value) {

    if(position1 <-0.1)
        position1 = 1.0f;

    position1 += speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void screen1()
{
    gluOrtho2D(-2,2,-2,2);
}

void Idle1()
{
    glutPostRedisplay();
}


//............sound ...................

void sound()
{

    PlaySound("c.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound("b.wav", NULL, SND_ASYNC|SND_FILENAME);


}







void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 's':
    speed = 0.0f;
    break;
case 'd':
    speed = 0.01f;
    break;
glutPostRedisplay();

//.................sound........

case 'f':

glLoadIdentity();
         glutDisplayFunc(night);
         sound2();
         glutPostRedisplay();

    break;

case 'n':
glutDisplayFunc(day);
sound();
         glutPostRedisplay();
    break;

	}
}





int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Test");
	glutDisplayFunc(day);
	init();
	//glutSpecialFunc(SpecialInput);
	glutKeyboardFunc(handleKeypress);
	glutMouseFunc(handleMouse);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutIdleFunc(Idle1);
	glutMainLoop();

	return 0;
}

