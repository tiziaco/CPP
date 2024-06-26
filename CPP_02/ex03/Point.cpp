/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:00:32 by tiacovel          #+#    #+#             */
/*   Updated: 2024/06/25 15:35:04 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors and destructors

Point::Point() : _x(0), _y(0) {
}

Point::Point(float const x, float const y): _x(x), _y(y) {
}

Point::~Point(void) {
}

// Copy constructor

Point::Point(const Point &point) {
	*this = point;
}

// Copy assignment operator

Point& Point::operator=(const Point &point) {
	if (this != &point)
	{
		(Fixed)this->_x = point.getX();
		(Fixed)this->_y = point.getY();
	}
	return *this;
}

// Getters

Fixed Point::getX() const { 
	return this->_x; 
}

Fixed Point::getY() const { 
	return this->_y; 
}