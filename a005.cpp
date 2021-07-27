#include<iostream>
using namespace std;
int main (){
	
	int t, a, b, c, d;

	cin>>t;
	
	for (t=t; t>0; t--)
	{
		cin>>a>>b>>c>>d;
		
		if ((b-a)==(c-b) && (c-b)==(d-c))
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+(b-a)<<endl;
			
		else{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(b/a)<<endl;
		}
		
	}
	

	return 0;
}
