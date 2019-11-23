#include <iostream>
using namespace std;
int main(){
int a,b,c,d,e,x,f;
cin>>x;
f=x/10000;
a=x-(f*10000);
b=a/1000;
c=(a-b*1000)/100;
d=(a-(b*1000+c*100))/10;
e=(a-(b*1000+c*100))%10;
cout<<(f*10000)+(c*100)+e;
}
