#include <iostream>

using namespace std;

int main() {
    int number = 1'000'000;
    short another = number;

    cout << number << endl
         << another;    // gives 16950, since the range of short is 32,000, data loss occurs
    return 0;
}
