#include<iostream>
using namespace std;
int main (){
	
	int a, b, c, i;

	i=1;	
	a=0; b=1;
	cout<<a<<" "<<b<<" ";

	for (i=2; i<=20; i++)
	{
	c=a+b;
	
	a=b; b=c;
	
	cout<<c<<" ";
	}
	cout<<endl;
	
	return 0;
}
