#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    srand(time(NULL));
    int arr[20];
    for(int i=0; i<20; i++){
        arr[i]=rand()%11 + 10;
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
