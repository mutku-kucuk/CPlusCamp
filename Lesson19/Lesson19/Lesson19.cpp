#include <iostream>

using namespace std;

/*
void degerDegistir(int af) {
	af = 20;
	cout << "Fonksiyonun Icindeki Deger : " << af << endl;
}
*/

/*
int main()
{
	int a = 10;
	cout << "a degiskenin degeri : " << a << endl;
	degerDegistir(a);
	cout << "fonksiyon bittikten sonra a degiskenin degeri : " << a << endl;

	return 0;
}
*/

void degerDegsiter(int *ptr) {
	*ptr = 20;
	cout << "Fonksiyon Icindeki Degeri " << *ptr <<endl;
}

int main()
{
	int a = 10;
	cout << "Sayinin Degeri " << a << endl;
	degerDegsiter(&a);
	cout << "Degisen Sayinin Degeri " << a << endl;

	return 0;
}