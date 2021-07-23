#include<iostream>
using namespace std;
int main (){

	int n, a[20], i, count;
	cin>>n;
	
	for (i=0; i<n; i++)
		cin>>a[i];
	
	for (int j=1; j<n; j++)
	{	
		count=0;
		for (int i=0; i<n; i++)
		{
			if(j==a[i])
			count=count+1;
		}
		cout<<count<<" ";
	}
		return 0;
}

	
