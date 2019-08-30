#include "Gcd.h"

namespace insoLLLent::Algorithm {

size_t gcd(size_t n1, size_t n2) {
	while (n2 > 0) {
		size_t tmp = n1 % n2;
		n1 = n2;
		n2 = tmp;
	}

	return n1;
}

} // namespace insoLLLent::Algorithm
