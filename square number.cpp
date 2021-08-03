#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int n, a, b;
	int i, j;
	
	cin>>n;

	for (i=1; i<=n; i++)
	{
		cin>>a>>b;

		int s=0;
		for (j=ceil(sqrt(a)); j*j<=b; j++)
		{
			s=s+j*j;
		}
		cout<<"Case "<<i<<": "<<s<<endl;
	}
	
	return 0;
}
