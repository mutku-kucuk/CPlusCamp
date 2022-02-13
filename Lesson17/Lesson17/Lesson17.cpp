
#include <iostream>

using namespace std;

int toplama(int a, int b, int c) {
    return a + b + c;

}

int main()
{
    int a, b, c;
    cout << "3 Deger Giriniz:";
    cin >> a;
    cin >> b;
    cin >> c;
    int toplam;
    toplam = toplama(a, b, c);
    cout << "Toplam : " << toplam << endl;


}
