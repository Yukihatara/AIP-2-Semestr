#include <iostream>
#include <ctime>
using namespace std;
//5.	Найти наибольший/наименьший элемент массива и его номер по порядку

int main()
{
    srand (time(NULL));
    int arr[20];
    for(int i = 0; i < 20; i++)
        arr[i] = rand() % 21;

    int num1 = 0;
    int pos1 = 0;
    for(int i = 0; i < 20; i++){
        if (arr[i] > num1){
            num1 = arr[i];
            pos1 = i;
        }

    }
    std::cout << num1 << "-" << pos1 << std::endl; //наибольший элемент

    int num2 = 100;
    int pos2 = 0;
    for(int i = 0; i < 20; i++){
        if (arr[i] < num2){
            num2 = arr[i];
            pos2 = pos2 + i;
        }
    }
        std::cout << num2 << "-" << pos2; //наибольший элемент
    return 0;
}
