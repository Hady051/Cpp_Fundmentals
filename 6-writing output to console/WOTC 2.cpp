# include <iostream>

using namespace std;

int main() {
    //int x = 10;
    //int y = 20;

    //cout<< "x = " << x << endl
    //    << "y = " << y;

    //// excercise
    ///sales = 95000, state tax = 4%, county tax = 2%, show your total sales as well as the taxes

    double sales = 95000;

    const double state_tax_rate = (4.0 / 100);   //or 0.04
    double state_tax = sales * state_tax_rate;

    const double county_tax_rate = (2.0 / 100);   // or 0.02
    double county_tax = sales * county_tax_rate;

    double profit = sales - (state_tax + county_tax);

    cout << "The total sales are: " << sales << " $" << endl
         << "The state tax is: " << state_tax << endl
         << "The county tax is: " << county_tax << endl
         << "The amount of sales after taxes: " << profit << " $"<< endl;

    return 0;
}