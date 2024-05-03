/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:50:22 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/03 18:46:47 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(std::string filename) {
    // Initialise attributes
    this->_filename = filename;
    this->_new_filename = filename;
    this->_new_filename.append(".replace");
}

File::~File() {
}

void File::replace(std::string search, std::string replace) {
    std::ifstream _in_file;
    std::ofstream _out_file;
    std::string line;
    // Open input file
    _in_file.open(this->_filename.c_str());
    if (!_in_file.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        exit(EXIT_FAILURE);
    }
    // create output file
    _out_file.open(this->_new_filename.c_str());
    // Search an replace
    while (std::getline(_in_file, line)) {
        std::string newLine;
        size_t pos = 0;
        while (pos < line.length()) {
            size_t foundPos = line.find(search, pos);
            if (foundPos != std::string::npos) {
                newLine += line.substr(pos, foundPos - pos); // Add characters before the search string
                newLine += replace; // Add the replacement string
                pos = foundPos + search.length(); // Move past the search string
            } else {
                newLine += line.substr(pos); // Add remaining characters
                break; // No more occurrences found, exit loop
            }
        }
        _out_file << newLine << std::endl;
    }
    _in_file.close();
    _out_file.close();
}
