#include <iostream>

using namespace std;

class Employee {
public:

    string* s;
    int* i;

    Employee(string str, int ivalue) {
        s = new string;
        i = new int;

        *s = str;
        *i = ivalue;
    }
    void show() {
        cout << "String Deger: " << *s << "\nInt Deger: " << *i << endl;
    }

    ~Employee() {
        delete s;
        delete i;
        cout << "Destructor Cagrildi" << endl;
    }
};

int main()
{
    Employee* emp = new Employee("Utku Kucuk", 25);
    emp->show();

    delete emp;

    return 0;

}
