#include<iostream>
using namespace std;
int main (){
	
	int i, j, n;
	
	cin>>n;
	
	for (j=1; j<=n; j=j+1)
	{
		for (i=1; i<=n; i=i+1)	
			cout<<"*";
			
		cout<<endl;
	}
		
	return 0;
}


