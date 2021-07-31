#include <iostream>
using namespace std;
int main (){
	
	int n, s;
	
	cin>>n;
	
	for (s=0; n>=1;)
	{
		s=s+(n%10);
		n=n/10;
	}
		cout<<s;
		
	return 0;	
}
