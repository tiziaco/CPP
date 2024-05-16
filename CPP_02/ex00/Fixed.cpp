/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:13 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/16 15:44:46 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixed) {
	this->fixed = fixed.fixed;
	std::cout << "Copy constructor called" << std::endl;
}

void Fixed::operator=(const Fixed &fixed) {
	this->fixed = fixed.fixed;
	std::cout << "Copy assignment operator called" << std::endl;
}

int Fixed::getRawBits( void ) {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

void Fixed::setRawBits( int const raw ) {
	this->fixed = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
