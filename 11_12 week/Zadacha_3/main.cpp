#include <iostream>

using namespace std;

struct robot{
    int gab, m, v;
};

void Fast(robot a, robot b){
    if (a.v > b.v)
        std::cout << a.gab << "\t" << a.m << "\t" << a.v;
    else
        std::cout << b.gab << "\t" << b.m << "\t" << b.v;
}

int main(){
    robot a,b;
    std::cin >> a.gab >> a.m >> a.v
             >> b.gab >> b.m >> b.v;
    Fast(a, b);
 return 0;
}
