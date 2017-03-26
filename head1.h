
#include <stdio.h>	//Header Files
#include <stdlib.h>
#include <math.h>
#include <glut.h>
#include <windows.h>
#include <mmsystem.h>

//int window_width, window_height;// screen_width, screen_height;	//Screen parameters
//int screen = 0;	//Current Screen
//void *font = GLUT_BITMAP_TIMES_ROMAN_24; //Font used
//bool key_buttons[255];   //Key state lookup


void textPrint(float x, float y, char *string);
void welcomeScreen();
void display();
void init();
void myyinit();
void moveMouse(int x, int y);
//void screen2();
void mouse(int button, int state, int x, int y);
void display2();
void timer(int);
void reshape(GLsizei width, GLsizei height);
//