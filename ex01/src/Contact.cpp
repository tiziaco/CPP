/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:23 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/28 12:27:35 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/phone_book.h"

/* Contact class Constructor */
Contact::Contact(int id, const std::string& name, const std::string& last_name,
                 const std::string& nickname, const std::string& phone_number,
                 const std::string& dark_secret) : id(id)
{
    this->name = name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->dark_secret = dark_secret;
}

void Contact::print_truncated(const std::string& str, size_t max_length)
{
        if (str.length() <= max_length)
            std::cout << str;
        else {
            for (size_t i = 0; i < max_length - 1; ++i)
                std::cout << str[i];
            std::cout << ".";
        }
}

void Contact::print_contact_details()
{
	std::cout << "ID: " << id << std::endl;
	std::cout << "Name: " << name << "\n";
	std::cout << "Last Name: " << last_name << "\n";
	std::cout << "Nickname: " << nickname << "\n";
	std::cout << "Phone Number: " << phone_number << "\n";
	std::cout << "Dark Secret: " << dark_secret << "\n";
}

void Contact::print_formatted_raw_table()
{
    // Print index
    std::cout << std::right << std::setw(10) << id;

    // Print first name
    std::cout << " | " << std::right << std::setw(10);
    if (strlen(name.c_str()) <= 10)
        std::cout << name;
    else
		print_truncated(name, 10);

    // Print last name
    std::cout << " | " << std::right << std::setw(10);
    if (strlen(last_name.c_str()) <= 10)
        std::cout << last_name;
    else
		print_truncated(last_name, 10);

    // Print nickname
    std::cout << " | " << std::right << std::setw(10);
    if (strlen(nickname.c_str()) <= 10)
        std::cout << nickname;
    else
		print_truncated(nickname, 10);
    std::cout << std::endl;
}
