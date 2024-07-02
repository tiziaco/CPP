/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:15 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/02 12:45:46 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Fixed
{
private:
	int	_value;
	static const int _point;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed& operator=(const Fixed &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
