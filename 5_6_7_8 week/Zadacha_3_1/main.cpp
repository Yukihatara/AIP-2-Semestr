#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=10;
    int s = 2;
    int t = 3;
    float x;
    cin >> x;
    float y=x;
    for(int i=0; i<n; i++){
        s = s+1;
        t=t+1;
        y=y+pow(x,s)/t;
        std::cout <<y << std::endl;

    }
    std::cout <<y;
    return 0;
}
