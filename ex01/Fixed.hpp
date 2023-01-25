#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
private:
    int content;
    const static int nbr;
public:
    Fixed();
    Fixed(const Fixed &_content); 
	Fixed(const int fix);
	Fixed(const float fix);
    ~Fixed();
	Fixed &operator=(const Fixed &fixed_var);
    void setRawBits(int const raw);
    int getRawBits() const;
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &output, Fixed const &FixedP);

#endif
