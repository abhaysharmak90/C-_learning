#include "box.h"

// Constructors

Box::Box(double length, double breadth, double height): m_length{ length }, m_breadth{ breadth }, m_height{ height }
{
}

Box::Box(const Box& temp_obj1)
{
    m_length = temp_obj1.get_length();
    m_breadth = temp_obj1.get_breadth();
    m_height = temp_obj1.get_height();
}

// getter-functions

double Box::get_length() const
{
    return m_length;
}

double Box::get_breadth() const
{
    return m_breadth;
}

double Box::get_height() const
{
    return m_height;
}

// functions

void Box::showbox_dimensions()
{
    std::cout << m_length << " " << m_breadth << " " << m_height << " \n";
}

double Box::volume() const
{
    return m_length * m_breadth * m_height;
}

// operator overload

Box Box::operator+(const Box& temp_obj1) const
{
    Box temp{ *this };
    temp += temp_obj1;
    return temp;
}

Box Box::operator*(const double temp_num) const
{
    Box temp{ *this };
    temp *= temp_num;
    return temp;
}

Box Box::operator/(const double temp_num) const
{
    Box temp{ *this };
    temp /= temp_num;
    return temp;
}

Box& Box::operator+=(const Box& temp_obj)
{
    m_length += temp_obj.get_length();
    m_breadth += temp_obj.get_breadth();
    m_height += temp_obj.get_height();

    return *this;
}

Box& Box::operator*=(const double temp_num)
{
    m_length *= temp_num;
    m_breadth *= temp_num;
    m_height *= temp_num;

    return *this;
}

Box& Box::operator/=(const double temp_num)
{
    m_length /= temp_num;
    m_breadth /= temp_num;
    m_height /= temp_num;

    return *this;
}

Box::operator bool() const
{
    return (volume() != 0);
}

/*
bool Box::operator!() const
{
    return (volume() == 0);
}
*/

Box operator*(const double temp_num, const Box& temp_obj2)
{
    return Box(temp_num * temp_obj2.get_length(), temp_num * temp_obj2.get_breadth(), temp_num * temp_obj2.get_height());
}


