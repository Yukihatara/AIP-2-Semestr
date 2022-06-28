#include <iostream>
#include <cmath>
/*8.Описать функцию RingS(R1, R2) вещественного типа,
находящую площадь кольца, заключенного между двумя окружностями
с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2).
С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.
Воспользоваться формулой площади круга радиуса R: S = π·R2. В качестве значения π использовать 3.14.*/

const int pi = 3.14;

using namespace std;

float RingS(float R1, float R2, float &S1, float &S2, float &S3){
    S1 = pi*R1*R1;
    S2 = pi*R2*R2;
    S3 = S1-S2;
    return(0);

}

int main()
{
    float R1,R2,S1,S2,S3;
    cin >> R1 >> R2;
    RingS(R1,R2,S1,S2,S3);
    cout << S1 << "\t\t" << S2 << "\t\t" << S3;
    return 0;
}
