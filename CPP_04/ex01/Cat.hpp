/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:41:32 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 16:53:54 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
private:
	Brain   *brain;
public:
	Cat(void);
	Cat(std::string type);
	~Cat(void);

	Cat(const Cat& cat);
	Cat& operator=(const Cat& cat);
	
	void makeSound(void) const;
	Brain* getBrain(void) const;
};

#endif
