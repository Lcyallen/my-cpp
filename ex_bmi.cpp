#include<iostream>
using namespace std;
int main()
{
	double a, c; int b;
	
	cin>>a>>b;
	
	c=b/(a*a);
		
	if (c<18)
		cout<<"過輕"<<endl;
	
	if (c>=18 and c<24)
		cout<<"健康"<<endl;
		
	if (c>=24 and c<30)
		cout<<"輕度肥胖"<<endl;
		
	if (c>=30 and c<35)
		cout<<"中度肥胖"<<endl;
		
	if (c>=35)
		cout<<"重度肥胖"<<endl;
	
	return 0;
}
