/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:38:17 by tiacovel          #+#    #+#             */
/*   Updated: 2024/04/27 15:55:26 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include "include/Contact.hpp"

int	main(int argc, char ** argv)
{
	Contact cont(1, "Tiz", "Iaco", "tiziaco", "377022", "idk");
	cont.print_contact();
	return (0);
}