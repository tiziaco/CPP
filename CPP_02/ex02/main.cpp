/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:10 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/03 10:53:07 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void testIncrementDecrement() {
	Fixed a(3.5f);  // Initial value: 3.5

	// Test prefix increment
	std::cout << "a (initial): " << a.toFloat() << std::endl;
	std::cout << "++a: " << (++a).toFloat() << std::endl;  // Expected: 4.5

	// Test postfix increment
	Fixed b = a++;
	std::cout << "a++: " << b.toFloat() << std::endl;  // Expected: 4.5
	std::cout << "a (after a++): " << a.toFloat() << std::endl;  // Expected: 5.5

	// Test prefix decrement
	std::cout << "--a: " << (--a).toFloat() << std::endl;  // Expected: 4.5

	// Test postfix decrement
	Fixed c = a--;
	std::cout << "a--: " << c.toFloat() << std::endl;  // Expected: 4.5
	std::cout << "a (after a--): " << a.toFloat() << std::endl;  // Expected: 3.5
}

void testMinMax() {
	Fixed x(1.1f);  // Initial value: 1.1
	Fixed y(2.2f);  // Initial value: 2.2
	const Fixed cx(3.3f);  // Initial value: 3.3
	const Fixed cy(4.4f);  // Initial value: 4.4

	// Print the values being compared
	std::cout << "Values:" << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "cx = " << cx << std::endl;
	std::cout << "cy = " << cy << std::endl;

	// Test non-const min
	Fixed& minRef = Fixed::min(x, y);
	std::cout << "min(x, y): " << minRef.toFloat() << std::endl;  // Expected: 1.1

	// Test const min
	const Fixed& constMinRef = Fixed::min(cx, cy);
	std::cout << "min(cx, cy): " << constMinRef.toFloat() << std::endl;  // Expected: 3.3

	// Test non-const max
	Fixed& maxRef = Fixed::max(x, y);
	std::cout << "max(x, y): " << maxRef.toFloat() << std::endl;  // Expected: 2.2

	// Test const max
	const Fixed& constMaxRef = Fixed::max(cx, cy);
	std::cout << "max(cx, cy): " << constMaxRef.toFloat() << std::endl;  // Expected: 4.4
}

void testArithmeticOps() {
	Fixed a(10);
	Fixed b(20.5f);

	Fixed add = a + b;
	Fixed sub = a - b;
	Fixed mul = a * b;
	Fixed div = a / b;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	
	// Test arithmetic operations
	std::cout << "a + b = " << add << std::endl;
	std::cout << "a - b = " << sub << std::endl;
	std::cout << "a * b = " << mul << std::endl;
	std::cout << "a / b = " << div << std::endl;
}

void testComparisonOperators() {
	Fixed a(10);
	Fixed b(20.5f);
	Fixed c(10);
	Fixed d(20.5f);

	// Print the values being compared
	std::cout << "Values:" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	// Test comparison operators
	std::cout << "\nComparing a and b:" << std::endl;
	std::cout << "a > b = " << ((a > b) ? "True" : "False") << std::endl;
	std::cout << "a < b = " << ((a < b) ? "True" : "False") << std::endl;
	std::cout << "a >= b = " << ((a >= b) ? "True" : "False") << std::endl;
	std::cout << "a <= b = " << ((a <= b) ? "True" : "False") << std::endl;
	std::cout << "a == b = " << ((a == b) ? "True" : "False") << std::endl;
	std::cout << "a != b = " << ((a != b) ? "True" : "False") << std::endl;

	std::cout << "\nComparing b and d:" << std::endl;
	std::cout << "b > d = " << ((b > d) ? "True" : "False") << std::endl;
	std::cout << "b < d = " << ((b < d) ? "True" : "False") << std::endl;
	std::cout << "b >= d = " << ((b >= d) ? "True" : "False") << std::endl;
	std::cout << "b <= d = " << ((b <= d) ? "True" : "False") << std::endl;
	std::cout << "b == d = " << ((b == d) ? "True" : "False") << std::endl;
	std::cout << "b != d = " << ((b != d) ? "True" : "False") << std::endl;

	std::cout << "\nComparing a and c:" << std::endl;
	std::cout << "a > c = " << ((a > c) ? "True" : "False") << std::endl;
	std::cout << "a < c = " << ((a < c) ? "True" : "False") << std::endl;
	std::cout << "a >= c = " << ((a >= c) ? "True" : "False") << std::endl;
	std::cout << "a <= c = " << ((a <= c) ? "True" : "False") << std::endl;
	std::cout << "a == c = " << ((a == c) ? "True" : "False") << std::endl;
	std::cout << "a != c = " << ((a != c) ? "True" : "False") << std::endl;
}

void testFromSubject() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

int main() {
	std::cout << "**** Testing arithmetic operators ****" << std::endl;
	testArithmeticOps();
	std::cout << std::endl;

	std::cout << "**** Testing comparison operators ****" << std::endl;
	testComparisonOperators();
	std::cout << std::endl;

	std::cout << "**** Testing increment and decrement operators ****" << std::endl;
	testIncrementDecrement();
	std::cout << std::endl;

	std::cout << "**** Testing min and max functions ****" << std::endl;
	testMinMax();
	std::cout << std::endl;

	std::cout << "**** Tests from the subject ****" << std::endl;
	testFromSubject();

	return 0;
}