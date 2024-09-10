#include "ScalarConverter.hpp"

/* Constructor and destructor */

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

/* Public methods */

void ScalarConverter::convert(const std::string parm) {
	// int numInt = static_cast<int>(parm[0]);
	// int numFloat = static_cast<float>(parm[0]);
	// int numDouble = static_cast<double>(parm[0]);

	std::cout << "char: " << parm << std::endl;
	std::cout << "int: " << atoi(parm.c_str()) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << atof(parm.c_str()) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << atof(parm.c_str()) << std::endl;
}
