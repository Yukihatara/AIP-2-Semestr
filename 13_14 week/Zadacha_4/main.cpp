#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
//11.	Вывести элементы массива, меньших среднего арифметического
int main()
{
    short int sum = 0;
    float sra = 0;
    srand (time(NULL));
    short int arr[20];
    for(int i = 0; i < 21; i++){
        arr[i] = rand() % 21;
    }
    for(int i = 0; i < 21; i++)
        sum = sum + arr[i];
    sra = sum / 21;
    std::cout << sra << std::endl;
    for(int i = 0; i < 21; i++){
        if (arr[i] < sra)
            std::cout << arr[i] << endl;
    }
    return 0;
}
