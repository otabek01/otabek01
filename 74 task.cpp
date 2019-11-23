#include <iostream>
#include <cmath>
using namespace std;
int main(){
int k,n=10,bah[10],x,x1;
cin>>k;
for (int i=0;i<10 ;i++ )
{
    bah[i]=n;
    n++;
}
if (k%2==0)
    {
    x1= bah[(k/2)-1];
    x=x1%10;
    }
if (k%2!=0)
    {
    x1= bah[(k/2)];
    x=x1/10;
    }
cout<<x;
}
