#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c,d,e,bah[10],x1=0,x2=0,m=0,mi=0;
cin>>a;
b=a/1000;
c=(a-b*1000)/100;
d=(a-(b*1000+c*100))/10;
e=(a-(b*1000+c*100))%10;
bah[0]=b;
bah[1]=c;
bah[2]=d;
bah[3]=e;
m=bah[0];
mi=bah[0];
        for(int i=0;i<=3;i++)
        {
            if (bah[i]>=m) {
            m=bah[i];
            x1=i;
            }
        }
        for(int i=0;i<=3;i++)
        {
            if (bah[i]<=mi) {
            mi = bah[i];
            x2=i;
            }
        }

swap(bah[x1],bah[x2]);
b=bah[0];
c=bah[1];
d=bah[2];
e=bah[3];
cout<<(b*1000)+(c*100)+(d*10)+e;
}
