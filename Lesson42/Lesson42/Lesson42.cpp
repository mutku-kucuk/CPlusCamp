#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int salary;
public:
    Employee(string isim, int maas) {
        name = isim;
        salary = maas;
    }

    void setName(string isim) {
        name = isim;
    }
    void setAge(int maas) {
        salary = maas;
    }
    string getName() {
        return name;
    }
    int getSalary() {
        return salary;
    }
    void showInfos() {
        cout << "Isim: " << name << endl;
        cout << "Maas: " << salary << endl;
    }

};


int main()
{
    
    Employee employee("Utku Kucuk", 8000);
    employee.showInfos();

    return 0;
    
}

