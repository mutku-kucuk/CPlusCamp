// Lesson11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    
    int sayi;

    cout << "Sayi : ";
    cin >> sayi;
    // 5! = 5 4 3 2 1

    int faktoriyel = 1;

    for (int i = 1; i <= sayi ; i++)
    {
        faktoriyel *= i;

    }
    cout << "Faktoriyel : " << faktoriyel << endl;




    return 0;

}
