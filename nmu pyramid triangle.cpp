#include <iostream>
using namespace std;

int main(){
	
	int n, i, j;
	
	cin>>n;
	
	for (j=1; j<=n; j++)
	{
		for (i=1; i+j<=n; i++)
			cout<<"_";
		
		
		for(i=1; i<=2*j-1; i++)	
			cout<<j;

		cout<<endl;
	}

	return 0;
}
