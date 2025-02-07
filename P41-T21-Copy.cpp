#include "Medicine.h"

int main()
{
    Medicine obj("Aspiryn", "pills", 45.99, "Ukraine");
    obj.setTitle("Aspiryn Forte");
    obj.showInfo();


    cout << "\n\n\n";
    Medicine obj2 = obj;  //this-obj2,    copy-obj
    obj2.setCountry("India");
    obj2.showInfo();


}

