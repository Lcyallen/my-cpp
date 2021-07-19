#include<iostream>
using namespace std;
int main(){
	
	int a1, an, d, n;
	
	cin>>a1>>an>>d;
	
	n=1;
	while (a1<an)
	{
		a1=a1+d;
		n=n+1;
	}
	
	cout<<"n= "<<n;
	
	return 0;
}
