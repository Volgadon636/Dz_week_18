
#include <iostream>
using namespace std;
class complex_num {
    int i = sqrt(-1);

public:
    int a, b;
    int get_i() {
        return i;
    }
    long long z;
    complex_num(int _a, int _b) {
        a = _a;
        b = _b;
        z = a + b * i;
    }
    void cout_com_num(int a, int b) {
        if (a == 0 && b == 0) {
            cout << "complex number is: " << a << endl;
        }
        else if (a == 0 && b > 0) {
            cout << "complex number is: " << b << "i" << endl;
        }
        else if (a == 0 && b > 0) {
            cout << "complex number is: " << b << "i" << endl;
        }
        else if (b == 0 && a > 0) {
            cout << "complex number is: " << a << endl;
        }
        else if (b == 0 && a < 0) {
            cout << "complex number is: " << a << endl;
        }
        else if (b < 0) {
            cout << "complex number is: " << a << " - " << b * (-1) << "i" << endl;
        }
        else if (b > 0) {
            cout << "complex number is: " << a << " + " << b << "i" << endl;
        }

    }
};

int main()
{
    int a, b;
    cout << "enter a and b: "; cin >> a >> b;
    complex_num z1(a, b);
    z1.cout_com_num(z1.a, z1.b);


}
