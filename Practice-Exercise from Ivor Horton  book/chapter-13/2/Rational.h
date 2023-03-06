#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <ostream>

class rational
{
public:
    //Constructor
    rational(int, int);

    //getter
    int get_up();
    int get_down();
    double get_rational();

    //setter
    void set_up();
    void set_down();

    //functions

    //comparisons operators
    auto operator<=>(const rational&)const;
    bool operator==(const rational&)const;


    //arithamatics operators
    rational operator+(const rational&)const;
    rational operator-(const rational&)const;
    rational operator*(const rational&)const;
    rational operator/(const rational&)const;

    //arithamatic assignment operators
    rational operator+=(const rational&);
    rational operator-=(const rational&);
    rational operator*=(const rational&);
    rational operator/=(const rational&);

    //increment operators

private:
    int M_up, M_down;
};


//stream operator
std::ostream& operator<<(std::ostream&, const rational&);

#endif