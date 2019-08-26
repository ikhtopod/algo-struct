#pragma warning(push)
#pragma warning(disable:26495)
#include "gtest/gtest.h"
#pragma warning(pop)

#include <iostream>

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	::testing::UnitTest::GetInstance()->Run();

	return 0;
}
