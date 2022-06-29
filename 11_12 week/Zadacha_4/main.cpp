#include <iostream>

using namespace std;

struct Diap{
    float min, max;
};

struct Datchik{
    float pogr, v_max;
    Diap zn;
};

void Diap_Max(Datchik a, Datchik b){
    if((a.zn.max-a.zn.min)>(b.zn.max-b.zn.min))
            std::cout << a.zn.min << "\t" << a.pogr << "\t" << a.v_max;
            else
            std::cout << b.zn.max << "\t" << b.pogr << "\t" << b.v_max;
}


int main(){
    Datchik a,b;
    std::cin >> a.pogr >> a.v_max >> a.zn.min >> a.zn.max
          >> b.pogr >> b.v_max >> b.zn.min >> b.zn.max;
    Diap_Max(a, b);

 return 0;
}
