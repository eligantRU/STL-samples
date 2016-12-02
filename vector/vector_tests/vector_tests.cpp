#include "stdafx.h"

#include "../vector/vector_utils.hpp"

BOOST_AUTO_TEST_SUITE(Get_Ints)

	BOOST_AUTO_TEST_CASE(return_vector_with_int_from_istream)
	{
		{
			std::stringstream input("3 14 15");
			const std::vector<int> expectedResult = {
				3, 14, 15
			};
			const auto nums = GetInts(input);
			BOOST_CHECK(nums == expectedResult);
		}

		{
			std::stringstream input("");
			const std::vector<int> expectedResult = { };
			const auto nums = GetInts(input);
			BOOST_CHECK(nums == expectedResult);
		}
	}

BOOST_AUTO_TEST_SUITE_END()
