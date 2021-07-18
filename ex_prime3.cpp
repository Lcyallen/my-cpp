#include <iostream>
using namespace std;
int main (){
	
	int n, i=2;
	
	cin>>n;
	
	while (1)
	{
		if (n%i==0)
		{
		cout<<"No"<<endl;
		break;
		}	
	
		i=i+1;
		if (i==n)
		{
		cout<<"Yes"<<endl;
		break;
		}	
	}
	return 0;
}
