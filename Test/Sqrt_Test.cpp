#include "stdafx.h"

#include "Sqrt.h"

using insoLLLent::Algorithm::Sqrt;

TEST(Algorithm_Sqrt, Default_Sqrt0_Return0) {
	EXPECT_EQ(Sqrt(0), 0);
}

TEST(Algorithm_Sqrt, Sqrt1_Return1) {
	EXPECT_EQ(Sqrt(1), 1);
}

TEST(Algorithm_Sqrt, Default_Sqrt4_Return2) {
	EXPECT_EQ(Sqrt(4), 2);
}

TEST(Algorithm_Sqrt, Default_Sqrt9_Return3) {
	EXPECT_EQ(Sqrt(9), 3);
}

TEST(Algorithm_Sqrt, Default_Sqrt16_Return4) {
	EXPECT_EQ(Sqrt(16), 4);
}

TEST(Algorithm_Sqrt, Default_Sqrt152399025_Return12345) {
	EXPECT_EQ(Sqrt(152'399'025), 12'345);
}

TEST(Algorithm_Sqrt, Default_Sqrt0_ReturnNot1) {
	EXPECT_NE(Sqrt(0), 1);
}

TEST(Algorithm_Sqrt, Default_Sqrt0_ReturnNotm1) {
	EXPECT_NE(Sqrt(0), -1);
}

TEST(Algorithm_Sqrt, Default_Sqrt16_ReturnNot5) {
	EXPECT_NE(Sqrt(16), 5);
}

TEST(Algorithm_Sqrt, Default_Sqrt16_ReturnNot3) {
	EXPECT_NE(Sqrt(16), 3);
}

TEST(Algorithm_Sqrt, Power3_Sqrt8_Return2) {
	EXPECT_EQ(Sqrt(8, 3), 2);
}

TEST(Algorithm_Sqrt, Power3_Sqrt27_Return3) {
	EXPECT_EQ(Sqrt(27, 3), 3);
}

TEST(Algorithm_Sqrt, Power4_Sqrt16_Return2) {
	EXPECT_EQ(Sqrt(16, 4), 2);
}

TEST(Algorithm_Sqrt, Power7_Sqrt2187_Return3) {
	EXPECT_EQ(Sqrt(2187, 7), 3);
}

TEST(Algorithm_Sqrt, Power4_Sqrt81_Return3) {
	EXPECT_EQ(Sqrt(81, 4), 3);
}

TEST(Algorithm_Sqrt, Power1_Sqrt4_Return4) {
	EXPECT_EQ(Sqrt(4, 1), 4);
}

TEST(Algorithm_Sqrt, Power1_Sqrt81_Return81) {
	EXPECT_EQ(Sqrt(81, 1), 81);
}

TEST(Algorithm_Sqrt, Power0_Sqrt81_Return0) {
	EXPECT_EQ(Sqrt(81, 0), 0);
}
