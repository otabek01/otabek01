#include <iostream>
#include <cmath>
using namespace std;
int main() {
 double rubl;
 int dollar,konfet;
 cin>>rubl;
 for(double i=1; i<=100; i++){
cout<<i<<"$"<<" "<<i*rubl<<" "<<(1*i*rubl)/20<<" "<<endl;
 }

}