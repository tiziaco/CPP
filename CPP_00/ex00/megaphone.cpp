/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:09:07 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/24 11:11:53 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>

void	capitalize_str(char str[])
{
	for (size_t i = 0; i < strlen(str); i++) {
		std::cout << char(toupper(str[i]));
	}
}

void	print_str(char str[])
{
	for (size_t i = 0; i < strlen(str); i++) {
		std::cout << char(str[i]);
	}
	std::cout << "\n";
}

int	main(int argc, char ** argv)
{
	char def_reply[] = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	if (argc == 1) {
		print_str(def_reply);
	} else {
		for (int i = 1; i < argc; i++)
		{
			capitalize_str(argv[i]);
		}
		std::cout << "\n";
	}
	return (0);
}
