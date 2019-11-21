#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x=3.6,c;
    c=pow(M_E,(x-2))+fabs(sin(x))-pow(x,4)*cos(1/x);
    cout<<c;
}
