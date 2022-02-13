#include <iostream>

using namespace std;


class Employee {
private:
    string name;
    int salary;
    int id;
public:
    Employee() {
        this->name = "Bilgi Yok";
        this->salary = 0;
        this->id = 0;
    }
    Employee(string name, int salary) {
        this->name = name;
        this->salary = salary;
    }
    Employee(string name, int salary, int id) {
        this->name = name;
        this->salary = salary;
        this->id = id;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
    int getSalary() {
        return salary;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setId(int id) {
        this->id = id;
    }
    int getId() {
        return id;
    }
    void showInfos() {
        cout << "Isim: " << this->name << endl;
        cout << "Maas: " << this->salary << endl;
        cout << "Id: " << this->id << endl;
    }


};

void deneme(Employee* ptr) {
    ptr->showInfos();
}

int main()
{
    Employee employee("Utku Kucuk", 8000, 12);
    deneme(&employee);
    return 0;
}

