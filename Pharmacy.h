#pragma once
#include "Medicine.h"
#include "Array_Template.h"

class Pharmacy
{
	char* m_name;
	int m_sizeMedicine;
	Medicine* m_arr;

public:
	Pharmacy();
	~Pharmacy();

	void setName(const char* name);
	const char* getName()const;

	int getAmoutofMedicine()const;
	void addMedicine(Medicine object);

	void showInfo()const;
};

