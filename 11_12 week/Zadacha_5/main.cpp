#include <iostream>

using namespace std;

struct car{
  int num, v,t;
};

int Stv(car y){
    return(y.v * y.t);
}

int main()
{
    car y;
    std::cin >> y.num >> y.v >> y.t;
    Stv(y);
    std::cout << Stv(y);

    return 0;
}
