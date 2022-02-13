// Lesson15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int islem;

    cout << "Islemi Giriniz : " << endl;
    cin >> islem;

    switch (islem)
    {

    case 1:
        cout << "1. Islemi Sectiniz..." << endl;
        break;
    case 2:
        cout << "2. Islemi Sectiniz..." << endl;
        break;
    case 3:
        cout << "3. Islemi Sectiniz..." << endl;
        break;
    case 4:
        cout << "4. Islemi Sectiniz..." << endl;
        break;


    default:
        break;
    }

    return 0;
}
