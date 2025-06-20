// write a program to calculate the area of a circle

# include <iostream>
# include <cmath>

using namespace std;

int main() {
    double radius;
    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;
    const double pi = 3.14;
    double circle_area = pi * pow(radius,2);
    cout << "The area of the circle = " << circle_area << endl;


    return 0;
}
