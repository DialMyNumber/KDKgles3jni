/* -*- tab-width: 4; -*- */
/* vi: set sw=2 ts=4: */

/* $Revision: 20138 $ on $Date:: 2013-01-17 17:12:23 +0900 #$ */

/*
Copyright (c) 2010 The Khronos Group Inc.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and/or associated documentation files (the
"Materials"), to deal in the Materials without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Materials, and to
permit persons to whom the Materials are furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
unaltered in all copies or substantial portions of the Materials.
Any additions, deletions, or changes to the original source files
must be clearly indicated in accompanying documentation.

If only executable code is distributed, then the accompanying
documentation must state that "this software is based in part on the
work of the Khronos Group."

THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*/

/*
 * Author: Mark Callow based on code from Georg Kolling
 */

#ifndef _GLES3_FUNCPTRS_H_
#define _GLES3_FUNCPTRS_H_

#ifdef __cplusplus
extern "C" {
#endif

/* remove these where already defined as typedefs (GCC 4 complains of duplicate definitions) */
typedef void (GL_APIENTRY* PFNGLTEXIMAGE1DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void (GL_APIENTRY* PFNGLCOMPRESSEDTEXIMAGE1DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);

/* remove these where already defined as functions */
extern PFNGLTEXIMAGE1DPROC glTexImage1D;
extern PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;

/* and these */
#define DECLARE_GL_FUNCPTRS \
    PFNGLTEXIMAGE1DPROC glTexImage1D = 0; \
    PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D = 0;

/* remove this if you use GLEW and already have this */
extern int GLEW_OES_compressed_ETC1_RGB8_texture;

/* and make this macro empty */
#define DECLARE_GL_EXTGLOBALS \
    int GLEW_OES_compressed_ETC1_RGB8_texture = 0;

#ifdef __cplusplus
}
#endif

#endif /* GLES3_FUNCPTRS */
