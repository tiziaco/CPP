/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:02:13 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/03 10:57:12 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main() {
	Point a(1.0f, 1.0f);
	Point b(4.0f, 1.0f);
	Point c(2.0f, 5.0f);
	Point point1(2.0f, 2.0f);
	Point point2(-10, -10);

	std::cout << "Triangle vertices:" << std::endl;
	std::cout << "	A: x= " << a.getX() << ", y= " << a.getY() << std::endl;
	std::cout << "	B: x= " << b.getX() << ", y= " << b.getY() << std::endl;
	std::cout << "	C: x= " << c.getX() << ", y= " << c.getY() << std::endl;

	std::cout << "Point 1:" << std::endl;
	std::cout << "	P: x= " << point1.getX() << ", y= " << point1.getY() << std::endl;

	if (bsp(a, b, c, point1))
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is outside the triangle." << std::endl;
	
	std::cout << "\nPoint 2:" << std::endl;
	std::cout << "	P: x= " << point2.getX() << ", y= " << point2.getY() << std::endl;

	if (bsp(a, b, c, point2))
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is outside the triangle." << std::endl;

	return 0;
}
