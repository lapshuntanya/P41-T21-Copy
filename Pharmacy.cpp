#include "Pharmacy.h"

Pharmacy::Pharmacy(){
    m_name = new char[10] {"undefined"};
    m_sizeMedicine = 0;
    m_arr = nullptr;
}

Pharmacy::~Pharmacy(){
    delete[] m_name;
    if (m_sizeMedicine > 0) {
        delete[] m_arr;
    }
}

void Pharmacy::setName(const char* name){
    int sizeName = strlen(name);
    if (sizeName >= 2) {
        delete[] m_name;

        m_name = new char[sizeName + 1];
        strcpy_s(m_name, sizeName + 1, name);
    }
}

const char* Pharmacy::getName() const{    return m_name;}

int Pharmacy::getAmoutofMedicine() const{    return m_sizeMedicine;}

void Pharmacy::addMedicine(Medicine object) //Copy constructor
{
    addItemBack(m_arr, m_sizeMedicine, object);
}

void Pharmacy::showInfo() const{
    cout << "\tPharmacy: " << m_name << endl;
    cout << "\tAmount of medicine: " << m_sizeMedicine << endl;
    for (int i = 0; i < m_sizeMedicine; i++)
    {
        m_arr[i].showInfo();
    }
}
