#include <iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cin >>a>>b>>c;
    if (a+b>max) max = a+b;
    if (a+c>max) max = a+c;
    if (c+b>max) max = c+b;
    if (max==a+b)cout << a<<" "<<b;
    if (max==a+c)cout << a<<" "<<c;
    if (max==c+b)cout << c<<" "<<b;
}
