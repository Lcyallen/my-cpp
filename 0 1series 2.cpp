#include <iostream>
using namespace std;
int main (){
	
	int n, i;
	
	i=1;
	cin>>n;
	
	while (i<=n)
	{
		if(i%2!=0)
			cout<<"1 ";
		
		else
			cout<<"0 ";
			
		i=i+1;
	}
	
	
	return 0;
}
