#include "stdafx.h"

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	::testing::UnitTest::GetInstance()->Run();

	return 0;
}
