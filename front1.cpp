
#include "head1.h"

int hell;
int screen;

void textPrint(float x, float y, char *string) //To output text in string
{
	int len, i;
	glRasterPos2f(x, y);
	len = (int)strlen(string);
	for (i = 0; i<len; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
	}
}


void welcomeScreen()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-700, 700, -400, 400);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glBegin(GL_POLYGON);  //1
	glColor3f(0, 0.675, 0.757);
	glVertex2f(-700, 400);
	glVertex2f(-700, 0);
	glVertex2f(-200, 400);
	glEnd();

	glBegin(GL_POLYGON); //2
	glColor3f(0.412, 0.941, 0.682);
	glVertex2f(-700, 0);
	glVertex2f(-200, 400);
	glVertex2f(0, 400);
	glVertex2f(-700, -200);
	glEnd();

	glBegin(GL_POLYGON);   //3
	glColor3f(0.012, 0.608, 0.898);
	glVertex2f(-700, -200);
	glVertex2f(-700, -400);
	glVertex2f(200, 400);
	glVertex2f(0, 400);
	glEnd();

	glBegin(GL_POLYGON);     //4
	glColor3f(0.008, 0.467, 0.741);
	glVertex2f(-700, -400);
	glVertex2f(-50, 180);
	glVertex2f(100, -400);
	glEnd();

	glBegin(GL_POLYGON);  //5
	glColor3f(0.118, 0.533, 0.898);
	glVertex2f(-172, 72);
	glVertex2f(-50, 180);
	glVertex2f(500, -400);
	glVertex2f(100, -400);
	glEnd();

	glBegin(GL_POLYGON);  //6
	glColor3f(0.161, 0.714, 0.965);
	glVertex2f(-50, 180);
	glVertex2f(50, 270);
	glVertex2f(700, -400);
	glVertex2f(500, -400);
	glEnd();
	glBegin(GL_POLYGON); //7
	glColor3f(0.051, 0.278, 0.631);
	glVertex2f(50, 270);
	glVertex2f(200, 400);
	glVertex2f(700, 400);
	glVertex2f(700, -400);
	glEnd();


	glColor3f(0, 0, 0);
	textPrint(-240, 300, "SRINIVAS INSTITUTE OF TECHNOLOGY");
	textPrint(-100, 270, "valchil,Mangaluru");
	textPrint(-280, 230, "COMPUTER GRAPHICS AND VISUALIZATION LAB");
	textPrint(-100, 200, "Mini project");
	textPrint(-200, 170, "THE STORY OF SPACEX'S FALCON 9");
	textPrint(-150, -230, "DEEKSHITH NS");
	textPrint(-100, -260, "4sn14cs035");
	textPrint(-100, -330, "4sn14cs036");
	textPrint(-150, -300, "DIKSHEETH RAJKUMAR");
	textPrint(-650, -250, "project guide :");
	textPrint(-650, -280, "MR.SHASHIDAR");
	textPrint(400, -250, "project co-ordinator:");
	textPrint(450, -280, "MR.ARAVIND");
	

	glutPassiveMotionFunc(moveMouse);

	if (hell == 0) {
		glColor3f(0.094, 1, 1);
		glBegin(GL_POLYGON);
		glVertex2f(-80, 20);
		glVertex2f(-80, -20);
		glVertex2f(80, -20);
		glVertex2f(80, 20);
		glEnd();

		glColor3f(0, 0.443, 0.031);
		textPrint(-30, -10, "start");
	}
	else if (hell = 1) {
		glColor3f(0.094, 0.6, 1);
		glBegin(GL_POLYGON);
		glVertex2f(-80, 20);
		glVertex2f(-80, -20);
		glVertex2f(80, -20);
		glVertex2f(80, 20);
		glEnd();

		glColor3f(1,0 , 0.031);
		textPrint(-30, -10, "start");
	}
	glutMouseFunc(mouse);

	if (screen == 2)
	{
		glutDisplayFunc(display2);
		
	}

}

void mouse(int button, int state, int x, int y) //Mouse buttons click handler
{
	float scx, scy;
	scx = (float(x) / float(1400) - 0.5f) * 1400;
	scy = -(float(y) / float(800) - 0.5f) * 800;
	//if (current_screen == 0)
	//{
		if (scx >= -100 && scx <= 60 && scy >= 10 && scy <= 50) //First Box
		{
			if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON) {
				screen = 2;
			}
		}

		//if (scx >= -6 && scx <= 11 && scy >= -2 && scy <= 3.5) //Second Box
		//{
			//current_screen = 3;
			//ast_x = x;		//Save values for use in inner view
			//last_y = y;
		//}
	//}
	glutPostRedisplay();
}

void moveMouse(int x, int y) //Mouse movement handler
{
	float scx, scy;
	scx = (float(x) / float(1400) - 0.5f) * 1400;
	scy = -(float(y) / float(800) - 0.5f) * 800;
	//	if (current_screen == 0)
		//{
	if (scx >= -100 && scx <= 60 && scy >= 10 && scy <= 50) //First Box
	{
		hell = 1;
	}
	//else if (scx >= -6 && scx <= 11 && scy >= -2 && scy <= 3.5) //Second Box
	//{
	//	start_mouse_over_2 = 1;
	//}
	else  //None
	{
		hell = 0;
		//start_mouse_over_2 = 0;
	}

	glutPostRedisplay();
}

void init()							//Setup Everything
{
	//setupTextures();				//Setup all textures
	glClearColor(0.0, 0.0, 0.0, 0.0);
	//glEnable(GL_DEPTH_TEST);		//Enable removing objects in the background
}


void display()						//Render the output
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Clear color and depth buffer
	glLoadIdentity();				//Load identity matrix

	 welcomeScreen();		//Welcome screen
	glFlush();						//Flush OpenGL buffers to the window
    glutSwapBuffers();
}

