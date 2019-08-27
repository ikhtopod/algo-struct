#pragma once

/**
	\file
	\brief Бибилиотека для работы с цветом.
*/
#include <iostream>
#include <cstdint>
#include <utility>

namespace insoLLLent::Concept {

/**
	\brief Получение RGBA по идентификтору и/или получение идентификатора по заданному RGBA.

	Получение RGBA по идентификтору и/или получение идентификатора по заданному RGBA.
	Можно применить при реализации Color Picking для выделения объекта в 3D-приложении и т.д.
*/
union IdColor final {
	using IdType = uint32_t;
	using ColorType = uint8_t;

private:
	IdType m_id;
	ColorType m_color;

	enum { RED, GREEN, BLUE, ALPHA };

private:
	const ColorType& GetChannel(int channel) const;
	ColorType& GetChannel(int channel);

public:
	IdColor();
	~IdColor() = default;

	explicit IdColor(IdType id);
	IdColor(const IdColor& idColor);
	IdColor(IdColor&& idColor) noexcept;
	IdColor(const ColorType& red, const ColorType& green,
		const ColorType& blue, const ColorType& alpha);

	IdColor& operator=(const IdColor& idColor);
	IdColor& operator=(IdColor&& idColor) noexcept;

public:
	IdType Id() const;
	void Id(const IdType& id);

	ColorType Red() const;
	ColorType Green() const;
	ColorType Blue() const;
	ColorType Alpha() const;

	void Red(const ColorType& red);
	void Green(const ColorType& green);
	void Blue(const ColorType& blue);
	void Alpha(const ColorType& alpha);

	void RGBA(const ColorType& red, const ColorType& green,
		const ColorType& blue, const ColorType& alpha);
};

} // namespace insoLLLent::Concept
