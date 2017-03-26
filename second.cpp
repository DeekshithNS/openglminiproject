#include "head1.h"

void screen2()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-700, 700, -400, 400);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	




	glBegin(GL_POLYGON);  //1
	glColor3f(0.129, 0.129, 0.129);
	glVertex2f(-700, 400);
	glVertex2f(0, 400);
	glVertex2f(-700, -400);
	glEnd();

	glBegin(GL_POLYGON); //2
	glColor3f(0,0,0);
	glVertex2f(-700, -400);
	glVertex2f(0, 400);
	glVertex2f(700, 400);
	glVertex2f(0, -400);
	glEnd();

	
	glBegin(GL_POLYGON);     //3
	glColor3f(0.259, 0.259, 0.259);
	glVertex2f(700, -400);
	glVertex2f(700, 400);
	glVertex2f(0, -400);
	glEnd();

	glBegin(GL_POLYGON);     //4
	glColor3f(0.965, 0.816, 0);
	glVertex2f(-650, 250);
	glVertex2f(-450, 250);
	glVertex2f(-450, 210);
	glVertex2f(-650, 210);
	glEnd();


	glBegin(GL_POLYGON);     //4
	glColor3f(0.965, 0.816, 0);
	glVertex2f(-650, 180);
	glVertex2f(-450, 180);
	glVertex2f(-450, 140);
	glVertex2f(-650, 140);
	glEnd();


	glBegin(GL_POLYGON);     //4
	glColor3f(0.965, 0.816, 0);
	glVertex2f(-650, 100);
	glVertex2f(-450, 100);
	glVertex2f(-450, 60);
	glVertex2f(-650, 60);
	glEnd();




	glColor3f(1, 1, 1);
	textPrint(-100, 350, "SPACE X's FALCON 9");

}

void display2()						//Render the output
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Clear color and depth buffer
	glLoadIdentity();				//Load identity matrix

	screen2();		//Welcome screen
	glFlush();						//Flush OpenGL buffers to the window
	glutSwapBuffers();
}

