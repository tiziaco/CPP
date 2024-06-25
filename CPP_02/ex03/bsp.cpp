/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:45:07 by tiacovel          #+#    #+#             */
/*   Updated: 2024/06/25 16:09:29 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed ft_abs(Fixed x) {
	if (x < 0)
		return x * -1;
	else
		return x;
}

static Fixed areaTriangle(Point const p1, Point const p2, Point const p3) {
	return ((p1.getX() * (p2.getY() - p3.getY()) +
				p2.getX() * (p3.getY() - p1.getY()) +
				p3.getX() * (p1.getY() - p2.getY())) /
			   2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	Fixed A = ft_abs(areaTriangle(a, b, c));
	Fixed A1 = ft_abs(areaTriangle(point, b, c));
	Fixed A2 = ft_abs(areaTriangle(a, point, c));
	Fixed A3 = ft_abs(areaTriangle(a, b, point));

	/* Check if sum of A1, A2 and A3 is same as A */
	std::cout << "test area triangle: " << areaTriangle(a, b, c) << std::endl;
	std::cout << "A: " << A << std::endl;
	std::cout << "A1+A2+A3: " << A1 + A2 + A3 << std::endl;
	std::cout << "res: " << (A == A1 + A2 + A3) << std::endl;
	return (A == A1 + A2 + A3);
}