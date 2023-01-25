/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:17:35 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/25 16:21:00 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
