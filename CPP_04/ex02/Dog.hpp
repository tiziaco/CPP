/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:46:01 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 17:36:46 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
private:
	Brain   *brain;
public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog& dog);

	Dog& operator=(const Dog& dog);
	~Dog(void);
	
	void makeSound(void) const;
	Brain* getBrain(void) const;
};

#endif
