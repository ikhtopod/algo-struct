#pragma once

#include <utility>
#include <vector>

namespace insoLLLent::Algorithm::Sort {

template <typename T>
void InsertionSort(std::vector<T>& elements) {
	for (size_t i = 1; i < elements.size(); ++i) {
		T tmp = elements[i];

		size_t j = i;
		while (j > 0 && tmp < elements[j - 1]) {
			elements[j] = elements[j - 1];
			--j;
		}

		elements[j] = tmp;
	}
}

} // namespace insoLLLent::Algorithm::Sort
