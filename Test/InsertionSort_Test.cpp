#include "stdafx.h"

#include "InsertionSort.h"

using insoLLLent::Algorithm::Sort::InsertionSort;

TEST(Algorithm_Sort_InsertionSort, Case_00) {
	std::vector<int> elements {};
	std::vector<int> result {};

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_01) {
	std::vector<int> elements { 1 };
	std::vector<int> result { 1 };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_02) {
	std::vector<int> elements { 1, 2 };
	std::vector<int> result { 1, 2 };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_03) {
	std::vector<int> elements { 2, 1 };
	std::vector<int> result { 1, 2 };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_04) {
	std::vector<int> elements { 1, 2, 3 };
	std::vector<int> result { 1, 2, 3 };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_05) {
	std::vector<int> elements { 3, 2, 1 };
	std::vector<int> result { 1, 2, 3 };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_06) {
	std::vector<int> elements { 3, 1, 2 };
	std::vector<int> result { 1, 2, 3 };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_07) {
	std::vector<int> elements { 1, 10, 2, 21 };
	std::vector<int> result { 1, 2, 10, 21 };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_08) {
	std::vector<int> elements { 4, -2, 5, -1, 3 };
	std::vector<int> result { -2, -1, 3, 4, 5 };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_InsertionSort, Case_09) {
	std::string str1 { "asdas" };
	std::string str2 { "aadss" };

	std::vector<char> elements { str1.begin(), str1.end() };
	std::vector<char> result { str2.begin(), str2.end() };

	InsertionSort(elements);

	EXPECT_EQ(elements, result);
}
