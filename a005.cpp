#include<iostream>
using namespace std;
int main (){
	
	int t, a[5];
	int i;
	
	cin>>t;
	for (i=0; i<4; i++)
			cin>>a[i];
		
	i=0;
	if (a[i+1]/a[i]==a[i+2]/a[i+1])
	{
		a[5]=a[4]*(a[2]/a[1]);
		cout<<a[5]<<endl;
	}
	else 
	{
		a[5]=a[4]+(a[2]-a[1]);
		cout<<a[5]<<endl;
	}
	
	
	return 0;
}
