/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:19:49 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/02 12:10:17 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie(void);
	void announce(void);
	void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif