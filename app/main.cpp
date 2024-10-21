#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int num;

	std::cin >> num;

	std::cout << vsite::oop::v1::to_hex(num) << "\n";

	vsite::oop::v1::mult_table(num, std::cout);
}
