#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;
    for (int i=1000;i<=9999;i++){
        a = i/1000;
        b = (i%1000)/100;
        c = (i%100)/10;
        d = i%10;
        if (a!=5 && b!=5 && c!=5 && d!=5){
            if (a!=6 && b!=6 && c!=6 && d!=6){
                cout<<a*1000+b*100+c*10+d<<endl;
            }
        }

    }
return 0;
}
