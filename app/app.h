#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
/*
* function declarations
*/
	std::string to_hex(const int num);
	std::string to_exp(const double num);
	void mult_table(const int num, std::ostream& ss);

}
