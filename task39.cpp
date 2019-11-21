#include <iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cin >>a>>b;
    if (a>b)cout<<"Yes";
    else {c=a;a=b;b=c;cout << a<<" "<<b;}
}
