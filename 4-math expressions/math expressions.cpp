# include <iostream>

int main() {
    int x = 10;
    int y = 3;
    int z = x + y;
    std::cout<<z<<std::endl;

    int z1 = x / y;
    std::cout<<z1<<std::endl;

    double x2 = 10;
    double y2 = 3;
    double z2 = x2 / y2;
    std::cout<<z2<<std::endl;  // or I can code "using namespace std" above and i don't have to type it


    int x3 = 14;
    int y3 = 3;
    int z3 = x3 % y3;
    std::cout<<z3<<std::endl;


    int a = 10;
    a = a + 5;
    std::cout << a;

    int c = 8;
    int b = c++;
    std::cout << b <<std::endl;
    std::cout << c;  // b = 8, c = 9

    int d = ++c;
    std::cout << d<<std::endl;
    std::cout << c;  // d = 10, c = 10

    return 0;
}