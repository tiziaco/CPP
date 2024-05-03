/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:25:21 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/03 18:45:17 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>

class File
{
private:
    std::string _filename;
    std::string _new_filename;
public:
    File(std::string filename);
    ~File();
    void replace(std::string s1, std::string s2);
};

#endif
