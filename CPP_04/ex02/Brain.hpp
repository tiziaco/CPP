/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:02:17 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 16:38:44 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);
	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index)const ;
};

#endif
