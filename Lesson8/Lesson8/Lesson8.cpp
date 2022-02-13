

#include <iostream>

using namespace std;

int main()
{
    
    string sys_username = "utku_kucuk";
    string sys_password = "123456";

    string username;
    string password;

    cout << "Kullanici Adinizi Giriniz : ";
    cin >> username;

    cout << "Parola : ";
    cin >> password;

    if (sys_username == username && sys_password == password)
    {
        cout << "Hosgeldiniz" << endl;
    }
    else if (sys_username != username && sys_password == password) {
        cout << "Kullanici Adiniz Hatali..." << endl;
    }
    else if (sys_username == username && sys_password != password)
    {
        cout << "Sifreniz Hatali..." << endl;
    }
    else {
        cout << "Kullanici Adi ve Sifre Hatali" << endl;
    }


    return 0;

}


