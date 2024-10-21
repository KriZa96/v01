#include "app.h"
#include <format>
#include <iomanip>

namespace vsite::oop::v1
{
/*
* function implementations
*/
	std::string to_hex(const int num)
	{

		return std::format("{:X}", num);
	}

	std::string to_exp(const double num)
	{
		return std::format("{:.2e}", num);
	}

	void mult_table(const int num, std::ostream& ss)
	{
		if (num == 0 || num > 20)
		{
			return;
		}

		for (int i=0; i<=num; ++i)
		{
			for (int j=0; j<=num; ++j)
			{
				if (j==0)
				{
					ss << std::format("{}", i);
					
				} else if (i==0)
				{
					ss << std::format("{:4}", j);
				} else
				{
					ss << std::format("{:4}", i*j);
				}

			}
			ss << "\n";
		}
	}

} // namespace

