#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main()
{
    cout << left;
    cout << setw(15) << "Celsius"
        << setw(15) << "Fahrenheit"
        << setw(5) << "|"
        << setw(15) << "Fahrenheit"
        << setw(15) << "Celsius" << endl;

    double celsius = 40.0;
    double fah = 120.0;

    cout << fixed << setprecision(2);

    for (int i = 0; i <= 9; i++) {
        cout << setw(15) << celsius;
        cout << setw(15) << celsius_to_fah(celsius);

        cout << setw(5) << "|";
         
        cout  << setw(15) << fah;
        cout  << setw(15) << fah_to_celsius(fah);

        cout << endl;

		celsius -= 1.0;
        fah -= 10.0;
    }

    return 0;
}