#include <iostream>

using namespace std;

class Student {
public:
    string name;

    void tellName() {
        cout << "Benim Adim: " << name << endl;
    }

};

int main()
{
    Student student1;
    student1.name = "Utku";
    student1.tellName();

    return 0;
}

