/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:30 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/29 18:43:17 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"
#include "../include/phone_book.h"
#include <limits>

PhoneBook::PhoneBook() : contacts() {
	this->contacts_nbr = 0;
}

PhoneBook::~PhoneBook() {
}

int PhoneBook::input_contact_index() {
	int contact_index = -1;
	bool is_valid = false;

	while (!is_valid) {
		std::cout << "Enter a contact ID: " << std::flush;
		std::cin >> contact_index;
		if (std::cin.good() && (contact_index >= 0 && contact_index < 8))
			is_valid = true;
		else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index, please try again!" << std::endl;
		}
	}
	return (contact_index);
}

void PhoneBook::add_contact() {
	if (this->contacts_nbr < 8) {
		this->contacts[this->contacts_nbr % 8].new_contact(this->contacts_nbr);
		this->contacts_nbr++;
	} else 
		this->contacts[7].new_contact(7);
}

void PhoneBook::search_contact() {
	int	index;

	print_contacts();
	index = input_contact_index();
	this->contacts[index % 8].print_contact_details();
}

void PhoneBook::print_contacts() {
	std::cout << "------------- PHONEBOOK CONTACTS -------------" << std::endl;
	// Print header
	std::cout << std::right << std::setw(10) << "Index" << std::flush;
	std::cout << " | " << std::right << std::setw(10) << "First Name" << std::flush;
	std::cout << " | " << std::right << std::setw(10) << "Last Name" << std::flush;
	std::cout << " | " << std::right << std::setw(10) << "Nickname" << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->contacts[i].print_formatted_raw_table();
	std::cout << std::endl;
}