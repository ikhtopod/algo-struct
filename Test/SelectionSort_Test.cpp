#include "stdafx.h"

#include "SelectionSort.h"

namespace {

template <typename T>
auto SomeSort = insoLLLent::Algorithm::Sort::SelectionSort<T>;

}

TEST(Algorithm_Sort_SelectionSort, Case_00) {
	std::vector<int> elements {};
	std::vector<int> result {};

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_01) {
	std::vector<int> elements { 1 };
	std::vector<int> result { 1 };

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_02) {
	std::vector<int> elements { 1, 2 };
	std::vector<int> result { 1, 2 };

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_03) {
	std::vector<int> elements { 2, 1 };
	std::vector<int> result { 1, 2 };

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_04) {
	std::vector<int> elements { 1, 2, 3 };
	std::vector<int> result { 1, 2, 3 };

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_05) {
	std::vector<int> elements { 3, 2, 1 };
	std::vector<int> result { 1, 2, 3 };

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_06) {
	std::vector<int> elements { 3, 1, 2 };
	std::vector<int> result { 1, 2, 3 };

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_07) {
	std::vector<int> elements { 1, 10, 2, 21 };
	std::vector<int> result { 1, 2, 10, 21 };

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_08) {
	std::vector<int> elements { 4, -2, 5, -1, 3 };
	std::vector<int> result { -2, -1, 3, 4, 5 };

	::SomeSort<std::vector<int>>(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_SelectionSort, Case_09) {
	std::string elements { "asdas" };
	std::string result { "aadss" };

	::SomeSort<std::string>(elements);

	EXPECT_EQ(elements, result);
}
