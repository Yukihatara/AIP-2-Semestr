#include <iostream>
#include <cmath>
using namespace std;

struct time{
  long int hour,min,sec;
};
long int Podschet(time one, time two){
    one.min = 60 * one.hour;
    one.sec = 60 * one.min;
    two.min = 60 * two.hour;
    two.sec = 60 * two.min;
    return(abs(one.sec - one.min));
}

int main()
{
    time one, two;
    std::cin >> one.hour >> one.min >> one.sec
             >> two.hour >> two.min >> two.sec;
    Podschet(one, two);
    std::cout << Podschet(one, two);
    return 0;
}
