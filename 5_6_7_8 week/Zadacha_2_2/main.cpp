#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float dx,xf,x;
    float y;
    std::cout << "Solve function. \nEnter dx: ";
    std::cin >> dx;
    std::cout << "Enter x0: ";
    std::cin >> x;
    std::cout << "Enter xf: ";
    std::cin >> xf;

    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    while (x < xf){
        y=sqrt(2+3*x)+72*x+sin(4*x+31)/cos(4*x+31);
        std::cout<<"\t"
                <<x
                <<"\t\t"
                << y
                <<std::endl;
        x+=dx;
    }
    return 0;
}
