/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:13 by tiacovel          #+#    #+#             */
/*   Updated: 2024/06/25 15:49:27 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->value = 0;
}

Fixed::Fixed(const int nbr) {
	this->value = nbr << this->fract_point;
}

Fixed::Fixed(float nbr) {
	this->value = static_cast<int>(nbr * (1 << this->fract_point) + 0.5f);
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits( void ) const {
	return (this->value);
}

void Fixed::setRawBits( int const raw ) {
	this->value = raw;
}

int Fixed::toInt( void ) const {
	return this->value >> fract_point;
}

float Fixed::toFloat( void ) const {
	return static_cast<float>(this->getRawBits()) / (1 << this->fract_point);
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
Fixed Fixed::operator+(const Fixed &fixed) const {
	return Fixed( this->toFloat() + fixed.toFloat() );
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return Fixed( this->toFloat() - fixed.toFloat() );
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return Fixed( this->toFloat() * fixed.toFloat() );
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return Fixed( this->toFloat() / fixed.toFloat() );
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
