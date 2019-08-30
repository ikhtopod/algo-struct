#pragma once

/**
	\file
	\brief Поиск простых чисел
*/

#include <vector>

namespace insoLLLent::Algorithm::PrimeNumber {

/**
	\brief Алгоритм Решето Эратосфена
	\param target Целевое число
	\return Является ли число простым
*/
bool SieveOfEratosthenes(size_t target);

} // namespace insoLLLent::Algorithm
