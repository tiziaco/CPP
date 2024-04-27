/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:23 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/27 14:46:58 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/phone_book.h"

/* Contact class Constructor */
Contact::Contact(int id, const char *name, const char *last_name, const char *nickname,
				 const char *phone_number, const char *dark_secret)
{
	this->id = id;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->last_name = new char[strlen(last_name) + 1];
	strcpy(this->last_name, last_name);
	this->nickname = new char[strlen(nickname) + 1];
	strcpy(this->nickname, nickname);
	this->phone_number = new char[strlen(phone_number) + 1];
	strcpy(this->phone_number, phone_number);
	this->dark_secret = new char[strlen(dark_secret) + 1];
	strcpy(this->dark_secret, dark_secret);
}

/* Contact class Deconstructor */
Contact::~Contact() {
    delete[] name;
    delete[] last_name;
    delete[] nickname;
    delete[] phone_number;
    delete[] dark_secret;
}

void Contact::print_contact()
{
	std::cout << id << "\n";
	std::cout << name << "\n";
	std::cout << last_name << "\n";
	std::cout << phone_number << "\n";
}