#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x = -2.34;
    float y;
    y = (fabs(x-5)-sin(x))/3+(sqrt(x*x+2014)*cos(2*x))-3;
    std::cout << "y = " << y << std::endl;
    return 0;
}
