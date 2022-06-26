#include <iostream>

using namespace std;

int main()
{
    //задание j
/*  int x,y;
    std::cin >> x;
    if(x>5)
        y=3*x-5;
    if(x==5)
        y=10;
    if(x<5)
        y=2*(abs(x-2))+5;
    std::cout <<"y= "<< y;
*/
    int x,y;
    std::cin >> x;
    if(x>0)
        y=1.5*x+5;
    if(x==0)
        y=-2;
    if(x<0)
        y=2*(abs(x+2))-7;
    std::cout <<"y= "<< y;

    return 0;
}
