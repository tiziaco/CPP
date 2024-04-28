/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:23 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/28 12:27:42 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	int id;
	std::string name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string dark_secret;

	public:
		Contact(int, const std::string&, const std::string&, const std::string&,
				const std::string&, const std::string&);
		void print_formatted_raw_table();
		void print_contact_details();
	private:
		void print_truncated(const std::string& str, size_t max_length);
};

#endif