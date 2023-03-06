#ifndef box
#define box
#include <iostream>

class Box
{
public:
    // constructors

    Box() = default;
    Box(double, double, double);
    Box(const Box&);

    // getter-functions

    double get_length() const;
    double get_breadth() const;
    double get_height() const;

    // functions

    void showbox_dimensions();
    double volume() const;

    // operator overloads

    Box operator+(const Box&) const;
    Box operator*(const double) const;
    Box operator/(const double) const;

    Box& operator+=(const Box&);
    Box& operator*=(const double);
    Box& operator/=(const double);

    auto operator<=>(const Box& temp_obj_c)const = default;

    bool operator==(const Box& temp_obj_e) const = default;

    explicit operator bool()const;
    //bool operator!()const;

private:
    double m_length, m_breadth, m_height;
};

Box operator*(const double, const Box&);




#endif