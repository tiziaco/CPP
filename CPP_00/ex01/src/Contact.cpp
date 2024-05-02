/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:23 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/29 18:32:27 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/phone_book.h"

/* Contact class Constructors */
Contact::Contact() {
}

Contact::Contact(int id, const std::string& name, const std::string& last_name,
				 const std::string& nickname, const std::string& phone_number,
				 const std::string& dark_secret) : id(id) {
	this->name = name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->dark_secret = dark_secret;
}

/* Private Class methods */
std::string Contact::input_contact_details(std::string input_prompt) {
	std::string input_str;
	bool is_valid = false;

	while (!is_valid) {
		std::cout << input_prompt << std::flush;
		getline(std::cin, input_str);
		if (std::cin.good() && !input_str.empty())
			is_valid = true;
		else {
			std::cin.clear();
			std::cout << "Invalid input, please try again!" << std::endl;
		}
	}
	return (input_str);
}

std::string Contact::format_attr(const std::string& str) {
		if (str.length() > 10)
			return str.substr(0, 9) + ".";
		else
			return str;
}

/* Public Class methods */
void Contact::new_contact(int index) {
	std::cin.ignore();
	this->name = input_contact_details("Enter first name: ");
	this->last_name = input_contact_details("Enter last name: ");
	this->nickname = input_contact_details("Enter nickname: ");
	this->phone_number = input_contact_details("Enter phone number: ");
	this->dark_secret = input_contact_details("Enter darkest secret: ");
	this->id = index;
	std::cout << std::endl;
}

void Contact::print_contact_details() {
	if (this->name.empty() || this->last_name.empty() || this->nickname.empty()) {
		std::cout << "Index not found" << std::endl;
		return ;
	}
	std::cout << "ID: " << id << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
}

void Contact::print_formatted_raw_table() {
	if (this->name.empty() || this->last_name.empty() || this->nickname.empty())
		return ;
	// Print index
	std::cout << std::right << std::setw(10) << this->id << std::flush;
	// Print first name
	std::cout << " | " << std::right << std::setw(10) << this->format_attr(this->name) << std::flush;
	// Print last name
	std::cout << " | " << std::right << std::setw(10) << this->format_attr(this->last_name) << std::flush;
	// Print nickname
	std::cout << " | " << std::right << std::setw(10) << this->format_attr(this->nickname) << std::flush;

	std::cout << std::endl;
}
