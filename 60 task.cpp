#include <iostream>
using namespace std;
int main(){
int a,b,c,d,e;
cin>>a;
b=a/1000;
c=(a-b*1000)/100;
d=(a-(b*1000+c*100))/10;
e=(a-(b*1000+c*100))%10;
cout<<(e*1000)+(c*100)+(d*10)+b;
}
