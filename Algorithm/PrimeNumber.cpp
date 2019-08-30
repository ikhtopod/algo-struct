#include "PrimeNumber.h"

namespace insoLLLent::Algorithm::PrimeNumber {

bool SieveOfEratosthenes(size_t target) {
	std::vector<bool> primes {};
	primes.assign(target + 1, true);

	for (size_t num = 2; num < primes.size(); ++num) {
		if (primes[num]) {
			size_t step = num;
			size_t next_num = num * num;

			while (next_num < primes.size()) {
				primes[next_num] = false;
				++step;
				next_num = num * step;
			}
		}
	}

	return primes.back();
}

} // namespace insoLLLent::Algorithm::PrimeNumber
