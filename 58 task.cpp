#include <iostream>
using namespace std;
int main(){
int d,m,g,q=0, d2,m2,g2;
cin>>d>>m>>g;
cin>>d2>>m2>>g2;
if (g>g2) q=1;
if (g==g2)
    {
        if (m>m2) q=1;
        if (m==m2)
            {
                if (d>d2) q=1;
                if (d==d2) cout<<"same date";
                else q=0;
            }
        else q=0;
    }
else q=0;
if (q==1) cout<<"yes";
else cout<<"no";
}
