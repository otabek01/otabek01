#include <iostream>
using namespace std;
int main(){
int n=2,n2=6,n3=8,n4=12;
cout<<"*"<<" "<<" "<<" "<<" "<<" "<<"*"<<" "<<" "<<" "<<" "<<" "<<"*"<<endl;
for(int i=0; i<2; i++)
    {   for(int a=1; a<=n4; a++)
        {
            if ((a==n)||(a==n2)||(a==n3)||(a==n4)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
        n++;
        n2--;
        n3++;
        n4--;

    }
cout<<" "<<" "<<" "<<"*"<<" "<<" "<<" "<<" "<<" "<<"*";
}
