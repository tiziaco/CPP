/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:30 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/29 16:54:27 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "phone_book.h"
#include "Contact.hpp"

class PhoneBook {
	int		contacts_nbr;
	Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	search_contact();
		void	add_contact();
		void	print_contacts();
	private:
		int		input_contact_index();
};

#endif