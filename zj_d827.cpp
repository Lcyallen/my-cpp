#include <iostream>
using namespace std;

int main (){
	
	int n;
	cin>>n;
		
	if (n<12){
		cout<<n*5; return  0;
	}
	
	else{
		cout<<(n/12)*50+(n%12)*5;
	}
	
	
	
	return 0;
}
