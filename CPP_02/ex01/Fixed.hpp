/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:15 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/16 18:48:49 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	value;
	static const int fract_point = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int nbr);
	Fixed(const float nbr);
	~Fixed();
	void operator=(const Fixed &fixed);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void );
	void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream& os, const Fixed& nbr);

#endif
