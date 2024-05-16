/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:26:10 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/16 20:34:47 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a(10);
	Fixed b(20.5f);

	Fixed add = a + b;
	Fixed sub = a - b;
	Fixed mul = a * b;
	Fixed div = a / b;
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	
	// Test arithmetic operations
	std::cout << "a + b = " << add << std::endl;
	std::cout << "a - b = " << sub << std::endl;
	std::cout << "a * b = " << mul << std::endl;
	std::cout << "a / b = " << div << std::endl;

	// Test comparsion operators
	std::cout << "a > b = " << ((a > b) ? "True" : "False") << std::endl;
	std::cout << "a < b = " << ((a < b) ? "True" : "False") << std::endl;

	// Test prefix increment operator
    std::cout << "Prefix increment operator (++a): " << (++a).toFloat() << std::endl;

	// Test postfix increment operator
    Fixed d = a++;  // Value of 'b' will be 4.5 (post-increment)
    std::cout << "Postfix increment operator (a++): " << d.toFloat() << std::endl;  // Expected: 4.5
    std::cout << "Value of 'a' after postfix increment: " << a.toFloat() << std::endl;  // Expected: 5.5
	
	return 0;
}