#include <iostream>

using namespace std;

struct Address {
    string cityName;
    int no;
};

struct Employee {
    int id;
    string name;
    string department;
    Address* address;

};

int main()
{
    Employee employee;
    employee.id = 12;
    employee.name = "Mustafa Murat Coskun";
    employee.department = "Bilisim";

    Address address = { "Ankara",5 };
    employee.address = &address;

    Employee* ptr = &employee;

    cout << ptr->address->cityName << endl;
    cout << ptr->address->no << endl;

    return 0;
}
