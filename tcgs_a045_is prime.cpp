#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int a;
	cin>>a;
	float r=sqrt(a);
	
	if (a==1) 	
	{	cout<<"NO"; return 0;	}
	
	else if (a==2||a==3)	
	{	cout<<"YES"; return 0;	}
	
	else 
	{
		for (int i=2; i<=r; i++)
		{
			if (a%i==0){
				cout<<"NO"; return 0;
			}
		}
		cout<<"YES";	
	}
	
	
	return 0;
}
