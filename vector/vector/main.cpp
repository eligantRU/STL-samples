#include "stdafx.h"

#include "vector_utils.hpp"

int main(int, char * [])
{
	auto nums = GetInts(std::cin);
	for (const auto num : nums)
	{
		std::cout << num << std::endl;
	}

	return 0;
}
