#include <iostream>

using namespace std;

int main()
{
    float ar,ag;
    int a,b,c;
    std::cin >> a >> b >> c;
    ar = (a+b+c)/3;
    ag = (2*(a+c))-(3*c);
    std::cout << "ar=" << ar << std::endl << "ag=" << ag << std::endl;

    return 0;
}
