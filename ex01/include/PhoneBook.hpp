/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:30 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/26 13:26:56 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "phone_book.h"
#include "Contact.hpp"

class PhoneBook {
	Contact contacts[8];
public:
	PhoneBook();
	void 	print_contacts();
	int		search_contact(int);
	void	add(Contact);
};

#endif