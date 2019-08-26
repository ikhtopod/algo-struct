#include "stdafx.h"
#include "Fibonacci.h"

TEST(Algorithm_Fibonacci, CorrectValues) {
	using insoLLLent::Algorithm::Fibonacci;

	EXPECT_EQ(Fibonacci<0>::value, 0);
	EXPECT_EQ(Fibonacci<1>::value, 1);
	EXPECT_EQ(Fibonacci<2>::value, 1);
	EXPECT_EQ(Fibonacci<3>::value, 2);
	EXPECT_EQ(Fibonacci<4>::value, 3);
	EXPECT_EQ(Fibonacci<5>::value, 5);
	EXPECT_EQ(Fibonacci<6>::value, 8);
	EXPECT_EQ(Fibonacci<7>::value, 13);
	EXPECT_EQ(Fibonacci<8>::value, 21);
}
