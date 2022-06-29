#include <iostream>
#include <ctime>
//вычислить сумму элементов массива больших 5, меньших 7, больших 3
using namespace std;

int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    srand(time(NULL));
    int arr[20];
    for(int i = 0; i < 20; i++){
        arr[i]=rand()% 21;
        std::cout << arr[i] << std::endl;
    }
    for(int i = 0; i < 20; i++){
        if (arr[i] > 5)
            sum1 = sum1 + arr[i];
    }
    std::cout << sum1 << "\t\t";
    for(int i = 0; i < 20; i++){
        if(arr[i] < 7)
            sum2 = sum2 + arr[i];
    }
    std::cout << sum2 << "\t\t";
    for(int i = 0; i < 20; i++){
        if(arr[i] > 3)
            sum3 = sum3 + arr[i];
    }
    std::cout << sum3;



    return 0;
}
