
#include <iostream>

using namespace std;

int main()
{
    string parola = "123456";

    string input;

    do {
        cout << "Parolanizi Giriniz : ";
        cin >> input;

        if (input != parola)
        {
            cout << "Parolayi Yanlis Girdiniz..." << endl;
        }
    } while (input != parola);

    cout << "Hosgeldiniz..." << endl;

    return 0;
}

