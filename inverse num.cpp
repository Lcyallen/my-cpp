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
	
	int j=i-1;//雖然測試通過了，但我還是不懂為何要j-1？ 
	
	for (i=0; j>=0; j--, i++)
		inv=inv+a[i]*pow(10,j);
		
	cout<<inv;
	
	return 0;
}
