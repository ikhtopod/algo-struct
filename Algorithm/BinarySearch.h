#pragma once

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
	size_t head = 0;
	size_t tail = arr.size();

	while (head < tail) {
		size_t navel = head + (tail - head) / 2;

		if (arr[navel] < target) {
			head = navel + 1;
		} else if (arr[navel] > target) {
			tail = navel;
		} else {
			// если есть повторяющиеся элементы, 
			// то "откатываем" индекс к первому из них
			while (navel > head && arr[navel] == arr[navel - 1]) {
				--navel;
			}

			return navel;
		}
	}

	return std::numeric_limits<size_t>::max();
}

} // namespace insoLLLent::Algorithm::Search
