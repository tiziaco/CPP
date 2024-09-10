#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Please proved a valid input!" << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);

}
