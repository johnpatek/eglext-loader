#ifndef EGLEXT_LOADER_H
#define EGLEXT_LOADER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <EGL/egl.h>
#define EGL_EGLEXT_PROTOTYPES 1
#include <EGL/eglext.h>

void eglext_loader_load();

#ifdef __cplusplus
}
#endif

#endif