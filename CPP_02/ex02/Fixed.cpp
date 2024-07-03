/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:13 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/03 10:47:00 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors and deconstructors */
Fixed::Fixed(void): _value(0) {
}

Fixed::Fixed(const int nbr): _value(nbr << _fract_point) {
}

Fixed::Fixed(float nbr): _value((roundf( nbr * (1 << _fract_point )))) {
}

Fixed::~Fixed(void) {
}

// Copy constructor
Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

/* Getters and setters */
int Fixed::getRawBits(void) const {
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int Fixed::toInt(void) const {
	return this->_value >> _fract_point;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(this->getRawBits()) / (1 << this->_fract_point);
}

/* Stream operators */
std::ostream& operator<<(std::ostream& os, const Fixed& nbr) {
	os << nbr.toFloat();
	return os;
}

/* Assignment operator */
Fixed& Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return (*this);
}

/* Arithmetic operators */
Fixed Fixed::operator+(const Fixed &fixed) const {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return Fixed(this->toFloat() / fixed.toFloat());
}

// Comparison operators //

bool Fixed::operator>(const Fixed &fixed) const {
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const {
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const {
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return this->getRawBits() <= fixed.getRawBits();
}

// Increment / decrement operators //

Fixed& Fixed::operator++() {
	++_value;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed new_fix = *this;
	new_fix._value = this->_value++;
	return new_fix;
}

Fixed& Fixed::operator--() {
	--_value;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed new_fix = *this;
	new_fix._value = this->_value--;
	return new_fix;
}

// Max and min functions //

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
