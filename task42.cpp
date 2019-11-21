#include <iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cin >>a;
    if (a>=2&&a<=5)
    {cout <<a+10;}
    else if (a>=7&&a<=40)
    {cout <<a-100;}
    else if (a<=0||a>3000)
    {cout <<a*3;}
    else {a=0;cout <<a;}
}
