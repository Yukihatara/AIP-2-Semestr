#include <iostream>
#include <cmath>

using namespace std;

struct CompNum {
    float Re, Im;
};

float Sum(CompNum a, CompNum b, float &left, float &right){
    left = (a.Re + b.Re);
    right = (a.Im+b.Im);
    return(left && right);
}

int main()
{
    float a1, a2, b1, b2, left, right;
    std::cin >> a1 >> a2 >> b1 >> b2;
    cout << a1
         << "\t"
         << a2
         << "\t"
         << b1
         << "\t"
         << b2;
    CompNum a = {a1, a2};
    CompNum b = {b1, b2};
    Sum(a, b, left, right);
    std::cout << left << "+" << right << "*i" << endl;

    return 0;
}
