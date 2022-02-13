#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int age;
public:
    void setAge(int yas) {
        age = yas;
    }
    void setName(string isim) {
        name = isim;
    }
    int getAge() {
        return age;
    }
    string getName() {
        return name;
    }
};

int main()
{
    Employee* employee = new Employee();
    employee->setName("Utku Kucuk");
    employee->setAge(22);

    cout << employee->getName() << endl;
    cout << employee->getAge() << endl;
        
    

    return 0;
}

