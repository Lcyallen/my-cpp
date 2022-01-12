#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	int j=0, sum=0;
	for ( ; j*a[n-1]<n; j++)
		sum+=a[j*a[n-1]];
	//cout<<sum;	
	cout<<(sum+n-1)%n+1<<" "<<a[(sum+n-1)%n];
	return 0;
}
