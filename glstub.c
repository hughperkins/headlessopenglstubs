#include "GL/gl.h"

void glClearColor(GLfloat r, GLfloat g, GLfloat b, GLfloat a) {
}

void glEnable(GLenum i) {
}

void glMatrixMode(GLenum mode) {
}

void glViewport(GLint x, GLint y,
                                    GLsizei width, GLsizei height) {
}

void  glNewList( GLuint list, GLenum mode ){
}

void glStencilFunc( GLenum func, GLint ref, GLuint mask ){}

void glStencilMask( GLuint mask ){}

void glStencilOp( GLenum fail, GLenum zfail, GLenum zpass ){}

void glBlendEquation( GLenum mode ) {
}

void glEnableClientState( GLenum cap ){
}

void glDisableClientState( GLenum cap ) {
}

void glVertexPointer( GLint size, GLenum type,
                                       GLsizei stride, const GLvoid *ptr ){
}

void  glTexCoordPointer( GLint size, GLenum type,
                                         GLsizei stride, const GLvoid *ptr ){
}

void  glDrawArrays( GLenum mode, GLint first, GLsizei count ) {
}

void glTexEnvi(  GLenum target, GLenum pname, GLint param ){
}

void  glMaterialfv( GLenum face, GLenum pname, const GLfloat *params ) {
}

void glMaterialf( GLenum face, GLenum pname, GLfloat param ) {
}

void glPointSize( GLfloat size ) {
}

 void glCullFace( GLenum mode ) {
}

void glLogicOp( GLenum opcode ) {
}

void  glEndList( void ){
}

// used by lua
GLuint glGenLists( GLsizei range ) {
   return 0;
}

void glColorMask( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha ) {
}

void glLoadIdentity() {
}

void glOrtho(GLdouble left, GLdouble right,
                                 GLdouble bottom, GLdouble top,
                                 GLdouble near_val, GLdouble far_val) {
}

void glGenTextures(GLsizei n, GLuint *textures) {
}

void glBindTexture(GLenum target, GLuint texture) {
}

void glTexParameteri(GLenum target, GLenum pname, GLint param) {
}

void  glTexParameterf( GLenum target, GLenum pname, GLfloat param ){
}

void glTexParameterfv(GLenum target, GLenum pname,
                                          const GLfloat *params) {
}

void glTexImage2D(GLenum target, GLint level,
                                    GLint internalFormat,
                                    GLsizei width, GLsizei height,
                                    GLint border, GLenum format, GLenum type,
                                    const GLvoid *pixels) {
}

void glClear(GLbitfield mask) {
}

void glBegin(GLenum mode) {
}

void glTexCoord2i(GLint s, GLint t ){
}

void glVertex2f(GLfloat x, GLfloat y ) {
}

void glVertex3f(GLfloat x, GLfloat y, GLfloat z){
}

void glEnd() {
}

void glDeleteTextures(GLsizei n, const GLuint *textures) {
}

void glGetIntegerv(GLenum pname, GLint *params) {
}

void glDepthFunc(GLenum func) {
}

void glShadeModel(GLenum mode) {
}

//void gluPerspective() {
//}

void glHint(GLenum target, GLenum mode) {
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param ) {
}

const GLubyte * glGetString( GLenum name ) {
   return "";
}

void glClearStencil(GLint s ) {
}

void glDisable(GLenum i) {
}

void glClearDepth(GLclampd depth) {
}

void glColor4f( GLfloat red, GLfloat green,
                                   GLfloat blue, GLfloat alpha ) {
}

void glPolygonMode(GLenum face, GLenum mode) {
}

void glBlendFunc(GLenum sfactor, GLenum dfactor ) {
}

void glColor4fv( const GLfloat *v) {
}

void glLineStipple(GLint factor, GLushort pattern) {
}

void glPopAttrib() {
}

void glPushAttrib(GLbitfield mask) {
}

void glDepthMask(GLboolean flag) {
}

void glAlphaFunc(GLenum func, GLclampf ref) {
}

void glFogfv(GLenum pname, const GLfloat *params) {
}

void glPushMatrix() {
}

void glPopMatrix() {
}

void glCallList( GLuint list) {
}

void glTexSubImage2D(GLenum target, GLint level,
                                       GLint xoffset, GLint yoffset,
                                       GLsizei width, GLsizei height,
                                       GLenum format, GLenum type,
                                       const GLvoid *pixels ) {
}

void glTexCoord2f(GLfloat s, GLfloat t ) {
}

void glLineWidth(GLfloat width) {
}

void glColor3f(GLfloat red, GLfloat green, GLfloat blue ) {
}

void glPolygonOffset(GLfloat factor, GLfloat units) {
}



