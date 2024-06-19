/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:45:07 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/17 15:51:17 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float ft_abs(float x) {
	if (x < 0)
		return -x;
	else
		return x;
}

static float areaTriangle(const Point& p1, const Point& p2, const Point& p3) {
	return ((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
				p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
				p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) /
			   2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float A, A1, A2, A3;

	A = ft_abs(areaTriangle(a, b, c));
	A1 = ft_abs(areaTriangle(point, b, c));
	A2 = ft_abs(areaTriangle(a, point, c));
	A3 = ft_abs(areaTriangle(a, b, point));

	/* Check if sum of A1, A2 and A3 is same as A */
	return (A == A1 + A2 + A3);
}