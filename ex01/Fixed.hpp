/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:51:29 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/27 23:02:33 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
private:
    int fixed_point;
    const static int i_shifting = 8;
public:
    Fixed();
    Fixed(const Fixed &obg); 
	Fixed(const int i);
	Fixed(const float i);
    ~Fixed();
	Fixed &operator=(const Fixed &obg);
    int getRawBits() const;
    void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &output, Fixed const &FixedP);

#endif
