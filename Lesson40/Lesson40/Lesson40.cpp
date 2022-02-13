#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int age;
public:
    void setName(string isim) {
        name = isim;
    }
    void setAge(int yas) {
        if (yas < 0)
        {
            cout << "Botle bir deger veremezsiniz..." << endl;
        }
        else {
            age = yas;
        }
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
    employee.setAge(-5);

    cout << "Adi: " << employee.getName() << endl;
    cout << "Yasi: " << employee.getAge() << endl;

    return 0;

    


}
