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
    Address address;

};

int main()
{
    Employee employee = { 12,"Utku Kucuk","Bilisim",{"Istanbul",5} };
    cout << "Id: " << employee.id << endl;
    cout << "Isim: " << employee.name << endl;
    cout << "Departman: " << employee.department << endl;
    cout << "Sehir: " << employee.address.cityName << endl;
    cout << "Kapi No: " << employee.address.no << endl;




    return 0;
}
