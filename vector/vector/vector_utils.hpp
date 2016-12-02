#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<int> GetInts(std::istream & input)
{
	std::vector<int> nums;

	std::string currentStr;
	std::getline(input, currentStr);
	std::stringstream stream(currentStr);

	int num;
	while (stream >> num)
	{
		nums.push_back(num);
	}
	return nums;
}
