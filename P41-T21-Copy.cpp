#include "Pharmacy.h"

int main()
{




    Medicine obj1("Aspiryn", "pills", 45.99, "Ukraine");
    obj1.setTitle("Aspiryn Forte");
    /* obj.showInfo();


     cout << "\n\n\n";
    Medicine obj2 = obj;  //Конструктор копіювання => this-obj2,    copy-obj
    obj2.setCountry("India");
    obj2.setTitle("Noshpa");
    obj2.showInfo();


    cout << "\n\n\n";

    obj = obj2; //Noshpa => оператор присвоювання 
    obj.showInfo();
    obj2.showInfo();*/

    Pharmacy pharm;
    pharm.setName("Pharmacy-911");

    pharm.addMedicine(obj1);//Copy constructor
    pharm.addMedicine(Medicine("Nurofen", "pills", 230, "France"));

    pharm.showInfo();

}

