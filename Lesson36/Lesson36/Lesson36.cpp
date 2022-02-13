#include <iostream>

using namespace std;

class Student {
public:
    string name;


};


int main()
{
    Student student1;
    student1.name = "Muhammet Utku Kucuk";

    Student student2;
    student2.name = "Ahmet Sevdi";
    
    cout << "ogrenci 1 ismi: " << student1.name << endl;
    cout << "ogrenci 2 ismi: " << student2.name << endl;
    

    return 0;
}

