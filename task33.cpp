#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,max=0;
    cin >>a>>b;
    if (sqrt(a)>=0&&sqrt(b)>=0){
        c=sqrt(a-sqrt(b));
    }
    cout <<c;
}
