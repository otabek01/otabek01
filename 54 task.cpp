#include <iostream>
using namespace std;
int main(){
int x,y,z,count=0;
cin>>x>>y>>z;
if (x<5) count++;
if (y<5) count++;
if (z<5) count++;
if(count==2){
  cout<<"yes";
    }
    else cout<<"no";
}
