#include <iostream>
using namespace std;

int main(){
	
	int n, total;
	cin>>n;
	
	for (total=n; n>4; n=n/5+n%5)
		total=total+n/5;
	
	cout<<total;
		
	return 0;
}
