#include <iostream>
using namespace std;

int main (){
	
	int n, a, i;
	cin>>n;
	
	int c=0, j=0, k=0;
	for (i=1; i<=n; i++)
	{
		cin>>a;
		if (a%3==0)
		{
			c++;
		}
		else if (a%3==1)
		{
			j++;
		}
		else if (a%3==2)
		{	
			k++;
		}
	}
		cout<<c<<" ";
		cout<<j<<" ";
		cout<<k<<" ";
	
	return 0;
}
