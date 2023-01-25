/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:17:11 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/25 16:20:48 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::nbr = 8;

Fixed::Fixed()
{
    content = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &_content)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = _content;
	// this->content = _content.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed    &Fixed::operator=(const Fixed &fixed_var)
{
	std::cout << "Copy assignment operator called" << std::endl;
	content = fixed_var.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	content = raw;
}
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return content;
}
