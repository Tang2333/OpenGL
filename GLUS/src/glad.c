
// gladµÄÊµÏÖ
#define GLAD_GL_IMPLEMENTATION
#include "gl/glus.h"
//#include "glad/gl.h"
//#include "GLUS/glus_define.h"
//
//#include "GLUS/glus_log.h"

GLenum glCheckError_(const char* file, int line)
{
    char loginfo[200];

    GLenum errorCode;
    while ((errorCode = glGetError()) != GL_NO_ERROR)
    {
        switch (errorCode)
        {
        case GL_INVALID_ENUM:                  printf("LOG [%s](%d): INVALID_ENUM\n", file, line); break;
        case GL_INVALID_VALUE:                 printf("LOG [%s](%d): INVALID_VALUE\n", file, line); break;
        case GL_INVALID_OPERATION:             printf("LOG [%s](%d): INVALID_OPERATION\n", file, line); break;
        case GL_STACK_OVERFLOW:                printf("LOG [%s](%d): STACK_OVERFLOW\n", file, line); break;
        case GL_STACK_UNDERFLOW:               printf("LOG [%s](%d): STACK_UNDERFLOW\n", file, line); break;
        case GL_OUT_OF_MEMORY:                 printf("LOG [%s](%d): OUT_OF_MEMORY\n", file, line); break;
        case GL_INVALID_FRAMEBUFFER_OPERATION: printf("LOG [%s](%d): INVALID_FRAMEBUFFER_OPERATION\n", file, line); break;
        }
    }
    return errorCode;
}