#include <iostream>
#include <ctime>
using namespace std;
//14.	Создать новый массив из двух других массивов путём операций над элементами массивов: вычитание

int main()
{
    srand (time(NULL));
    int arr1[20];
    for(int i = 0; i < 20; i++){
        arr1[i] = rand() % 21;
    }
    int arr2[20];
    for(int i = 0; i < 20; i++){
        arr2[i] = rand() % 21;
    }
    int arr3[20];
    for(int i = 0; i < 20; i++){
        arr3[i] = arr2[i] - arr1[i];
        std::cout << arr3[i] << std::endl;
    }

    return 0;
}
