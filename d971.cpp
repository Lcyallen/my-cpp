#include <iostream>
using namespace std;
int main (){
	
	int a1, an, d, n;
	
	cin>>a1>>an>>d;
	
	n=(an-a1)/d+1;
	
	for (int i=1; i<=n; i++)
		cout<<a1+d*(i-1)<<" ";
	
	
	
	return 0;
}
