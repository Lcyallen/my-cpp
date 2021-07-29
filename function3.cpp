#include <iostream>
using namespace std;

int is_prime(int x){
	
	for (int i=2; i<x; i++)
	{
		if (x%i==0)
			return 0;
	}	
	
	return 1;
}

int main(){
	
	int x;	cin>>x;
		
	if (is_prime(x)==1)
		cout<<"Yes";
		
	else{
		cout<<"No";
	}	
	return 0;
}
