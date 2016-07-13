/*
* NEWorld: A free game with similar rules to Minecraft.
* Copyright (C) 2016 NEWorld Team
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "opengl.h"
#include <SDL2/SDL.h>

PFNGLGENBUFFERSARBPROC glGenBuffersARB;
PFNGLBINDBUFFERARBPROC glBindBufferARB;
PFNGLBUFFERDATAARBPROC glBufferDataARB;
PFNGLDELETEBUFFERSARBPROC glDeleteBuffersARB;

void* getGLProcAddress(const char* name)
{
    return SDL_GL_GetProcAddress(name);
}

void glInit()
{
#define EXT(name, funcname) name = static_cast<funcname>(getGLProcAddress(#name))
    EXT(glGenBuffersARB, PFNGLGENBUFFERSARBPROC);
    EXT(glBindBufferARB, PFNGLBINDBUFFERARBPROC);
    EXT(glBufferDataARB, PFNGLBUFFERDATAARBPROC);
    EXT(glDeleteBuffersARB, PFNGLDELETEBUFFERSARBPROC);
#undef EXT
}
