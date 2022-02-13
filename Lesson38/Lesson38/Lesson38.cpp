#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    Employee employee;
    employee.id = 12;
    employee.name = "Utku Kucuk";
    employee.salary = 3000;

    employee.showInfos();

    return 0;
}

