/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:41:32 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/09 16:15:04 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
public:
	Cat(void);
	Cat(std::string type);
	~Cat(void);
	Cat(const Cat& cat);
	Cat& operator=(const Cat& cat);
	void makeSound(void) const;
};

#endif
