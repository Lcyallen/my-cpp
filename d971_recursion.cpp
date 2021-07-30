#include <iostream>
using namespace std;
int main (){

	int a, b, d, n;
	
	cin>>a>>b>>d;
	
	n=(b-a)/d+1;
	
	cout<<a<<" ";
	
	for (int i=1; i<n; i++)
	{
		a=a+d;
		cout<<a<<" ";
		}		
	
	return 0;
}
