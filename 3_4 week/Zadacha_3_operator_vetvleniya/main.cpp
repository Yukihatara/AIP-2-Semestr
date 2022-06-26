#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float R = 1; //R^2=x^2+y^2
    const float r = 0.3; //r^2=x^2+y^2
    float x,y;
    std::cin >> x >> y;
    float L = sqrt(x*x+y*y);
    if ((L<R)&&(y>0)&&(x<0)&&(x>+sqrt(r*r-y*y))&&(y>+sqrt(r*r-x*x)))
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
