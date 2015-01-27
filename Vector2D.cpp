//
//  Vector2D.cpp
//
//  Copyright (c) 2015 Khaled Garbaya
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#include "Vector2D.h"

float Vector2D::length() { return sqrt(m_x * m_x + m_y * m_y); }

void Vector2D::normalize()
{
    float l = length();
    if ( l > 0) // we never want to attempt to divide by 0
    {
        (*this) *= 1 / l;
    }
}

/// + and += operators implementation
Vector2D Vector2D::operator+(const Vector2D& v2) const
{
    return Vector2D(m_x + v2.m_x, m_y + v2.m_y);
}
Vector2D& Vector2D::operator+=(const Vector2D& v2)
{
    m_x += v2.m_x;
    m_y += v2.m_y;
    return *this;
}

/// * and *= operator
Vector2D Vector2D::operator*(float scalar)
{
    return Vector2D(m_x * scalar, m_y * scalar);
}
Vector2D& Vector2D::operator*=(float scalar)
{
    m_x *= scalar;
    m_y *= scalar;
    return *this;
}

/// - and -= operator
Vector2D Vector2D::operator-(const Vector2D& v2) const
{
    return Vector2D(m_x - v2.m_x, m_y - v2.m_y);
}
Vector2D& Vector2D::operator-=(const Vector2D& v2)
{
    this->m_x -= v2.m_x;
    this->m_y -= v2.m_y;
    return *this;
}

/// / and /= operator
Vector2D Vector2D::operator/(float scalar)
{
    return Vector2D(m_x / scalar, m_y / scalar);
}
Vector2D& Vector2D::operator/=(float scalar)
{
    m_x /= scalar;
    m_y /= scalar;
    return *this;
}


