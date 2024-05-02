/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:50:45 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/02 12:19:17 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
	if (N <= 0) return 0;

	Zombie* horde = new Zombie[N];

    // Initialize each zombie with the provided name
    for (int i = 0; i < N; ++i) {
        horde[i].set_name(name);
    }
    return horde;
}