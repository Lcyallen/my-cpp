#include <iostream>
using namespace std;
int main (){
	
	int n;
	
	cin>>n;
	
	for (int i=1;n%2==0 ;i++)
		n=n/2;
	
	cout<<n;
	
	
	return 0;
}
