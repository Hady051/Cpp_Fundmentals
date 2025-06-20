// a program to convert a temperature from fahrenheit to celsius

#include <iostream>

using namespace std;

int main() {
    cout << "Fahrenheit degree: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit -32) / 1.8;
    cout << "celsius degree: " << celsius;


    return 0;
}
