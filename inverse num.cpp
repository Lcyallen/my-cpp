#include <iostream>
#include <math.h>
using namespace std;

int main (){
	
	int n, a[20], inv=0, i;
	
	cin>>n;
	
	for (i=0; n>=1; i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	
	int j=i-1;//���M���ճq�L�F�A�����٬O��������nj-1�H 
	
	for (i=0; j>=0; j--, i++)
		inv=inv+a[i]*pow(10,j);
		
	cout<<inv;
	
	return 0;
}
