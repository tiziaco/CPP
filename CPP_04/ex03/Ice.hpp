/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:51:16 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/12 10:52:05 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice(void);
	Ice(const Ice& ice);
	Ice& operator=(const Ice& ice);
	~Ice(void);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
