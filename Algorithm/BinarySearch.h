#pragma once

#include <iostream>
#include <vector>
#include <limits>

namespace insoLLLent::Algorithm::Search {

/**
	\brief Бинарный поиск в отсортированном массиве.
	\param[in] arr массив элементов
	\param[in] value искомое значение
	\return в случае успеха вернет индекс элемента в массиве, иначе - максимальное значение типа size_t
*/
template <typename T>
size_t BinarySearch(const std::vector<T>& arr, const T& target) {
	size_t result = std::numeric_limits<size_t>::max();

	if (arr.size() == 0) return result;

	size_t left = 0;
	size_t right = arr.size() - 1;

	while (left <= right) {
		size_t num = ((target - arr[left]) * (right - left));
		size_t den = arr[right] - arr[left];
		size_t middle = den ? (left + num / den) : left;

		if (arr[middle] < target) {
			left = middle + 1;
		} else if (arr[middle] > target) {
			right = middle - 1;
		} else {
			result = middle;
			break;
		}
	}

	// если есть повторяющиеся элементы, то найти первый из них
	if (result != std::numeric_limits<size_t>::max() && left < result) {
		right = result;

		while (left < right) {
			size_t middle = left + (right - left) / 2;

			if (arr[middle] == target) {
				result = middle;
				right = middle - 1;
			} else {
				left = middle + 1;
			}
		}
	}

	return result;
}

} // namespace insoLLLent::Algorithm::Search
