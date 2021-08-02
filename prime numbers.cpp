#include <iostream>
#include <math.h>
using namespace std;

int prime(int a){
	
	if (a==2 || a==3)
		return a;
	
	else
	{
		for (int i=2; i<=sqrt(a); i++)
		{
			if (a%i==0)
				return 0;
		}
	}
		return a;
}

int main (){
	
	int x;
	
	cin>>x;
	
	for (int i=2; i<=x; i++)
	{
		if (prime(i)!=0)
			cout<<i<<" ";
	}	
	
	return 0;
}
