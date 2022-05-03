#define GL_SILENCE_DEPRECATION
#include<stdio.h>
#include <GLUT/glut.h>
#include <stdlib.h>
#include <GLFW/glfw3.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

/* Initialize OpenGL Graphics */
void initGL() {
   // Set "clearing" or background color
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}
 
void display() {
   glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    
   glBegin(GL_POLYGON);// These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow-forehead
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.25f, 0.47f);
    glVertex2f(0.0f, 0.35f);
    glVertex2f(-0.25f, 0.47f);
   glEnd();
    
    
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 1.0f); // Left pink-sideburns
        glVertex2f(-0.3f, 0.6f);
        glVertex2f(-0.25f, 0.47f);
        glVertex2f(-0.3f, 0.2f);
        glVertex2f(-0.45f, 0.05f);
        glVertex2f(-0.6f, 0.3f);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 1.0f);// Right pink-sideburns
        glVertex2f(0.3f, 0.6f);
        glVertex2f(0.25f, 0.47f);
        glVertex2f(0.3f, 0.2f);
        glVertex2f(0.45f, 0.05f);
        glVertex2f(0.6f, 0.3f);
    glEnd();
    
    
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 1.0f, 1.0f);// Left Blue
        glVertex2f(-0.6f, 0.3f);
        glVertex2f(-0.51f, 0.15f);
        glVertex2f(-0.7f, -0.04f);
        glVertex2f(-0.7f, 0.12f);
    glEnd();
    
    
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 1.0f, 1.0f);// RightBlue
        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.51f, 0.15f);
        glVertex2f(0.7f, -0.04f);
        glVertex2f(0.7f, 0.12f);
    glEnd();
    
    
    glBegin(GL_POLYGON);
        glColor3f(.6f, .1f, .4f);// Left White Cheeks
        glVertex2f(-0.51f, 0.15f);
        glVertex2f(-0.45f, 0.05f);
        glVertex2f(-0.45f, -0.2f);
        glVertex2f(-0.3f, -0.3f);
        glVertex2f(-0.22f, -0.42f);
        glVertex2f(-0.3f, -0.57f);
        glVertex2f(-0.61f, -0.32f);
        glVertex2f(-0.72f, -0.055f);
    glEnd();
    
    
    glBegin(GL_POLYGON);
        glColor3f(.6f, .1f, .4f);// Right White Cheeks
        glVertex2f(0.51f, 0.15f);
        glVertex2f(0.45f, 0.05f);
        glVertex2f(0.45f, -0.2f);
        glVertex2f(0.3f, -0.3f);
        glVertex2f(0.22f, -0.42f);
        glVertex2f(0.3f, -0.57f);
        glVertex2f(0.61f, -0.32f);
        glVertex2f(0.72f, -0.055f);
    glEnd();
    
    
    glBegin(GL_POLYGON);
        glColor3f(.3, .2, 0.5);// Left Chin
        glVertex2f(-0.22f, -0.42f);
        glVertex2f(-0.12f, -0.57f);
        glVertex2f(-0.3f, -0.57f);
    glEnd();
    
    
    glBegin(GL_POLYGON);
        glColor3f(.3, .2, 0.5);// Right Chin
        glVertex2f(0.22f, -0.42f);
        glVertex2f(0.12f, -0.57f);
        glVertex2f(0.3f, -0.57f);
    glEnd();
    
    
    glBegin(GL_POLYGON);
        glColor3f(.2f, 0.2f, .9f);// Blue left forehead
        glVertex2f(-0.25f, 0.47f);
        glVertex2f(0.0f, 0.35f);
        glVertex2f(0.0f, 0.05f);
        glVertex2f(-0.3f, 0.2f);

    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(.2f, 0.2f, .5f);// Blue right forehead
        glVertex2f(0.25f, 0.47f);
        glVertex2f(0.3f, 0.2f);
        glVertex2f(0.0f, 0.05f);
        glVertex2f(0.0f, 0.35f);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(.3, .5, 0.5);// Middle Chin
        glVertex2f(0.12f, -0.57f);
        glVertex2f(-0.12f, -0.57f);
        glVertex2f(-0.22f, -0.42f);
        glVertex2f(-0.12f, -0.32f);
        glVertex2f(-0.05f, -0.4f);
        glVertex2f(0.05f, -0.4f);
        glVertex2f(0.12f, -0.32f);
        glVertex2f(0.22f, -0.42f);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);// Nose
        glVertex2f(-0.05f, -0.4f);
        glVertex2f(-0.12f, -0.32f);
        glVertex2f(-0.12f, -0.32f);
        glVertex2f(-0.08f, -0.28f);
        glVertex2f(0.08f, -0.28f);
        glVertex2f(0.12f, -0.32f);
        glVertex2f(0.05f, -0.4f);
    glEnd();
    

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.8, 0.9);// Blue nose
        glVertex2f(0.08f, -0.28f);
        glVertex2f(-0.08f, -0.28f);
        glVertex2f(-0.15f, 0.13f);
        glVertex2f(0.0f, 0.05f);
        glVertex2f(0.15f, 0.13f);
    
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(0.1, 0.2, 0.9); // Left Cheeks
        glVertex2f(-0.15f, 0.13f);
        glVertex2f(-0.08f, -0.28f);
        glVertex2f(-0.22f, -0.42f);
        glVertex2f(-0.2809f, -0.3f);
    
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(0.1, 0.2, 0.9); // Right Cheeks
        glVertex2f(0.15f, 0.13f);
        glVertex2f(0.08f, -0.28f);
        glVertex2f(0.22f, -0.42f);
        glVertex2f(0.2809f, -0.3f);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0); // Left Eyes
        glVertex2f(-0.3f, 0.2f);
        glVertex2f(-0.15f, 0.13f);
        glVertex2f(-0.2809f, -0.3f);
        glVertex2f(-0.45f, 0.05f);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0); // Left Eyes
        glVertex2f(0.3f, 0.2f);
        glVertex2f(0.15f, 0.13f);
        glVertex2f(0.2809f, -0.3f);
        glVertex2f(0.45f, 0.05f);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0); // Left Ear
        glVertex2f(0.3f, 0.2f);
        glVertex2f(0.15f, 0.13f);
        glVertex2f(0.2809f, -0.3f);
        glVertex2f(0.45f, 0.05f);
    glEnd();
    
   glFlush();
    
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.7, 0.0); // Left Ear
        glVertex2f(-0.55f, 0.34f);
        glVertex2f(-0.65f, 0.4f);
        glVertex2f(-0.65f, 0.6f);
        glVertex2f(-0.52f, 0.72f);
        glVertex2f(-0.4f, 0.71f);
        glVertex2f(-.3f, 0.6f);
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.7, 0.0); // Right Ear
        glVertex2f(0.55f, 0.34f);
        glVertex2f(0.65f, 0.4f);
        glVertex2f(0.65f, 0.6f);
        glVertex2f(0.52f, 0.72f);
        glVertex2f(0.4f, 0.71f);
        glVertex2f(.3f, 0.6f);
    glEnd();

    
   glFlush();
    
}
 
/* Handler for window re-size event. Called back when the window first appears and
   whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
   // Compute aspect ratio of the new window
   if (height == 0) height = 1;                // To prevent divide by 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;
 
   // Set the viewport to cover the new window
   glViewport(0, 0, width, height);
 
   // Set the aspect ratio of the clipping area to match the viewport
   glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
   glLoadIdentity();             // Reset the projection matrix
   if (width >= height) {
     // aspect >= 1, set the height from -1 to 1, with larger width
      gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
   } else {
      // aspect < 1, set the width to -1 to 1, with larger height
     gluOrtho2D(-1.0, 1.0, -1.0 / aspect, 1.0 / aspect);
   }
}
 

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv){
   glutInit(&argc, argv);          // Initialize GLUT
   glutInitWindowSize(640, 480);   // Set the window's initial width & height - non-square
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutCreateWindow("Panda");  // Create window with the given title
   glutDisplayFunc(display);       // Register callback handler for window re-paint event
   glutReshapeFunc(reshape);       // Register callback handler for window re-size event
   initGL();                       // Our own OpenGL initialization
   glutMainLoop();                 // Enter the infinite event-processing loop
   return 0;
}
