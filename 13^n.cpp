#include <iostream>
using namespace std;

int main(){
	
	int n, a, k;
	
	cin>>n;
	
	if (n==1)
		cout<<1<<endl;
	
	else if (n>1)
	{
		int i=2;
		a=13; 
	
		while (i<=n)
		{
			a=(a*13)%100;
			i++;
		}
	
		k=((a-(a%10))/10)%10;
		
		cout<<k<<endl;
	}
	return 0;
}
