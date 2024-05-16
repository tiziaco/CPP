/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:13 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/16 20:47:47 by tiacovel         ###   ########.fr       */
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
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	return (this->value);
}

void Fixed::setRawBits( int const raw ) {
	this->value = raw;
}

int Fixed::toInt( void ) const {
	return static_cast<int>(value) / (1 << this->fract_point);
}

float Fixed::toFloat( void ) const {
	return static_cast<float>(value) / (1 << this->fract_point);
}

/* Stream operators */
std::ostream& operator<<(std::ostream& os, const Fixed& nbr) {
	os << nbr.toFloat();
	return os;
}

/* Assignment operator */
Fixed& Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed)
        this->value = fixed.getRawBits();
	return (*this);
}

/* Arithmetic operators */
Fixed Fixed::operator+(const Fixed &fixed) {
	Fixed result;
	result.setRawBits(this->getRawBits() + fixed.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed &fixed) {
	Fixed result;
	result.setRawBits(this->getRawBits() - fixed.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed &fixed) {
	Fixed result(this->toFloat() * fixed.toFloat());
	return result;
}

Fixed Fixed::operator/(const Fixed &fixed) {
	Fixed result(this->toFloat() / fixed.toFloat());
	return result;
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
	++value;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed new_fix = *this;
	new_fix.value = this->value++;
	return new_fix;
}

Fixed& Fixed::operator--() {
	--value;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed new_fix = *this;
	new_fix.value = this->value--;
	return new_fix;
}

// Max and min functions //

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}
