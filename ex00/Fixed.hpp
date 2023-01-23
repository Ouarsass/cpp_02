#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int content;
    const static int nbr;
public:
    Fixed();
    Fixed(const Fixed &_content);
    ~Fixed();
	Fixed &operator=(const Fixed &fixed_var);
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif
