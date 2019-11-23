#include <iostream>
using namespace std;
int main(){
int a,b;
setlocale(LC_ALL, "Russian");
cin>>a>>b;
if (a==11)
	{
		if(b==0) cout<<" север";
		if(b==1) cout<<" Запад";
		if(b==-1)cout<<" Восток";
	}
else if (a==12)
	{
		if(b==0) cout<<" запад";
		if(b==1) cout<<" юг";
		if(b==-1)cout<<" север ";
	}
else if (a==13)
	{
		if(b==0) cout<<" юг";
		if(b==1) cout<<"восток ";
		if(b==-1)cout<<" запад";
	}
else if (a==14)
	{
		if(b==0) cout<<"восток ";
		if(b==1) cout<<" север";
		if(b==-1)cout<<" юг";
	}
}
