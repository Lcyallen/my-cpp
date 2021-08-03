#include <iostream>
#include <math.h>
using namespace std;

bool is_P (int a){
	
	if (a==2 || a==3)
		return 1;
	
	else if (a==1)
		return 0;
	
	else
	{
		for (int i=2; i<=sqrt(a); i++)
		{
			if (a%i==0)
				return 0;
		}
	}
	return 1;
}

int main (){
	
	int n1, n2, i; 	
	
	while (cin>>n1>>n2)
{
	int c=0, d=0;
	for (i=1; i<=n1; i++)
	{
		if (is_P(i)==1)
			c=c+1;
	}
	
	for (i=2; i<=n2; i++)
	{
		if (is_P(i)==1)
			d=d+1;
	}
		
	if (is_P(n1)==1)
		cout<<d-c+1<<endl;
		
	else{
		cout<<d-c<<endl;
	}
}
	return 0;
}
