#pragma once

#include <utility>
#include <vector>

namespace insoLLLent::Algorithm::Sort {

template <typename T>
void BubbleSort(std::vector<T>& elements) {
	for (size_t i = 0; i < elements.size(); ++i) {
		for (size_t j = elements.size() - 1; j > i; --j) {
			if (elements[j - 1] > elements[j]) {
				std::swap(elements[j], elements[j - 1]);
			}
		}
	}
}

} // namespace insoLLLent::Algorithm::Sort
