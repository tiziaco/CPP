/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:38:17 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/29 17:44:01 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "include/Contact.hpp"
#include "include/PhoneBook.hpp"

void print_program_info()
{
	std::cout << std::endl;
	std::cout << "📖 Welcome to PhoneBook 📖" << std::endl;
	std::cout << std::endl;
	std::cout << "--------------USAGE---------------" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	PhoneBook	book;
	std::string	command = "";
	
	print_program_info();
	while (command.compare("EXIT")) {
		if (command.compare("ADD") == 0)
			book.add_contact();
		else if (command.compare("SEARCH") == 0)
			book.search_contact();
		std::cout << "> " << std::flush;
		std::cin >> command;
	}
	return (0);
}
