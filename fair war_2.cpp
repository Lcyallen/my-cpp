#include <iostream>
using namespace std;

int main (){
	
	int n, a, b;
	
	cin>>n;

	for (; n>0; n--)	
	{
		cin>>a>>b;
	
		if (a>b)
			cout<<"A "<<a-b<<endl;
		
		else if (a<b)
		cout<<"B "<<b-a<<endl;
		
		else if (a==b)
			cout<<"0"<<endl;
	}
	
	
	return 0;
	
}
