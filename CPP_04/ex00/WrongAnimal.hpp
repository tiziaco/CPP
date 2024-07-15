/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:32:49 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/15 11:00:49 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	virtual ~WrongAnimal();

	WrongAnimal(const WrongAnimal& animal);
	WrongAnimal& operator=(const WrongAnimal& animal);
	
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif
