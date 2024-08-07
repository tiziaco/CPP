/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:58 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 17:15:51 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	ScavTrap(void);
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& trap);
	ScavTrap& operator=(const ScavTrap& trap);
	
	void attack(const std::string& target);
	void guardGate(void);
};

#endif
