#include<iostream>
using namespace std;
int main()
{
	double a, c; int b;
	
	cin>>a>>b;
	
	c=b/(a*a);
		
	if (c<18)
		cout<<"�L��"<<endl;
	
	if (c>=18 and c<24)
		cout<<"���d"<<endl;
		
	if (c>=24 and c<30)
		cout<<"���תέD"<<endl;
		
	if (c>=30 and c<35)
		cout<<"���תέD"<<endl;
		
	if (c>=35)
		cout<<"���תέD"<<endl;
	
	return 0;
}
