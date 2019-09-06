#pragma once

#include <iostream>
#include <vector>
#include <limits>

namespace insoLLLent::Algorithm::Search {

/**
	\brief Бинарный поиск в отсортированном массиве.
	\param[in] arr массив элементов
	\param[in] value искомое значение
	\return в случае успеза вернет индекс элемента в массиве, иначе - максимальное значение типа size_t
*/
template <typename T>
size_t BinarySearch(const std::vector<T>& arr, const T& target) {
	if (arr.size() == 0)
		return std::numeric_limits<size_t>::max();

	size_t left = 0;
	size_t right = arr.size() - 1;

	while (left <= right) {
		size_t num = ((target - arr[left]) * (right - left));
		size_t den = arr[right] - arr[left];
		size_t middle = den ? (num / den) : left;

		if (arr[middle] < target) {
			left = middle + 1;
		} else if (arr[middle] > target) {
			right = middle - 1;
		} else {
			// если есть повторяющиеся элементы, 
			// то "откатываем" индекс к первому из них
			while (middle > left && arr[middle] == arr[middle - 1]) {
				--middle;
			}

			return middle;
		}
	}

	return std::numeric_limits<size_t>::max();
}

} // namespace insoLLLent::Algorithm::Search
