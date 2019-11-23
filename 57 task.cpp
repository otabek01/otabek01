#include <iostream>
using namespace std;
int main(){
int d,m,g,q=0;
cin>>d>>m>>g;
if (g>0)
{
    if ((m>0)&&(m<13))
    {
         if ((d>0)&&(d<=31))
        {
            if ((m%2!=0)&&(m<8)||(m%2==0)&&(m>=8)) q=1;
            else if (m==2){
                if (d>28) q=0;
                else d=1;}
            else if (m!=2)
                {
                if (d>30) q=0;
                else q=1;
                }
        }

    }

    if (q==1) cout<<"yes";
    else cout <<"no";

}
else cout<<"no";

}
