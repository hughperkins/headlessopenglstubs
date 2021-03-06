#include "GL/glew.h"
#include "GL/glxew.h"

#include <stdio.h>

const GLubyte*  glewGetString(GLenum name){
   printf( "glewGetString()"  );
   return "GL_ARB_multitexture GL_ARB_texture_env_combine GL_ARB_texture_compression";
}

GLboolean glewIsSupported (const char* name) {
   return GL_FALSE;
}

// change EXTERN according to whether you're linking to glew after this
// or not:

// if linking to glew after this:
#define EXTERN extern

// if not linking to glew after this:
// #define EXTERN

EXTERN GLboolean __GLEW_ARB_vertex_program = GL_FALSE;
EXTERN GLboolean __GLEW_ARB_texture_non_power_of_two = GL_FALSE;
EXTERN GLboolean __GLEW_ARB_shadow = GL_FALSE;
EXTERN GLboolean __GLEW_ARB_depth_texture = GL_FALSE;
EXTERN GLboolean __GLEW_ARB_shadow_ambient = GL_FALSE;
EXTERN GLboolean __GLEW_ARB_texture_border_clamp = GL_FALSE;

EXTERN GLboolean __GLEW_EXT_texture_edge_clamp = GL_FALSE;
EXTERN GLboolean __GLEW_EXT_pixel_buffer_object = GL_FALSE;

EXTERN GLboolean __GLXEW_SGI_video_sync = GL_FALSE;

// need these true, otherwise spring exits:
EXTERN GLboolean __GLEW_ARB_multitexture = GL_TRUE;
EXTERN GLboolean __GLEW_ARB_texture_env_combine = GL_TRUE;
EXTERN GLboolean __GLEW_ARB_texture_compression = GL_TRUE;

EXTERN GLboolean __GLEW_ARB_texture_env_dot3;

EXTERN PFNGLXGETVIDEOSYNCSGIPROC __glewXGetVideoSyncSGI;
int _glewXGetVideoSyncSGI(uint* count) {
   *count = 0;
}

EXTERN PFNGLPROGRAMENVPARAMETER4FARBPROC __glewProgramEnvParameter4fARB;
void _glewProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){
}

EXTERN PFNGLXWAITVIDEOSYNCSGIPROC __glewXWaitVideoSyncSGI;
int _glewXWaitVideoSyncSGI (int divisor, int remainder, unsigned int* count){
   return 0;
}

EXTERN PFNGLCOMPRESSEDTEXIMAGE2DARBPROC __glewCompressedTexImage2DARB;
void _glCompressedTexImage2DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data ) {
   //printf( "glCompressedTexImage2DARB\n" );
}

void __glBindBuffer(GLenum target, GLuint buffer){
   //printf( "glBindBuffer\n" );
}

void __glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage){
   //printf( "glBufferData\n" );
}

GLvoid* __glMapBuffer(GLenum target, GLenum access){
   //printf( "glMapBuffer\n"  );
   return 0;
}

GLboolean __glUnmapBuffer( GLenum target ){
   //printf( "glUnmapBuffer\n"  );
   return GL_TRUE;
}

EXTERN PFNGLBINDPROGRAMARBPROC __glewBindProgramARB;
void _glewBindProgramARB(GLenum target, GLuint program) {
   //printf( "glewBindProgramARB\n"  );
}

EXTERN PFNGLCLIENTACTIVETEXTUREARBPROC __glewClientActiveTextureARB;
void _glewClientActiveTextureARB(GLenum texture) {
   //printf( "glewClientActiveTextureARB\n"  );
}

EXTERN PFNGLCLIENTACTIVETEXTUREPROC __glewClientActiveTexture;
void _glewClientActiveTexture (GLenum texture) {
   //printf( "glewClientActiveTexture\n"  );
}

EXTERN PFNGLBINDFRAMEBUFFEREXTPROC __glewBindFramebufferEXT;
void _glewBindFramebufferEXT(GLenum target, GLuint framebuffer){
}

EXTERN PFNGLFRAMEBUFFERTEXTURE2DEXTPROC __glewFramebufferTexture2DEXT;
void _glewFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){
}

//EXTERN PFNGLACTIVETEXTUREARBPROC __glewActiveTextureARB;
// void  _glActiveTextureARB( GLenum texture ) {
  // printf( "__glActiveTextureARB\n");
//}

EXTERN PFNGLMULTITEXCOORD1FPROC __glewMultiTexCoord1f;
void _glewMultiTexCoord1f(GLenum target, GLfloat s) {
   //printf("__glewMultiTexCoord1f\n");
}

EXTERN PFNGLMULTITEXCOORD2FPROC __glewMultiTexCoord2f;
void _glewMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t) {
   //printf("__glewMultiTexCoord2f\n");
}

EXTERN PFNGLACTIVETEXTUREARBPROC __glewActiveTextureARB;
void _glewActiveTextureARB(GLenum texture) {
   //printf( "__glewActiveTextureARB (glActiveTextureARB calls this function for some reason...)\n");
}

EXTERN PFNGLCOMPRESSEDTEXIMAGE2DPROC __glewCompressedTexImage2D;
void _glewCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) {
   //printf("__glewCompressedTexImage2D\n");
}

EXTERN  PFNGLMULTITEXCOORD2FARBPROC __glewMultiTexCoord2fARB;
void _glewMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t) {
   //printf("__glewMultiTexCoord2fARB\n");
}

GLenum glewInit(){
   printf( "glewInit()\n"  );

   // glew does lots of weird function pointer stuff, so we have to too....
   __glewCompressedTexImage2DARB = &_glCompressedTexImage2DARB;
   __glewActiveTextureARB = &_glewActiveTextureARB;
   //__glActiveTextureARB = &_glActiveTextureARB;
   __glewBindProgramARB = &_glewBindProgramARB;
   __glewClientActiveTextureARB = &_glewClientActiveTextureARB;
   __glewClientActiveTexture = &_glewClientActiveTexture;
   //__glBindBuffer = &_glBindBuffer;
   //__glBufferData = &_glBufferData;
   //__glMapBuffer = &_glMapBuffer;
   //__glUnmapBuffer = &_glUnmapBuffer;

   __glewXWaitVideoSyncSGI = &_glewXWaitVideoSyncSGI;
   __glewBindFramebufferEXT = &_glewBindFramebufferEXT;
   __glewFramebufferTexture2DEXT = &_glewFramebufferTexture2DEXT;
   __glewXGetVideoSyncSGI = &_glewXGetVideoSyncSGI;
   __glewMultiTexCoord1f = &_glewMultiTexCoord1f;
   __glewMultiTexCoord2f = &_glewMultiTexCoord2f;
   __glewCompressedTexImage2D = &_glewCompressedTexImage2D;
   __glewMultiTexCoord2fARB = &_glewMultiTexCoord2fARB;

__GLEW_ARB_multitexture = GL_TRUE;
__GLEW_ARB_texture_env_combine = GL_TRUE;
__GLEW_ARB_texture_compression = GL_TRUE;

__GLXEW_SGI_video_sync = GL_FALSE;
__GLEW_EXT_texture_edge_clamp = GL_FALSE;

__GLEW_ARB_texture_env_dot3 = GL_FALSE;

   return 0;
}


