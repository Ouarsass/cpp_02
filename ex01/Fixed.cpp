/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:53:27 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/27 22:58:06 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obg)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = obg;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
    this->fixed_point = i << i_shifting;
}

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = (int)roundf(i * (1  << i_shifting));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obg)
{
	std::cout << "Copy assignment operator called" << std::endl;
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

int Fixed::toInt( void ) const
{
	return ( fixed_point >> i_shifting);
}

std::ostream &operator<<(std::ostream &output, const Fixed &FixedP)
{
	output << FixedP.toFloat();
	return output;
}
