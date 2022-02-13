
#include <iostream>

using namespace std;

int main()
{
	/*
	Break: Dongude break deyimi calistirildi zaman dongu anında sona erer.
	Continue: Dongude continue deyimi calistirildigi zaman dongu altindaki komutlari calistirmadan basa doner;
	*/

	/*
	int i = 0;
	while (i < 10) {
		if (i==5)
		{
			break;
		} 
			cout << "i : " << i << endl;
			i++;
	}
	*/


	/*
	for (int i = 0; i < 10; i++)
	{
		if (i == 3 || i == 5)
		{
			continue;
		}
		cout << "i : " << i << endl;

	}
	*/

	/*
	int i = 0;
	while (i < 10) {
		if (i == 3 || i == 5) {
			i++;
			continue;
		}
		cout << "i : " << i << endl;
	}
	*/

	string sys_username = "utku_kucuk", sys_password = "123456";

	string username, password;

	while (true)
	{
		cout << "Kullaniciz Adi : ";
		cin >> username;
		cout << "Parola : ";
		cin >> password;

		if (username == sys_username && password == sys_password)
		{
			cout << "Hosgeldiniz... " << endl;
			break;
		}
		else if (username == sys_username && password != sys_password)
		{
			cout << "Sifreniz Hatali... " << endl;
		}
		else if (username != sys_username && password == sys_password)
		{
			cout << "Kullanici Adiniz Hayali... " << endl;
		}
		else {
			cout << "Kullanici Adiniz ve Sifreniz Hatali... " << endl;
		}

	}

	return 0;


}

