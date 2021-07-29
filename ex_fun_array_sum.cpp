#include <iostream>
using namespace std;

int sum(int a[]){
	
	int i, sum=a[0];
	
	for (i=1; i<5; i++)
		sum=sum+a[i];
	
	return sum;
}

int main (){
	
	int a[5], i;
	
	for (i=0; i<5; i++)
		cin>>a[i];
	
	cout<<sum(a);	
	
	return 0;
}
