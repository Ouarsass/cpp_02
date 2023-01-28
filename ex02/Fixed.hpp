/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:51:29 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/28 20:36:27 by mouarsas         ###   ########.fr       */
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
    bool  operator<(const Fixed &obj) const ;
    bool  operator>(const Fixed &obj) const ;
    bool  operator>=(const Fixed &obj);
    bool  operator<=(const Fixed &obj);
    bool  operator==(const Fixed &obj);
    bool  operator!=(const Fixed &obj);
    Fixed operator*(const Fixed &obg);
    Fixed operator+(const Fixed &obg);
    Fixed operator-(const Fixed &obg);
    Fixed operator/(const Fixed &obg);
    Fixed operator++(int);
    Fixed &operator++();
    Fixed operator--(int);
    Fixed& operator--();
    static Fixed min(Fixed &var, Fixed &var1);
    static Fixed min(const Fixed& var, const Fixed &var1);
    static Fixed max(Fixed &var, Fixed &var1);
    static Fixed max(const Fixed& var, const Fixed &var1);
};

std::ostream &operator<<(std::ostream &output, Fixed const &FixedP);

#endif
