/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:13 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/16 18:48:52 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) {
	this->value = nbr << this->fract_point;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float nbr) {
	std::cout << "Float constructor called" << std::endl;
	this->value = static_cast<int>(nbr * (1 << this->fract_point) + 0.5f);
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed &value) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = value.value;
}

std::ostream& operator<<(std::ostream& os, const Fixed& nbr) {
	os << nbr.toFloat();
	return os;
}

int Fixed::getRawBits( void ) {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::toInt( void ) const {
	return static_cast<int>(value) / (1 << this->fract_point);
}

float Fixed::toFloat( void ) const {
	return static_cast<float>(value) / (1 << this->fract_point);
}
