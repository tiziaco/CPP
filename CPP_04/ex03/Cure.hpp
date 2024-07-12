/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:01:21 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/12 10:51:52 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure(void);
	Cure(const Cure& ice);
	Cure& operator=(const Cure& ice);
	~Cure(void);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
