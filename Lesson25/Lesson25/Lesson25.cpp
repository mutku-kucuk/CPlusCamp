#include <iostream>

using namespace std;

struct Employee {
    int id;
    string name;
    string department;


};
int main()
{
    Employee employee1 = { 12,"Utku Kucuk","Bilisim" };
    cout << employee1.name << endl;

    employee1.name = "Muhammet Utku Kucuk";
    cout << employee1.name << endl;

    return 0;
}

