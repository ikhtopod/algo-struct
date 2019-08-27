#include "stdafx.h"

#include "Color.h"

namespace {

using insoLLLent::Concept::IdColor;

constexpr IdColor::IdType id_zero = 0;
constexpr IdColor::IdType id = 2'139'062'143;
constexpr IdColor::IdType id_max = std::numeric_limits<IdColor::IdType>::max();

constexpr IdColor::ColorType res_color_0 = 0;
constexpr IdColor::ColorType res_color_127 = 127;
constexpr IdColor::ColorType res_color_255 = 255;

}

TEST(Concept_IdColor, Default) {
	IdColor idColor {};

	EXPECT_EQ(idColor.Id(), id_zero);
	EXPECT_EQ(idColor.Red(), res_color_0);
	EXPECT_EQ(idColor.Green(), res_color_0);
	EXPECT_EQ(idColor.Blue(), res_color_0);
	EXPECT_EQ(idColor.Alpha(), res_color_0);
}

TEST(Concept_IdColor, CopyConstructor) {
	IdColor idColorTmp { id_max };
	IdColor idColor { idColorTmp };

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);
}

TEST(Concept_IdColor, MoveConstructor) {
	IdColor idColor { std::move(IdColor { id_max }) };

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);
}

TEST(Concept_IdColor, CopyOperator_01) {
	IdColor idColorTmp { id_max };
	IdColor idColor = idColorTmp;

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);
}

TEST(Concept_IdColor, CopyOperator_02) {
	IdColor idColorTmp { id_max };
	IdColor idColor { id };

	idColor = idColorTmp;

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);
}

TEST(Concept_IdColor, MoveOperator_01) {
	IdColor idColorTmp { id_max };
	IdColor idColor = std::move(idColorTmp);

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);
}

TEST(Concept_IdColor, MoveOperator_02) {
	IdColor idColorTmp { id_max };
	IdColor idColor { id };

	idColor = std::move(idColorTmp);

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);
}

TEST(Concept_IdColor, Id_2139062143) {
	IdColor idColor { id };

	EXPECT_EQ(idColor.Id(), id);
	EXPECT_EQ(idColor.Red(), res_color_127);
	EXPECT_EQ(idColor.Green(), res_color_127);
	EXPECT_EQ(idColor.Blue(), res_color_127);
	EXPECT_EQ(idColor.Alpha(), res_color_127);
}

TEST(Concept_IdColor, Id_Max_uint32_t) {
	IdColor idColor { id_max };

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);
}

TEST(Concept_IdColor, Set_Id) {
	IdColor idColor { id_max };

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);

	idColor.Id(id);

	EXPECT_EQ(idColor.Id(), id);
	EXPECT_EQ(idColor.Red(), res_color_127);
	EXPECT_EQ(idColor.Green(), res_color_127);
	EXPECT_EQ(idColor.Blue(), res_color_127);
	EXPECT_EQ(idColor.Alpha(), res_color_127);
}

TEST(Concept_IdColor, Set_RedGreenBlueAlpha) {
	IdColor idColor { id_max };

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);

	idColor.Red(res_color_127);
	idColor.Green(res_color_127);
	idColor.Blue(res_color_127);
	idColor.Alpha(res_color_127);

	EXPECT_EQ(idColor.Id(), id);
	EXPECT_EQ(idColor.Red(), res_color_127);
	EXPECT_EQ(idColor.Green(), res_color_127);
	EXPECT_EQ(idColor.Blue(), res_color_127);
	EXPECT_EQ(idColor.Alpha(), res_color_127);
}

TEST(Concept_IdColor, Set_RGBA) {
	IdColor idColor { id_max };

	EXPECT_EQ(idColor.Id(), id_max);
	EXPECT_EQ(idColor.Red(), res_color_255);
	EXPECT_EQ(idColor.Green(), res_color_255);
	EXPECT_EQ(idColor.Blue(), res_color_255);
	EXPECT_EQ(idColor.Alpha(), res_color_255);

	idColor.RGBA(res_color_127, res_color_127,
		res_color_127, res_color_127);

	EXPECT_EQ(idColor.Id(), id);
	EXPECT_EQ(idColor.Red(), res_color_127);
	EXPECT_EQ(idColor.Green(), res_color_127);
	EXPECT_EQ(idColor.Blue(), res_color_127);
	EXPECT_EQ(idColor.Alpha(), res_color_127);
}
