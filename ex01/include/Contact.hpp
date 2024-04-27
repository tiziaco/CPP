/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:23 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/27 15:54:16 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
	int id;
	char *name, *last_name, *nickname, *phone_number, *dark_secret;
public:
	Contact(int, const char *, const char *, const char *, const char *, const char *);
	~Contact();
	void print_contact();
};

#endif