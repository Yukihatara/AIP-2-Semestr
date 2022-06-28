#include <iostream>

using namespace std;\

void fun(float X, int x, float &y){
    if (X > 1)
        y = 3*x-7;
    if (X == 1)
        y = 3;
    if (X < 1)
        y = 3*(abs(x+2))-7;
}
int main()
{
    int X, x, xf, dx;
    float y;
    cin >> X >> x >> dx >> xf;
    //fun (X, x, y);
    while (x < xf){
        fun (X, x, y);
        std::cout << "\t"
                  << x
                  << "\t\t"
                  << y
                  << std::endl;
        x+=dx;
    }

    return 0;
}

