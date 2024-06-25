/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:02:13 by tiacovel          #+#    #+#             */
/*   Updated: 2024/06/25 15:54:13 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main() {
	// Define your points
	Point a(1.0f, 1.0f);
	Point b(4.0f, 1.0f);
	Point c(2.0f, 5.0f);
	Point point(-1.0f, 0.0f); // The point to check

	// Call the bsp function and print the result
	std::cout << "Triangle vertices:\n" << std::endl;
	std::cout << "	A: x= " << a.getX() << ", y= " << a.getY() << std::endl;
	std::cout << "	B: x= " << b.getX() << ", y= " << b.getY() << std::endl;
	std::cout << "	C: x= " << c.getX() << ", y= " << c.getY() << std::endl;

	std::cout << "Point:\n" << std::endl;
	std::cout << "	P: x= " << point.getX() << ", y= " << point.getY() << std::endl;
	//bsp(a, b, c, point);
	if (bsp(Point(1, 1), Point(4, 1), Point(2, 5), Point(-10, -10)))
		std::cout << "The point is inside the triangle." << std::endl;
	else
		std::cout << "The point is outside the triangle." << std::endl;

	return 0;
}
