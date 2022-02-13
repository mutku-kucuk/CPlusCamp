#include <iostream>

using namespace std;

class Test {
private:
    int a;
public:
    Test(int a) {
        this->a = a;
    }
    void test() {
        cout << "Test Metodu" << endl;
    }
    int getValue() const{ //Bu metod herhangi bir degeri degistiremez. Const olmayan metodlari cagiramaz.
        //this->a = 20; degisim olmaz hata
        //test(); const olmayan metod hata
        return this->a;
    }
};

int main()
{
    Test test1(10);
    cout << test1.getValue() << endl;

    return 0;
}



