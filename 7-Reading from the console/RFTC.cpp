#include <iostream>

using namespace std;

int main() {
    //cout << "Enter a value: ";
    //int value;
    //double value;
    //cin >> value;
    //cout << value;

    cout << "Enter values for x and y: ";
    double x;
    double y;
    cin >> x;   // cin >> x >> y; does the same while being shorter
    cin >> y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "The addition of both numbers are: " << x + y << endl;

    return 0;
}

