#pragma once

namespace insoLLLent::Algorithm {

/**
	\brief –екурсивный расчет чисел ‘ибоначчи на этапе компил€ции.
*/
template<int num>
struct Fibonacci final {
	static constexpr int value = 
		Fibonacci<num - 1>::value + Fibonacci<num - 2>::value;
};

template<>
struct Fibonacci<0> final {
public:
	static constexpr int value = 0;
};

template<>
struct Fibonacci<1> final {
public:
	static constexpr int value = 1;
};

} // namespace insoLLLent::Algorithm
