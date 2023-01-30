/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:17:35 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/29 17:34:11 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixed_point;
    static  const int i_shifting = 8;
public:
    Fixed();
    Fixed(const Fixed &obg);
    ~Fixed();
    Fixed &operator=(const Fixed &obg);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
