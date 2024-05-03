/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:05:23 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/03 18:55:34 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	argv_len(char **argv)
{
	int		n_args;
	char	**argv_cp;

	n_args = 0;
	argv_cp = argv;
	while (*argv_cp != NULL)
	{
		n_args++;
		argv_cp++;
	}
	return (n_args);
}


int	main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Please enter a correct argument" << std::endl;
        return (EXIT_FAILURE);
    }
    File file(argv[1]);
	file.replace(argv[2], argv[3]);
	return (EXIT_SUCCESS);
}