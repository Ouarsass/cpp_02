#include "Fixed.hpp"

const int   Fixed::nbr = 8;

Fixed::Fixed()
{
    this->content = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &_content)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = _content;
}

Fixed::Fixed(const int fix)
{
	std::cout << "Int constructor called" << std::endl;
    this->content = fix << nbr;
}

Fixed::Fixed(const float fix)
{
	std::cout << "Float constructor called" << std::endl;
	this->content = (int)roundf(fix * (1  << nbr));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed_var)
{
	std::cout << "Copy assignment operator called" << std::endl;
	content = fixed_var.content;
	return *this;
}

void Fixed::setRawBits(int const raw)
{
    this->content = raw;
}

int Fixed::getRawBits() const
{
	return content;
}

float Fixed::toFloat( void ) const
{
	return ((float)(content) / (1 << nbr));
}

int Fixed::toInt( void ) const
{
	return ( content >> nbr);
}

std::ostream &operator<<(std::ostream &output, const Fixed &FixedP)
{
	output << FixedP.toFloat();
	return output;
}
