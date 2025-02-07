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
	int sizeTitle = strlen(title);
	if (sizeTitle >= 1 && title[0] != ' ') {
		delete[] m_title;

		m_title = new char[sizeTitle + 1];
		strcpy_s(m_title, sizeTitle + 1, title);
	}
}

void Medicine::setType(const char* type){
	int sizeType = strlen(type);
	if (sizeType >= 1 && type[0] != ' ') {
		delete[] m_type;

		m_type = new char[sizeType + 1];
		strcpy_s(m_type, sizeType + 1, type);
	}
}

void Medicine::setPrice(float price){
	if (price > 0) {
		m_price = price;
	}
}

void Medicine::setCountry(const char* country){
	int sizeCountry = strlen(country);
	if (sizeCountry >= 1 && country[0] != ' ') {
		delete[] m_country;

		m_country = new char[sizeCountry + 1];
		strcpy_s(m_country, sizeCountry + 1, country);
	}
}

const char* Medicine::getTitle() const{	return m_title;}

const char* Medicine::getType() const{	return m_type;}

float Medicine::getPrice() const{	return m_price;}

const char* Medicine::getCountry() const{	return m_country;}

void Medicine::showInfo() const
{
	cout << "=======================================\n";
	cout << "Title:   " << m_title << endl;
	cout << "Type:    " << m_type << endl;
	cout << "Price:	  " << m_price << "UAH" << endl;
	cout << "Country: " << m_country << endl;
	cout << "=======================================\n\n";
}
