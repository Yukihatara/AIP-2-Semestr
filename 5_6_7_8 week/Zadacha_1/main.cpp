#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i < 6; i++){
        for(int j=0; j < i; j++)
            std::cout << 0;
        std::cout << std::endl;
    }
    return 0;
}
