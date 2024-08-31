#include <iostream>
#include <string>
using namespace std;
//1 task start
class complex_num {

public:
    int a, b;
    complex_num(int _a, int _b) {
        a = _a;
        b = _b;
        
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
//1 task end

//2 task start
class car {
public:
    float length
        ,clearance
        ,volume_e
        ,power
        ,diametr_w;

    string colour;
    string type_transsion;
    string name;
    
    
};
void enter_c(car &a) {
    cout << "Enter the name of your car: ";cin>> a.name; 
    cout << "\n";
    cout << "enter length of the car: (M) "; cin >> a.length;
    cout << "enter clearance of the car: (mm) "; cin >> a.clearance;
    cout << "enter volume of the engine for the car: (M^3) "; cin >> a.volume_e;
    cout << "enter power of the engine for the car: (HP) "; cin >> a.power;
    cout << "enter diametr of wheels for the car: (mm) "; cin >> a.diametr_w;
    cout << "enter colour of the car: "; getline(cin, a.colour);
    cout << "enter a type of transsion for the car: "; getline(cin, a.type_transsion);
}
void cout_c (car a) {
    cout << "Name of your car: " << a.name << "\n\n";
    cout << "length of the car: (M) " << a.length << endl;
    cout << "clearance of the car: (mm) " << a.clearance << endl;
    cout << "volume of the engine for the car: (M^3) " << a.volume_e << endl;
    cout << "power of the engine for the car: (HP) " << a.power << endl;
    cout << "diametr of wheels for the car: (mm) " << a.diametr_w << endl;
    cout << "colour of the car: " << a.colour << endl;
    cout << "Type of transsion for the car: " << a.type_transsion << endl << endl;
}
int main()
{
    setlocale(LC_ALL, "rus");
   
    {
        cout << "\texercise 2\n\n";
        int ch =0, e = 0;
        const unsigned short size_a = 20;
        car array[size_a];
        do {
            cout << "Список действий: " << endl;
            cout << "1. задание значений" << endl;
            cout << "2. вывод машин списком" << endl;
            cout << "3. поиск" << endl;
            cout << "0. чтобы выйти" << endl;
            cout << "\nEnter your decision: "; cin >> ch;
            car r;
            switch (ch)
            {

            case 1: 
            {
                
                enter_c(r);
                
                array[e] = r;
                e += 1;


                
                break;
            }
            case 2:
            {
                cout << "List of your cars: \n" << endl;
                cout_c(r);
                /*for (short i = 0; i < size_a; ++i) {
                    cout_c(array[i]);
                }*/
                break;
            }
            case 3:
            {

            }
              

            }
            
        } while (ch != 0);
        


        



    }
    system("pause");
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
    system("pause");
}
