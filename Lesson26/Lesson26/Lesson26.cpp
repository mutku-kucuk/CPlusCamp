#include <iostream>

using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

void showEmployee(Employee employee) {

    cout << "Id: " << employee.id << endl;
    cout << "Isim: " << employee.name << endl;
    cout << "Departman: " << employee.department << endl;


}

void show(Employee* employee) {

    employee->id = 30;
    cout << "Id: " << employee->id << endl;
    cout << "Isim: " << employee->name << endl;
    cout << "Departman: " << employee->department << endl;

}


int main()
{

    Employee employee1 = { 12,"Utku Kucuk","Bilisim" };

    Employee* ptr = &employee1;

    /*cout << employee1.name << endl;
    cout << ptr->department << endl;*/
    showEmployee(employee1);
    show(&employee1);
    cout << employee1.id << endl;

    return 0;

}
