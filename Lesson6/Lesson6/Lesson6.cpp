// Lesson6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

	string password = "utku";
	string input;

	cout << "Sifrenini Giriniz: ";
	cin >> input;
	
	if (password == input)
	{
		cout << "Parolanizi Dogru Girdiniz...";
	}
	else
	{
		cout << "Parolanizi Yanlis Girdiniz...";
	}
	return 0;
}
