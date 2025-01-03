#include <iostream>
#include "myClasses.h"

using namespace std;

int main()
{
    Person p(1, "abdelrahman");
    Customer c (2, "salah", 1000);
    Employee e(3, "Ebrahim", 20000);
    p.print();
    c.print();
    e.print();

    Child ch(3, 4);
    cout << endl << "product: " << ch.product() << endl;
    return 0;
}
