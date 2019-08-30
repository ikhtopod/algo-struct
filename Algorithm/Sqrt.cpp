#include "Sqrt.h"

namespace insoLLLent::Algorithm {

size_t Sqrt(size_t target, size_t power) {
	if (power == 0) return 0;

	size_t left = 1;
	size_t right = target / power + 1;
	size_t result = 0;

	while (left <= right) {
		size_t middle = left + (right - left) / 2;

		size_t div = target;
		for (size_t p = power; p > 1; div /= middle, --p);

		if (middle <= div) {
			left = middle + 1;
			result = middle;
		} else {
			right = middle - 1;
		}
	}

	return result;
}

} // namespace insoLLLent::Algorithm
