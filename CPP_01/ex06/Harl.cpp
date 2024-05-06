/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:24:31 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/06 12:25:36 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void) {
	std::cout << "[DEBUG]" << std::endl;
}

void Harl::info(void) {
	std::cout << "[INFO]" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[WARNING]" << std::endl;
}

void Harl::error(void) {
	std::cout << "[ERROR]" << std::endl;
}

void    Harl::complain( std:: string level ) {
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++ ;
	switch (i) {
	case	0: 
		this->debug();
	case	1: 
		this->info();
	case	2: 
		this->warning();
	case	3: 
		this->error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}