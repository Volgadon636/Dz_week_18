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

void complex_sum(complex_num z1, complex_num z2) {

    int sum_1 = z1.a + z2.a;
    int sum_2 = z1.b + z2.b;
    if (sum_1 == 0 && sum_2 == 0) {
        cout << "the sum is: " << 0 << endl;
    }
    else if (sum_2 > 0) {
        cout << "the sum is: " << sum_1 << " + " << sum_2 << "i" << endl;
    }
    else if (sum_2 < 0) {
        cout << "the sum is: " << sum_1 << " - " << sum_2 * (-1) << "i" << endl;
    }
    else if (sum_2 == 0) {
        cout << "the sum is: " << sum_1 << endl;
    }
}


void complex_min(complex_num z1, complex_num z2) {

    int min_1 = z1.a - z2.a;
    int min_2 = z1.b - z2.b;

    if (min_1 == 0 && min_2 == 0) {
        cout << "the min is: " << 0 << endl;
    }
    else if (min_1 == 0) {
        cout << "the min is: " << min_2 << "i" << endl;
    }
    else if (min_2 > 0) {
        cout << "the min is: " << min_1 << " + " << min_2 << "i" << endl;
    }
    else if (min_2 < 0) {
        cout << "the min is: " << min_1 << " - " << min_2 * (-1) << "i" << endl;
    }
    else if (min_2 == 0) {
        cout << "the min is: " << min_1 << endl;
    }
}

void complex_mul(complex_num z1, complex_num z2) {
    int part1 = z1.a * z2.a - z1.b * z2.b;
    int part2 = z1.b * z2.a + z1.a * z2.b;
    if (part1 == 0 && part2 == 0) {
        cout << "the mul is: " << 0 << endl;
    }
    else if (part1 == 0) {
        cout << "the mul is: " << part2 << "i" << endl;
    }
    else if (part2 == 0) {
        cout << "the mul is: " << part1 << endl;
    }
    else {
        cout << "the mul is: " << part1 << " + " << part2 << "i" << endl;
    }

}
void complex_div(complex_num z1, complex_num z2) {
    //Формула здесь сложная, поэтому осуществлю только вывод формулы
    cout << "the div is: " << z1.a << " + " << z1.b << "i / " << z2.a << " + " << z2.b << "i = ( " << z1.a << " + " << z1.b << "i ) (" << z2.a << "-" << z2.b << "i ) / " << z2.a << "^2 + " << z2.b << "^2" << "* i" << endl;

}

int main()
{

    {
        cout << "\texercise 1\n\n";
        int a, b, c, d;
        cout << "enter first complex num (a and b): "; cin >> a >> b;
        cout << "enter second complex num (c and d): "; cin >> c >> d;
        complex_num z1(a, b);
        complex_num z2(c, d);
        cout << "\tFIRST\n\n";
        z1.cout_com_num(z1.a, z1.b);
        cout << "\n\tSECOND\n\n";
        z2.cout_com_num(z2.a, z2.b);
        cout << "\n\n";
        complex_sum(z1, z2);
        complex_min(z1, z2);
        complex_mul(z1, z2);
        complex_div(z1, z2);
    }
}
