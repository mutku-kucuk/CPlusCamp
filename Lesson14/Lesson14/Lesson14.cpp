// Lesson14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    /*
    int matris[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

    cout << matris[0][1] << endl;
    cout << matris[2][2] << endl;
    cout << matris[1][2] << endl;
    */

    /*
    int matris[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
    */

    int matris[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i << j << ". indexi giriniz : ";
            cin >> matris[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
