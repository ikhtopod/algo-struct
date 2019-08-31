#include "stdafx.h"

#include "BinarySearch.h"

using insoLLLent::Algorithm::Search::BinarySearch;

TEST(Algorithm_Search_BinarySearch, Equals_NotFound) {
	EXPECT_EQ(BinarySearch<int>({}, 23), std::numeric_limits<size_t>::max());
	EXPECT_EQ(BinarySearch<int>({ 1 }, 23), std::numeric_limits<size_t>::max());
	EXPECT_EQ(BinarySearch<int>({ 1, 23, 32 }, 21), std::numeric_limits<size_t>::max());
	EXPECT_EQ(BinarySearch<int>({ 1, 23, 32 }, 33), std::numeric_limits<size_t>::max());
}

TEST(Algorithm_Search_BinarySearch, NotEquals_NotFound) {
	EXPECT_NE(BinarySearch<int>({ 1, 23 }, 23), std::numeric_limits<size_t>::max());
	EXPECT_NE(BinarySearch<int>({ 1, 23, 32, 44 }, 32), std::numeric_limits<size_t>::max());
}

TEST(Algorithm_Search_BinarySearch, Found) {
	EXPECT_EQ(BinarySearch<int>({ 1 }, 1), 0);
	EXPECT_EQ(BinarySearch<int>({ 1, 23 }, 1), 0);
	EXPECT_EQ(BinarySearch<int>({ 1, 23 }, 23), 1);
	EXPECT_EQ(BinarySearch<int>({ 1, 23, 32 }, 23), 1);
	EXPECT_EQ(BinarySearch<int>({ 1, 23, 23, 32 }, 23), 1);
	EXPECT_EQ(BinarySearch<int>({ 1, 23, 23, 29, 32 }, 23), 1);
	EXPECT_EQ(BinarySearch<int>({ 1, 23, 23, 29, 32, 32 }, 32), 4);
	EXPECT_EQ(BinarySearch<int>({ 1, 23, 24, 29, 32 }, 23), 1);
	EXPECT_EQ(BinarySearch<int>({ 23, 23, 24, 29, 32 }, 23), 0);
	EXPECT_EQ(BinarySearch<int>({ 1, 23, 24, 29, 32, 32, 44 }, 32), 4);
	EXPECT_EQ(BinarySearch<int>({
		8, 14, 26, 28, 38, 47, 56,
		60, 64, 69, 70, 78, 80, 82,
		84, 87, 90, 92, 98, 108 }, 82), 13);
	EXPECT_EQ(BinarySearch<int>(
		{ -8, -7, -6, -6, -4, 2, 6, 7, 8, 15 }, 15), 9);
}

TEST(Algorithm_Search_BinarySearch, BigVector_Found) {
	std::vector<int> vec(10'000'000);
	std::fill(vec.begin(), vec.end(), 23);

	EXPECT_EQ(BinarySearch<int>(vec, 23), 0); // долго :(
}

/*
// it is correct, but long
TEST(Algorithm_Search_BinarySearch, BigVector_Found_02) {
	std::vector<int> vec(10'000'000);
	std::fill(vec.begin(), std::next(vec.begin(), 5'000'001), 23);
	std::fill(std::next(vec.begin(), 4'999'999), vec.end(), 44);

	EXPECT_EQ(BinarySearch<int>(vec, 44), 4'999'999);
}*/ 
