/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:32:49 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 17:41:28 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal(void);
	AAnimal(std::string type);
	virtual ~AAnimal();

	AAnimal(const AAnimal& animal);
	AAnimal& operator=(const AAnimal& animal);
	
	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
};

#endif
