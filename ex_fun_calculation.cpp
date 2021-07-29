#include <iostream>
using namespace std;
int add(int a, int b){
	
	return a+b;
}
int sub(int a, int b){
	
	return a-b;
	}

int multi(int a, int b){
	
	return a*b;
}
int main (){

	int a, b;
	char i;
	
	cin>>a>>i>>b;
	
	if (i=='+')	
		cout<<add(a, b)<<endl;
		
	else if (i=='-')
		cout<<sub(a, b)<<endl;
		
	else if (i=='*')
		cout<<multi(a, b)<<endl;
		
	return 0;
}
