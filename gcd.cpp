#include <iostream>
using namespace std;

int main (){
	
	int a, b, k;
	
	cin>>a>>b;
	
	while (a%b!=0)
	{
		k=a%b;
		a=b;
		b=k;
	}
		cout<<b;
	
	
	return 0;
}
