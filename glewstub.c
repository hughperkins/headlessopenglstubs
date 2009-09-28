#include "GL/glew.h"

const GLubyte*  glewGetString(GLenum name){
   return "GL_ARB_multitexture GL_ARB_texture_env_combine GL_ARB_texture_compression";
}

GLboolean __GLEW_ARB_vertex_program;
GLboolean __GLEW_ARB_texture_non_power_of_two;
GLboolean __GLEW_ARB_shadow;
GLboolean __GLEW_ARB_depth_texture;
GLboolean __GLEW_ARB_shadow_ambient;

// need these true, otherwise spring exits:
GLboolean __GLEW_ARB_multitexture = GL_TRUE;
GLboolean __GLEW_ARB_texture_env_combine = GL_TRUE;
GLboolean __GLEW_ARB_texture_compression = GL_TRUE;

//void __glewProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){
//}

void _glCompressedTexImage2DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data ) {
}

//PFNGLCOMPRESSEDTEXIMAGE2DARBPROC __glewCompressedTexImage2DARB;

GLenum glewInit(){
   __glewCompressedTexImage2DARB = &_glCompressedTexImage2DARB;

   return 0;
}


