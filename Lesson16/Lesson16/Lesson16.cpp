#include <iostream>

using namespace std;

//void selamla();
void factorial(int a) {

    int faktoriyel = 1;

    for (int i = 1; i <= a; i++)
    {
        faktoriyel *= i;
    }
    cout << faktoriyel << endl;
}

int main()
{

    int a;
    //selamla(); //fonksiyon cagrisi (function call)
    cout << "Faktoriyel Giriniz : ";
    cin >> a;


    factorial(a);


}
/*
void selamla() {

    cout << "Naber?" << endl;
    cout << "Nasilsin?" << endl;

}
*/
