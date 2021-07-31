#include <iostream>
using namespace std;

int main (){
	
	int n, i, c;
	
	cin>>n;
	
	for (i=1; n!=1; i++)
	{
		if (n%2!=0)
			n=3*n+1;
		
		else{
			n=n/2;
		}
		c++;
	}
	cout<<i;
	
	return 0;
}
