#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float r = 2;
    float x,y;
    std::cin >> x >> y;
    float l = sqrt(x*x+y*y);
    if((l>r)&&(x<2)&&(y<x))
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
