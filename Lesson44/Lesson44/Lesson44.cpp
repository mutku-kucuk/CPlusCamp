#include <iostream>

using namespace std;
class Employee {
private:
    int id;
    string name;
    int salary;
public:

    Employee(int id, string name, int salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void setId(int id) {
        this->id = id;
    }
    int getId() {
        return id;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
    int getSalary() {
        return salary;
    }

    void showInfos() {
        cout << "Id: " << this->id << endl;
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
    }
};

int main()
{
    Employee employee1(2, "Utku Kucuk", 8000);
    employee1.showInfos();

}
