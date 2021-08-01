#include <iostream>
using namespace std;

int main (){
	
	int a, b, s;
	
	cin>>a>>b;
	
	for(s=0; a<b; a++)
	{
		s=s+a;
		cout<<a<<"+";
	}
	cout<<b<<"="<<s+b;
	
	return 0;
}
