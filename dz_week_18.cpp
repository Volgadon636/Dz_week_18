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
    cout << "Enter the name of your car: ";getline(cin,a.name); cout << "\n";
    
    cout << "enter length of the car: (M) "; cin >> a.length; cout << "\n";
    cout << "enter clearance of the car: (mm) "; cin >> a.clearance; cout << "\n";
    cout << "enter volume of the engine for the car: (M^3) "; cin >> a.volume_e; cout << "\n";
    cout << "enter power of the engine for the car: (HP) "; cin >> a.power; cout << "\n";
    cout << "enter diametr of wheels for the car: (mm) "; cin >> a.diametr_w; cout << "\n";
    cout << "enter colour of the car: ";getchar();getline(cin, a.colour); cout << "\n";
    cout << "enter a type of transsion for the car: ";getline(cin, a.type_transsion); cout << "\n";
}
void cout_c (car a) {
    cout << "\n\tName of your car: " << a.name << "\n\n";
    cout << "length of the car: (M) " << a.length; cout << "\n\n";
    cout << "clearance of the car: (mm) " << a.clearance; cout << "\n\n";
    cout << "volume of the engine for the car: (M^3) " << a.volume_e; cout << "\n\n";
    cout << "power of the engine for the car: (HP) " << a.power; cout << "\n\n";
    cout << "diametr of wheels for the car: (mm) " << a.diametr_w; cout << "\n\n";
    cout << "colour of the car: " << a.colour; cout << "\n\n";
    cout << "Type of transsion for the car: " << a.type_transsion; cout << "\n\n\n";
}


int main()
{
    setlocale(LC_ALL, "rus");
   
    /*car w1;
    enter_c(w1);
    cout_c(w1);
    system("pause");
    */


    
    {
        cout << "\texercise 2\n\n";
        int ch =0, e = 0;
        const unsigned short size_a = 20;
        unsigned short act_size = 0;
        car array[size_a];
        do {
            cout << "Список действий: " << endl;
            cout << "1. задание значений" << endl;
            cout << "2. вывод машин списком" << endl;
            cout << "3. поиск по имени" << endl;
            cout << "0. чтобы выйти" << endl << endl;

            cout << "\nEnter your decision: ";
            cin >> ch;
            
            getchar();
            system("cls");
            switch (ch)
            {

            case 1: 
            {
                act_size += 1;
                car r;
                enter_c(r);
                
                array[e] = r;
                e += 1;


                
                break;
            }
            case 2:
            {
                
                cout << "List of your cars: \n" << endl;
                
                for (short i = 0; i < act_size; ++i) {
                    cout_c(array[i]);
                }
                break;
            }
            case 3:
            {
                string search_w;
                unsigned short search_n;
                char choice;
                unsigned short g;
                cout << "Выбор поиска: " << endl;
                cout << "1. по имени" << endl;
                cout << "2. длинна машины" << endl;
                cout << "3. Клиренс" << endl;
                cout << "4. Объем двигателя" << endl ;
                cout << "5. Мощность двигателя" << endl;
                cout << "6. Диаметр колес" << endl;
                cout << "7. Цвет" << endl;
                cout << "8. Тип трансмиссии" << endl;
                cout << "0. Чтобы выйти" << endl;
                cout << "\n\nEnter your decision: ";
                cin >> choice;

                getchar();
                cout << "\n";
                switch (choice) {
                case '1':
                {
                    cout << "Enter the name of car, which you wanna find: "; getline(cin, search_w);
                    cout << "List of cars according to your choice: \n" << endl;
                    int g = 0;
                    for (int i = 0; i < size_a; ++i) {
                        if (array[i].name == search_w) {
                            cout_c(array[i]);
                        }
                        else {
                            ++g;
                        }
                    }
                    if (g == size_a) {
                        cout << "there are no cars with this name!\n\n";
                    }
                    break;
                }
                case '2':
                {
                    cout << "Enter the length of car, which you wanna find: ";cin>>search_n;
                    cout << "List of cars according to your choice: \n" << endl;
                    int g = 0;
                    for (int i = 0; i < size_a; ++i) {
                        if (array[i].length == search_n) {
                            cout_c(array[i]);
                        }
                        else {
                            ++g;
                        }
                    }
                    if (g == size_a) {
                        cout << "there are no cars with this name!\n\n";
                    }
                    break;
                }
                case '3':
                {
                    cout << "Enter the clearance of car, which you wanna find: "; cin >> search_n;
                    cout << "List of cars according to your choice: \n" << endl;
                    int g = 0;
                    for (int i = 0; i < size_a; ++i) {
                        if (array[i].clearance == search_n) {
                            cout_c(array[i]);
                        }
                        else {
                            ++g;
                        }
                    }
                    if (g == size_a) {
                        cout << "there are no cars with this name!\n\n";
                    }
                    break;
                }
                case '4':
                {
                    cout << "Enter the volume of the engine of this car, which you wanna find: "; cin >> search_n;
                    cout << "List of cars according to your choice: \n" << endl;
                    int g = 0;
                    for (int i = 0; i < size_a; ++i) {
                        if (array[i].volume_e == search_n) {
                            cout_c(array[i]);
                        }
                        else {
                            ++g;
                        }
                    }
                    if (g == size_a) {
                        cout << "there are no cars with this name!\n\n";
                    }
                    break;
                }
                case '5':
                {
                    cout << "Enter power of the engine of this car, which you wanna find: "; cin >> search_n;
                    cout << "List of cars according to your choice: \n" << endl;
                    int g = 0;
                    for (int i = 0; i < size_a; ++i) {
                        if (array[i].power== search_n) {
                            cout_c(array[i]);
                        }
                        else {
                            ++g;
                        }
                    }
                    if (g == size_a) {
                        cout << "there are no cars with this name!\n\n";
                    }
                    break;
                }
                case '6':
                {
                    cout << "Enter the diametr of wheels for this car, which you wanna find: "; cin >> search_n;
                    cout << "List of cars according to your choice: \n" << endl;
                    int g = 0;
                    for (int i = 0; i < size_a; ++i) {
                        if (array[i].diametr_w == search_n) {
                            cout_c(array[i]);
                        }
                        else {
                            ++g;
                        }
                    }
                    if (g == size_a) {
                        cout << "there are no cars with this name!\n\n";
                    }
                    break;
                }
                case '7':
                {
                    cout << "Enter the colour of this car, which you wanna find: "; cin >> search_w;
                    cout << "List of cars according to your choice: \n" << endl;
                    int g = 0;
                    for (int i = 0; i < size_a; ++i) {
                        if (array[i].colour == search_w) {
                            cout_c(array[i]);
                        }
                        else {
                            ++g;
                        }
                    }
                    if (g == size_a) {
                        cout << "there are no cars with this name!\n\n";
                    }
                    break;
                }
                case '8':
                {
                    cout << "Enter the type of transmittion for this car, which you wanna find: "; cin >> search_w;
                    cout << "List of cars according to your choice: \n" << endl;
                    int g = 0;
                    for (int i = 0; i < size_a; ++i) {
                        if (array[i].type_transsion == search_w) {
                            cout_c(array[i]);
                        }
                        else {
                            ++g;
                        }
                    }
                    if (g == size_a) {
                        cout << "there are no cars with this name!\n\n";
                    }
                    break;
                }
                case '0': {
                    break;
                }
                }
                
                
                break;
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
