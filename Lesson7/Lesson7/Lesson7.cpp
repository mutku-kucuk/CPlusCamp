// Lesson7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    string islem;

    cout << "Hesap Makinesi Programina Hosgeldiniz..." << endl;

    cout << "1. Islem : Toplama Islemi" << endl;
    cout << "2. Islem : Cikarma Islemi" << endl;
    cout << "3. Islem : Carpma Islemi" << endl;
    cout << "4. Islem : Bolme Islemi" << endl;

    cout << "Islemi Giriniz: ";
    cin >> islem;

    if (islem == "1")
    {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "Sonuc: " << a + b << endl;
    }
    else if (islem == "2")
    {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "Sonuc: " << a - b << endl;
    }
    else if (islem == "3")
    {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "Sonuc: " << a * b << endl;
    }
    else if (islem == "4")
    {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "Sonuc: " << a / b << endl;
    }
    else {
        cout << "Yanlis Bir Tuslama Yaptiniz..." << endl;
    }

    return 0;
}

