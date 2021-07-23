#include <iostream>
using namespace std;
int main(){
	
	int a[30], i;
	
	for (i=3,a[1]=0, a[2]=1; i<31; i++)
		a[i]=a[i-1]+a[i-2];
		
	for (i=1; i<31; i++)
		cout<<a[i]<<" ";	
	
	return 0;
}
