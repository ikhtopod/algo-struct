#include "stdafx.h"

#include "ShellSort.h"

using insoLLLent::Algorithm::Sort::ShellSort;

TEST(Algorithm_Sort_ShellSort, Case_00) {
	std::vector<int> elements {};
	std::vector<int> result {};

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_01) {
	std::vector<int> elements { 1 };
	std::vector<int> result { 1 };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_02) {
	std::vector<int> elements { 1, 2 };
	std::vector<int> result { 1, 2 };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_03) {
	std::vector<int> elements { 2, 1 };
	std::vector<int> result { 1, 2 };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_04) {
	std::vector<int> elements { 1, 2, 3 };
	std::vector<int> result { 1, 2, 3 };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_05) {
	std::vector<int> elements { 3, 2, 1 };
	std::vector<int> result { 1, 2, 3 };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_06) {
	std::vector<int> elements { 3, 1, 2 };
	std::vector<int> result { 1, 2, 3 };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_07) {
	std::vector<int> elements { 1, 10, 2, 21 };
	std::vector<int> result { 1, 2, 10, 21 };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_08) {
	std::vector<int> elements { 4, -2, 5, -1, 3 };
	std::vector<int> result { -2, -1, 3, 4, 5 };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_09) {
	std::string str1 { "asdas" };
	std::string str2 { "aadss" };

	std::vector<char> elements { str1.begin(), str1.end() };
	std::vector<char> result { str2.begin(), str2.end() };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}

TEST(Algorithm_Sort_ShellSort, Case_10) {
	std::string str1 { "iufhasohsdfhasfdhadiufhasohsdfhasfdhadiufhasohsdfhasfdhadiufhasohsdfhasfdhad" };
	std::string str2 { "aaaaaaaaaaaaddddddddddddffffffffffffhhhhhhhhhhhhhhhhiiiioooossssssssssssuuuu" };

	std::vector<char> elements { str1.begin(), str1.end() };
	std::vector<char> result { str2.begin(), str2.end() };

	ShellSort(elements);

	EXPECT_EQ(elements, result);
}
