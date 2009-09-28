#include "GL/glu.h"

#include <stdio.h>

void gluPerspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar) {
}

GLUquadric* gluNewQuadric() {
   return 0;
}

void gluQuadricDrawStyle(GLUquadric* quad, GLenum draw) {
}

void gluSphere(GLUquadric* quad, GLdouble radius, GLint slices, GLint stacks) {
}

void gluDeleteQuadric(GLUquadric* quad) {
}

void gluCylinder(GLUquadric* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks) {
}

GLint gluBuild2DMipmaps (GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *data) {
   printf("gluBuild2DMipmaps\n");
   return 0;
}

void gluOrtho2D(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top) {
}

GLint GLAPIENTRY gluProject (GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ) {
   printf("gluProject\n");
   return 0;
}


