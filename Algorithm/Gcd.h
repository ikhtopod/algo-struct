#pragma once

/**
	\file
	\brief Вычисление НОД
*/

namespace insoLLLent::Algorithm {

/**
	\brief Рекурсивный алгоритм поиска НОД на этапе компиляции
*/
template <size_t n1, size_t n2>
struct Gcd {
	static constexpr size_t value = Gcd<n2, n1% n2>::value;
};

template <size_t n1>
struct Gcd<n1, 0> {
	static constexpr size_t value = n1;
};


/**
	\brief Простой метод поиска НОД
	\param n1,n2 Значения
	\return НОД
*/
size_t gcd(size_t n1, size_t n2);

} // namespace insoLLLent::Algorithm
