#include <iostream>
using namespace std;

int main(){
	
	int a, b, n;
	
	cin>>n;
	
	for (int i=1; n>0; i++, n--)
	{
		cin>>a>>b;
		
		if (a>b)
		cout<<"Case "<<i<<":"<<" A "<<a-b<<endl;
		
		else if (a<b)
		cout<<"Case "<<i<<":"<<" B "<<b-a<<endl;
		
		else if (a==b)
		cout<<"Case "<<i<<":"<<" 0 "<<endl;
		
	}
	
	
	
	return 0;
}
