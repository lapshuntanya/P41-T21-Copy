#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Medicine
{
	char* m_title;
	char* m_type;
	float m_price;
	char* m_country;
public:
	Medicine();
	Medicine(const char* title, const char* type, float price, const char* country);
	Medicine(const Medicine& copy); //Конструктор копіювання
	Medicine& operator=(const Medicine& copy); //Оператор присвоєння
	~Medicine();

	void setTitle(const char* title);
	void setType(const char* type);
	void setPrice(float price);
	void setCountry(const char* country);

	const char* getTitle()const;
	const char* getType()const;
	float getPrice()const;
	const char* getCountry()const;

	void showInfo()const;
};

