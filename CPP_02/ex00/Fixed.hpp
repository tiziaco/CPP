/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:15 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/16 15:43:14 by tiacovel         ###   ########.fr       */
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
	int	fixed;
	static const int point;
public:
	Fixed();
	Fixed(Fixed &fixed);
	~Fixed();
	void operator=(const Fixed &fixed);
	int getRawBits( void );
	void setRawBits( int const raw );
};

#endif
