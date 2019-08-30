#include "stdafx.h"

#include "Gcd.h"

using insoLLLent::Algorithm::Gcd;
using insoLLLent::Algorithm::gcd;

TEST(Algorithm_Gcd_Class, Values_2_4_Return_2) {
	EXPECT_EQ((Gcd<2, 4>::value), 2);
}

TEST(Algorithm_Gcd_Class, Values_4_8_Return_4) {
	EXPECT_EQ((Gcd<4, 8>::value), 4);
}

TEST(Algorithm_Gcd_Class, Values_16_18_Return_2) {
	EXPECT_EQ((Gcd<16, 18>::value), 2);
}

TEST(Algorithm_Gcd_Class, Values_245_475_Return_5) {
	EXPECT_EQ((Gcd<245, 475>::value), 5);
}

TEST(Algorithm_Gcd_Class, Values_147_357_Return_21) {
	EXPECT_EQ((Gcd<147, 357>::value), 21);
}

TEST(Algorithm_Gcd_Class, Values_735_1785_Return_105) {
	EXPECT_EQ((Gcd<735, 1785>::value), 105);
}

TEST(Algorithm_Gcd_Class, Return_1) {
	EXPECT_EQ((Gcd<2, 1>::value), 1);
	EXPECT_EQ((Gcd<17, 16>::value), 1);
	EXPECT_EQ((Gcd<199, 333>::value), 1);
}



TEST(Algorithm_gcd_Function, Values_2_4_Return_2) {
	EXPECT_EQ(gcd(2, 4), 2);
}

TEST(Algorithm_gcd_Function, Values_4_8_Return_4) {
	EXPECT_EQ(gcd(4, 8), 4);
}

TEST(Algorithm_gcd_Function, Values_16_18_Return_2) {
	EXPECT_EQ(gcd(16, 18), 2);
}

TEST(Algorithm_gcd_Function, Values_245_475_Return_5) {
	EXPECT_EQ(gcd(245, 475), 5);
}

TEST(Algorithm_gcd_Function, Values_147_357_Return_21) {
	EXPECT_EQ(gcd(147, 357), 21);
}

TEST(Algorithm_gcd_Function, Values_735_1785_Return_105) {
	EXPECT_EQ(gcd(735, 1785), 105);
}

TEST(Algorithm_gcd_Function, Return_1) {
	EXPECT_EQ(gcd(2, 1), 1);
	EXPECT_EQ(gcd(17, 16), 1);
	EXPECT_EQ(gcd(199, 333), 1);
}
