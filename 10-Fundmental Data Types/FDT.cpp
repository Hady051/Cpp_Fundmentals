# include <iostream>

using namespace std;

int main () {
    /*
    *double price = 99.99;
    *float interestRate = 3.67f;
    *long fileSize = 90000l;
    *char letter = 'a';
    *bool isValid = false;
    */

    // in c# we used 'var' in front of all types, in c++ we use 'auto'
    // don't forget the specifiers/suffix though

    auto price = 99.99;
    auto interestRate = 3.67f;
    auto fileSize = 90000l;
    auto letter = 'a';    //this is a char type which uses single quotes
    auto isValid = false;

    /* a different way of initialization, this one is better because
     * if you declare an empty variable, the variable has 0 not a random value
     */

    int number {2};
    cout << number << endl;

    int num {};
    cout << num;


    return 0;
}