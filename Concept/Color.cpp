#include "Color.h"

namespace insoLLLent::Concept {

IdColor::IdColor() : m_id(0) {}
IdColor::IdColor(IdType id) : m_id(id) {}
IdColor::IdColor(const IdColor& idColor) : IdColor(idColor.m_id) {}
IdColor::IdColor(IdColor&& idColor) noexcept : IdColor(idColor.m_id) {}

IdColor::IdColor(
	const ColorType& red, const ColorType& green,
	const ColorType& blue, const ColorType& alpha) {

	RGBA(red, green, blue, alpha);
}

IdColor& IdColor::operator=(const IdColor& idColor) {
	if (this != &idColor) {
		m_id = idColor.m_id;
	}

	return *this;
}

IdColor& IdColor::operator=(IdColor&& idColor) noexcept {
	if (this != &idColor) {
		m_id = idColor.m_id;
	}

	return *this;
}

const IdColor::ColorType& IdColor::GetChannel(int channel) const {
	return (&m_color)[channel];
}

IdColor::ColorType& IdColor::GetChannel(int channel) {
	return (&m_color)[channel];
}

IdColor::IdType IdColor::Id() const { return m_id; }
void IdColor::Id(const IdType& id) { m_id = id; }

IdColor::ColorType IdColor::Red() const { return GetChannel(RED); }
IdColor::ColorType IdColor::Green() const { return GetChannel(GREEN); }
IdColor::ColorType IdColor::Blue() const { return GetChannel(BLUE); }
IdColor::ColorType IdColor::Alpha() const { return GetChannel(ALPHA); }

void IdColor::Red(const ColorType& red) { GetChannel(RED) = red; }
void IdColor::Green(const ColorType& green) { GetChannel(GREEN) = green; }
void IdColor::Blue(const ColorType& blue) { GetChannel(BLUE) = blue; }
void IdColor::Alpha(const ColorType& alpha) { GetChannel(ALPHA) = alpha; }

void IdColor::RGBA(
	const ColorType& red, const ColorType& green,
	const ColorType& blue, const ColorType& alpha) {

	Red(red);
	Green(green);
	Blue(blue);
	Alpha(alpha);
}

} // namespace insoLLLent::Concept
