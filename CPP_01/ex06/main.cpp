/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:21:22 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/06 12:28:51 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char **argv ) {

	if (argc != 2) {
		return (std::cout << "Usage: ./harlFilter \"level\"\n", EXIT_FAILURE);
	}
	std::string input = argv[1];
	Harl		harl;

	harl.complain(input);

	return EXIT_SUCCESS;
}
