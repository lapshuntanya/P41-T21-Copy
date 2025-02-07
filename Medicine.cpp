#include "Medicine.h"

Medicine::Medicine()
{
	m_title = new char[10] {"undefined"};
	m_type = new char[10] {"undefined"};
	m_country = new char[10] {"undefined"};
	m_price = 0;
}

Medicine::Medicine(const char* title, const char* type, float price, const char* country){
	int sizeTitle = strlen(title) + 1;
	m_title = new char[sizeTitle];
	strcpy_s(m_title, sizeTitle, title);

	int sizeType = strlen(type) + 1;
	m_type = new char[sizeType];
	strcpy_s(m_type, sizeType, type);

	int sizeCountry = strlen(country) + 1;
	m_country = new char[sizeCountry];
	strcpy_s(m_country, sizeCountry, country);

	m_price = price;
}

Medicine::~Medicine(){
	delete[] m_title;
	delete[] m_type;
	delete[] m_country;
	m_title = m_type = m_country = nullptr;
}

void Medicine::setTitle(const char* title)
{
}

void Medicine::setType(const char* type)
{
}

void Medicine::setPrice(float price)
{
}

void Medicine::setCountry(const char* country)
{
}

const char* Medicine::getTitle() const
{
	return nullptr;
}

const char* Medicine::getType() const
{
	return nullptr;
}

float Medicine::getPrice() const
{
	return 0.0f;
}

const char* Medicine::getCountry() const
{
	return nullptr;
}

void Medicine::showInfo() const
{
}
