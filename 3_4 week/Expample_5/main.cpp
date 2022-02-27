#include <iostream>

using namespace std;

int main()
{
    float C; // C - candy
    float B; // B - biscuits
    std::cin >> C >> B;
    //std::cout << "C = " << C << std::endl << "B = " << B << std::endl;
    float a = 0.3*C + 0.4*B;
    float b = 1.8*C + 2*B;
    std::cout << "a = " << a << std::endl << "3b = " << 3*b << std::endl;
    std::getchar();
    return 0;
}
