#include <iostream>
#include <ctime>
#include <cmath>
//Увеличить все нечетные элементы массива на 3, а чётные в 2 раза.
using namespace std;

int main()
{
    srand (time(NULL));
    int arr[11];
    for(int i = 0; i < 11; i++){
        arr[i] = rand() % 21;
        std::cout << arr[i] << std::endl;
    }
    for(int i = 0; i < 11; i++){
        if(arr[i] % 2 == true)
            arr[i] = arr[i] + 3;
        else
            arr[i] = arr[i] * 2;
        std::cout << "\t\t" << arr[i] << std::endl;
    }
    return 0;
}
