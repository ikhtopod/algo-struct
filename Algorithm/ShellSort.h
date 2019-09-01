#pragma once

#include <utility>
#include <vector>
#include <iostream>

namespace insoLLLent::Algorithm::Sort {

template <typename T>
void ShellSort(std::vector<T>& elements) {
	int step = 1;
	while (step < elements.size() / 9) {
		step = 3 * step + 1;
	}

	for (; step > 0; step /= 3) {
		for (int i = step; i < elements.size(); ++i) {
			for (int j = i - step; j >= 0 && elements[j] > elements[j + step]; j -= step) {
				std::swap(elements[j], elements[j + step]);
			}
		}
	}
}

} // namespace insoLLLent::Algorithm::Sort
