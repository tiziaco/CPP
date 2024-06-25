/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:52:04 by tiacovel          #+#    #+#             */
/*   Updated: 2024/06/25 15:33:09 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point(void);
	Point(float const x, float const y);
	~Point();
	Point(const Point &point);
	Point& operator=(const Point &point);
	Fixed getX() const;
	Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
