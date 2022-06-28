#include <iostream>

bool Even(int k){
    if (k % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
    int num;
    srand(0);
    for(int i = 0; i<10; i++){
        num = rand() % 100;
        std::cout << num << std::endl;
        std::cout << Even (num)<< std::endl;
    }
    return 0;
}
