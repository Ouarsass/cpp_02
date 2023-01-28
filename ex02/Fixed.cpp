/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:53:27 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/28 20:38:14 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &obg)
{
    *this = obg;
}

Fixed::Fixed(const int i)
{
    this->fixed_point = i << i_shifting;
}

Fixed::Fixed(const float i)
{
	this->fixed_point = (int)roundf(i * (1  << i_shifting));
}
Fixed::~Fixed(){}
Fixed &Fixed::operator=(const Fixed &obg)
{
	fixed_point = obg.fixed_point;
	return *this;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

int Fixed::getRawBits() const
{
	return fixed_point;
}

float Fixed::toFloat( void ) const
{
	return ((float)(fixed_point) / (1 << i_shifting));
}
bool Fixed::operator<(const Fixed &obj) const
{
	return (fixed_point < obj.fixed_point);
}
bool Fixed::operator>(const Fixed &obj) const
{
	return (fixed_point > obj.fixed_point);
}
bool Fixed::operator>=(const Fixed &obj)
{
	return (fixed_point >= obj.fixed_point);
}
bool Fixed::operator<=(const Fixed &obj)
{
	return (fixed_point <= obj.fixed_point);
}
bool Fixed::operator==(const Fixed &obj)
{
	return (fixed_point == obj.fixed_point);
}
bool Fixed::operator!=(const Fixed &obj)
{
	return (fixed_point != obj.fixed_point);
}
Fixed Fixed::operator*(const Fixed &obg)
{
    return (Fixed(toFloat() * obg.toFloat()));
}
Fixed Fixed::operator+(const Fixed &obg)
{
    return (Fixed(toFloat() + obg.toFloat()));
}
Fixed Fixed::operator-(const Fixed &obg)
{
    return (Fixed(toFloat() - obg.toFloat()));
}
Fixed Fixed::operator/(const Fixed &obg)
{
    return (Fixed(toFloat() / obg.toFloat()));
}
Fixed Fixed::operator++(int)
{
	Fixed var = *this;
	fixed_point++;
	return(var);
}
Fixed &Fixed::operator++()
{
	fixed_point++;
	return(*this);
}
Fixed Fixed::operator--(int)
{
	Fixed var = *this;
	fixed_point--;
	return(var);
}
Fixed &Fixed::operator--()
{
	fixed_point--;
	return(*this);
}
Fixed Fixed::min(Fixed &var,Fixed &var1)
{
	if (var < var1)
		return (var);
	return (var1);
}
Fixed Fixed::min(const Fixed &var, const Fixed &var1)
{
	if (var < var1)
		return (var);
	return (var1);
}
Fixed Fixed::max(Fixed &var,Fixed &var1)
{
	if (var > var1)
		return (var);
	return (var1);
}
Fixed Fixed::max(const Fixed &var, const Fixed &var1)
{
	if (var > var1)
		return (var);
	return (var1);
}
int Fixed::toInt( void ) const
{
	return ( fixed_point >> i_shifting);
}

std::ostream &operator<<(std::ostream &output, const Fixed &FixedP)
{
	output << FixedP.toFloat();
	return output;
}
