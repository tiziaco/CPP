/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:32:49 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/09 16:27:36 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal(void);
	Animal(std::string type);
	virtual ~Animal();

	Animal(const Animal& animal);
	Animal& operator=(const Animal& animal);
	
	virtual void makeSound(void) const;
	std::string getType(void) const;
};

#endif
