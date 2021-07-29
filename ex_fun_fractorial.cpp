#include <iostream>
using namespace std;

int fractorial(int n){
	
	int i, f;
	
	for (i=1, f=1; i<=n; i++)
		f=f*i;
	
	return (f);
}

int main(){
	
	int n;
	
	cin>>n;
	
	cout<<fractorial(n);
	
		
	return 0;
}
