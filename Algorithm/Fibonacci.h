#pragma once

#include <cstdint>

namespace insoLLLent::Algorithm {

using FibonacciType = uint32_t;

/**
	\brief –екурсивный расчет чисел ‘ибоначчи на этапе компил€ции.
*/
template<FibonacciType num>
struct Fibonacci final {
	static constexpr FibonacciType value =
		Fibonacci<num - 1>::value + Fibonacci<num - 2>::value;
};

template<>
struct Fibonacci<0> final {
public:
	static constexpr FibonacciType value = 0;
};

template<>
struct Fibonacci<1> final {
public:
	static constexpr FibonacciType value = 1;
};

} // namespace insoLLLent::Algorithm
