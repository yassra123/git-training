
#include <stdlib.h>

#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);

//original shape
glBegin(GL_POLYGON);
glColor3f (1.0, 0.0, 0.0);
glVertex2f (0.15, 0.85);					
glColor3f (0.0, 1.0, 0.0);
glVertex2f 	(0.25, 0.85);				
glColor3f (0.0, 0.0, 1.0);
glVertex2f 	(0.25, 0.95);				
glColor3f (0.25, 0.0, 0.25);
glVertex2f 	(0.15, 0.95);				
glEnd();

//translated shape
glTranslatef(0.5,0.0,0.0);
glBegin(GL_POLYGON);
glColor3f (1.0, 0.0, 0.0);
glVertex2f (0.15, 0.85);					
glColor3f (0.0, 1.0, 0.0);
glVertex2f 	(0.25, 0.85);				
glColor3f (0.0, 0.0, 1.0);
glVertex2f 	(0.25, 0.95);				
glColor3f (0.25, 0.0, 0.25);
glVertex2f 	(0.15, 0.95);				
glEnd();

//scaled shape
glScalef(1.2,1.2,1.2);
glBegin(GL_POLYGON);
glColor3f (1.0, 0.0, 0.0);
glVertex2f (0.15, 0.55);					
glColor3f (0.0, 1.0, 0.0);
glVertex2f 	(0.25, 0.55);				
glColor3f (0.0, 0.0, 1.0);
glVertex2f 	(0.25, 0.65);				
glColor3f (0.25, 0.0, 0.25);
glVertex2f 	(0.15, 0.65);				
glEnd();

//sheared shape along x-axis
GLfloat m[16] = {
    1.0f, 0.0f, 0.0f, 0.0f,
    0.65, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f
};
glMultMatrixf(m);
glBegin(GL_POLYGON);
glColor3f (1.0, 0.0, 0.0);
glVertex2f (0.01, 0.20);					
glColor3f (0.0, 1.0, 0.0);
glVertex2f 	(0.05, 0.20);				
glColor3f (0.0, 0.0, 1.0);
glVertex2f 	(0.05, 0.28);				
glColor3f (0.25, 0.0, 0.25);
glVertex2f 	(0.01, 0.28);				
glEnd();

glFlush ();
}

void init (void)
{

glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 900);
glutInitWindowPosition (0, 0);
glutCreateWindow ("BC190204861");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; 
}
