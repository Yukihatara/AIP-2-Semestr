#include <iostream>

using namespace std;

int main()
{
    float a; //chislo
    int b; //stepen
    std::cin >> a >> b;
    float n = a;
    for(int i=1; i<b; i++){
        n = n*a;
        std::cout << n << std::endl;
    }

    return 0;
}
