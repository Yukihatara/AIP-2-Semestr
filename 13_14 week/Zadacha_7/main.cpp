#include <iostream>
#include <ctime>
using namespace std;
/*16.	Багаж пассажира характеризуется количеством вещей и общим весом.
a.	Ввести информацию об N пассажирах и определить есть ли среди пассажиров такой,
у которого самый большой багаж по числу и по весу.
b.	Ввести информацию об N пассажирах и определить есть ли среди пассажиров такой,
у которого самый большой багаж по числу и наименьший по весу.
c.	Ввести информацию об N пассажирах и определить есть ли среди пассажиров такой,
у которого самый маленький багаж по числу и по весу
*/


struct Voyage{
    int n,v;      // >>>> n - колл вещей, v - вес
};

int main()
{
    srand(time(NULL));
    int N;
    std::cin >> N;
    Voyage Pass[N];
    for(int i = 0; i < N; i++){
        Pass[i].n = rand() % 40;
        Pass[i].v = rand() % 41 + 20;
        cout << Pass[i].n << "\t" << Pass[i].v<< endl;
    }
    int n1 = 0;
    int v1 = 0;
    int n2 = 0;
    int v2 = 100;
    int n3 = 100;
    int v3 = 100;
    for(int i = 0; i < N; i++){
        // наибольший багаж по числу и весу
        if((Pass[i].n > n1)&&(Pass[i].v > v1)){
            v1 = Pass[i].v;
            n1 = Pass[i].n;
        }
    }
    std::cout << n1 << "\t" << v1 << endl;
    for(int i = 0; i < N; i++){
        //наибольший по числу и наименьший по весу
        if((Pass[i].n > n2)&&(Pass[i].v < v2)){
            v2 = Pass[i].v;
            n2 = Pass[i].n;
        }
    }

     std::cout << n2 << "\t" << v2 << endl;
     for(int i = 0; i < N; i++){
         //наименьший по весу и вещам
        if((Pass[i].n < n3)&&(Pass[i].v < v3)){
            v3 = Pass[i].v;
            n3 = Pass[i].n;
         }
     }
     std::cout << n3 << "\t" << v3 << endl;


    return 0;
}
