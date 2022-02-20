#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,P,S;
    std::cout << "Perimetr elipsa"<< std::endl;
    std::cin >> a >> b;
    P = (4*(M_PI*a*b+((a-b)*(a-b))))/(a+b);
    std::cout << "P="<< P<< std::endl;
    std::cout << "Ploshad elipsa"<< std::endl;
    std::cin >> a >> b;
    S = M_PI*a*b;
    std::cout << "S=" << S << std::endl;

    return 0;
}
