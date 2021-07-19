#include<iostream>
using namespace std;
int main(){
	
	int n, i, x;
	
	cin>>n;
	
	i=10; x=1;
	
	while (n/i>=1)
	{
		i=i*10;
		x=x+1;
	}
	
	cout<<x<<"¦ì¼Æ"<<endl;
	
	return 0;
}
