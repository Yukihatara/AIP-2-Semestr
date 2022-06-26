#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=10;
    float x;
    std::cin >> x;
    float ch = 3;
    float zn = 7*x;
    float y = 0;

    for(int i=0; i<n; i++){
        ch = ch+1;
        zn = zn+2*x;
        y = y+ch/zn;
        std::cout << y << std::endl;

    }
    std::cout << y;
    return 0;
}
