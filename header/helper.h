#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
//
// Created by iamca on 11/11/2022.
//

#include <GL/gl.h>
#include <valarray>

#ifndef SNAKE3_HELPER_H
#define SNAKE3_HELPER_H

__attribute__((unused)) void perspectiveGL( GLdouble fovY, GLdouble aspect, GLdouble zNear, GLdouble zFar )
{
    const GLdouble pi = 3.1415926535897932384626433832795;
    GLdouble fW, fH;

    //fH = tan( (fovY / 2) / 180 * pi ) * zNear;
    fH = tan( fovY / 360 * pi ) * zNear;
    fW = fH * aspect;

    glFrustum( -fW, fW, -fH, fH, zNear, zFar );
}

#endif //SNAKE3_HELPER_H

#pragma clang diagnostic pop