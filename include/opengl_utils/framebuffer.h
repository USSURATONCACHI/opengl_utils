#ifndef SRC_UI_FRAMEBUFFER_H_
#define SRC_UI_FRAMEBUFFER_H_

#include <epoxy/gl.h>

typedef struct Framebuffer {
    GLuint framebuffer;
    GLuint color_texture;
} Framebuffer;

#define NULL_FRAMEBUFFER ((Framebuffer) { 0, 0 })

typedef struct {
    
} GlutilsError;

typedef struct {

} FramebufferResult;
Framebuffer framebuffer_create(int width, int height);
void framebuffer_free(Framebuffer f);

void framebuffer_resize(Framebuffer* fb, int width, int height);

#endif  // SRC_UI_FRAMEBUFFER_H_