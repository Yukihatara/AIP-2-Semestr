#include <iostream>
#include <cmath>
using namespace std;
/*Описать функцию RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь
S прямоугольника со сторонами, параллельными осям координат, по координатам
(x1, y1), (x2, y2) его противоположных вершин (x1, y1, x2, y2) — входные, P и S —
выходные параметры вещественного типа. С помощью этой функцию найти
периметры и площади трех прямоугольников с данными противоположными
вершинами.*/
void ReactPS(float x1, float x2, float y1, float y2, float &P, float &S){
int a ,h;
a = abs(x1-x2);
h = abs(y1-y2);
P = (a+h)*2;
S = a*h;
}

int main(){
float x1,x2,y1,y2,P,S;
cin >> x1 >> x2 >> y1 >> y2;
ReactPS(x1,x2,y1,y2,P,S);
cout << P << "\t" << S;

}
