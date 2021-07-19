#include<iostream>
using namespace std;
int main (){
	
	int a1, an, d;
	int n;
	
	cin>>a1>>an>>d;
	
	n=(an-a1)/d+1;
	
	cout<<(a1+an)*n/2<<endl;
	
	return 0;
}
