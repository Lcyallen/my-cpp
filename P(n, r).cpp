#include <iostream>
using namespace std;

int main (){
	
	int n, r;
	
	cin>>n>>r;
	
	int P;
	for (P=1; r>0; r--, n--)
		P=P*n;
	
	cout<<P;
	return 0;
}
