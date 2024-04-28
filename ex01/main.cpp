/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:38:17 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/28 12:29:34 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "include/Contact.hpp"

int	main(int argc, char ** argv)
{
	Contact cont(1, "Tiz", "Iaco", "superTiziaco", "377022", "idk");
	cont.print_formatted_raw_table();
	cont.print_contact_details();
	return (0);
}
