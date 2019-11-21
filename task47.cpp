#include <iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cin >>a>>b>>c;
    if (a>b&&a>c)cout << a;
    else if (b>c&&b>a)cout << b;
    else if (c>a&&c>b)cout << c;
}
