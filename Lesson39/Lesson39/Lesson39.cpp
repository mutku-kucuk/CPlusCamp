#include <iostream>

using namespace std;

class Employee {
private:
    int age;
    string name;
    

public:
    
    void setName(string isim) {
        name = isim;
    }
    void setAge(int yas) {
        age = yas;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

int main()
{
    Employee employee;
    employee.setName("Utku Kucuk");
    employee.setAge(22);
    cout << employee.getName() << endl;
    cout << employee.getAge() << endl;

    return 0;
}
