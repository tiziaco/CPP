/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:02:13 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/17 13:18:28 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "bsp.hpp"
#include "Fixed.hpp"

int main() {
    // Define your points
    Point a(1.0f, 1.0f);
    Point b(4.0f, 1.0f);
    Point c(2.0f, 5.0f);
    Point point(2.0f, 3.0f); // The point to check

    // Call the bsp function and print the result
    if (bsp(a, b, c, point)) {
        std::cout << "The point is inside the triangle." << std::endl;
    } else {
        std::cout << "The point is outside the triangle." << std::endl;
    }

    return 0;
}
