#include <iostream>
using namespace std;
int main(){
int a,a1,b,c,d,e;
cin>>a>>a1;
b=a/100;
c=(a-b*100)/10;
d=a1/100;
e=(a1-d*100)/10;
cout<<b*1000+c*100+d*10+e;
}