#include <iostream>

using namespace std;

void selamla()
{
    cout << "Merhaba" << endl;
}

void selamla(string name) {

    cout << name << endl;
}

void selamla(string name1, string name2)
{
    cout << name1 << " - " << name2 << endl;
}

int main()
{
    selamla();
    selamla("Benim Adim Name");
    selamla("ahmet", "mehmet");

    return 0;
}

