#include "stdafx.h"

#include "PrimeNumber.h"

using namespace insoLLLent::Algorithm;

TEST(Algorithm_PrimeNumber, Num2_IsPrimeNumber) {
	EXPECT_TRUE(PrimeNumber::SieveOfEratosthenes(2));
}

TEST(Algorithm_PrimeNumber, Num3_IsPrimeNumber) {
	EXPECT_TRUE(PrimeNumber::SieveOfEratosthenes(3));
}

TEST(Algorithm_PrimeNumber, Num4_IsNotPrimeNumber) {
	EXPECT_FALSE(PrimeNumber::SieveOfEratosthenes(4));
}

TEST(Algorithm_PrimeNumber, Num88_IsNotPrimeNumber) {
	EXPECT_FALSE(PrimeNumber::SieveOfEratosthenes(88));
}

TEST(Algorithm_PrimeNumber, Num10145_IsNotPrimeNumber) {
	EXPECT_FALSE(PrimeNumber::SieveOfEratosthenes(10145));
}

TEST(Algorithm_PrimeNumber, Num20145_IsNotPrimeNumber) {
	EXPECT_FALSE(PrimeNumber::SieveOfEratosthenes(20145));
}

TEST(Algorithm_PrimeNumber, Num23_IsPrimeNumber) {
	EXPECT_TRUE(PrimeNumber::SieveOfEratosthenes(23));
}

TEST(Algorithm_PrimeNumber, Num29_IsPrimeNumber) {
	EXPECT_TRUE(PrimeNumber::SieveOfEratosthenes(29));
}

TEST(Algorithm_PrimeNumber, Num157_IsPrimeNumber) {
	EXPECT_TRUE(PrimeNumber::SieveOfEratosthenes(157));
}

TEST(Algorithm_PrimeNumber, Num199_IsPrimeNumber) {
	EXPECT_TRUE(PrimeNumber::SieveOfEratosthenes(199));
}
