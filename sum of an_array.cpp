#include<iostream>
using namespace std;
int main (){
	
	int a[10], i, s;
	
	i=0;  s=0;
	while (cin>>a[i])
	{
		s=s+a[i];
		
		i=i+1;
	}
		cout<<"Sum = "<<s<<endl;
		
	return 0;
}
