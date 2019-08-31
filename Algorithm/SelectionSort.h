#pragma once

#include <utility>

namespace insoLLLent::Algorithm::Sort {

template <typename T>
void SelectionSort(T& elements) {
	for (size_t current = 0; current < elements.size(); ++current) {
		size_t minimum = current;

		for (size_t i = current + 1; i < elements.size(); ++i) {
			if (elements[i] < elements[minimum]) {
				minimum = i;
			}
		}

		if (current < minimum) {
			std::swap(elements[current], elements[minimum]);
		}
	}
}

} // namespace insoLLLent::Algorithm::Sort
