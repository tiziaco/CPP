/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:41:32 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/15 11:05:13 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	WrongCat(void);
	WrongCat(std::string type);
	~WrongCat(void);
	WrongCat(const WrongCat& cat);
	WrongCat& operator=(const WrongCat& cat);
	void makeSound(void) const;
};

#endif
