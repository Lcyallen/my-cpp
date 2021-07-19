#include <iostream>
using namespace std;
int main(){
	
	int n, i;
	
	cin>>n;
	i=n;
	
	while (i>0)
	{
		if (n%i==0)
		cout<<n/i<<" ";
		
		i=i-1;
	}
	return 0;
}
