#include <iostream>
using namespace std;

int main (){
	
	int n, i;
	int a, s;
	
	while (cin>>n)
	{
		if (n==0)
			cout<<"yes"<<endl;
		else
		{
			s=0;
			for (i=1; i<=n; i++)
			{
			cin>>a;
			s=s+a;
			}
	
			if (s>n*59)
				cout<<"no"<<endl;
	
			else{
				cout<<"yes"<<endl;
				}
		}
	}
	return 0;
}
