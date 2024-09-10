#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <stdlib.h>

class ScalarConverter
{
private:
	ScalarConverter();
	~ScalarConverter();
public:
	static void convert(const std::string parm);
};


#endif
