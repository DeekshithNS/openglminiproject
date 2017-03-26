#include "head1.h"

int main(int argc, char **argv)		//Main Function
	{
		glutInit(&argc, argv);			//GLUT Initialization
		glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE); //Alpha Blending enabled,3D Depth,Two display buffers

	//	screen_width = glutGet(GLUT_SCREEN_WIDTH);	//Window Parameters
		//screen_height = glutGet(GLUT_SCREEN_HEIGHT);
		//window_width = 1400;
		//window_height = 800;

		glutInitWindowSize(1400,800);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("hOME SCREEN");

		init();							//Setup everything
		glutDisplayFunc(display);		//Register display function
		//glutReshapeFunc(reshape);		//Register reshape function
										//glutFullScreen();				//Fullscreen viewing
		//glutIdleFunc(idle);				//Register idle function
		//glutKeyboardFunc(keyboard);		//Register keyboard function
		//glutSpecialFunc(specialKeys);	//Register special key function
		//glutSpecialUpFunc(specialKeysUp);//Register special key release
		//glutMouseFunc(mouse);			//Register mouse function
		//glutPassiveMotionFunc(moveMouse);//Register mouse movement function
		glutMainLoop();					//For GLUT Main Loop

		//freeTextures();					//Free textures once done
		return 0;
	}
