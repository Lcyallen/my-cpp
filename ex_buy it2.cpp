#include<iostream>
using namespace std;
int main (){
	
	int x, r=10000;
	
	while (cin>>x)
	{
	r=r-x;
	
	if(r<=0)
	{
		cout<<"You can buy it!"<<endl;
		break;
	}
	
	else
		cout<<"You still need $"<<r<<endl;
	}
	return 0;
}
