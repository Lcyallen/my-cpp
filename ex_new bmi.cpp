#include<iostream>
using namespace std;
int main(){
	
	int a, w; double h, bmi;

	cin>>a>>h>>w;

	bmi=w/(h*h);
	
	if (a==1)
	{
		if(bmi<18)
		cout<<"�L��"<<endl;
		
		if(bmi>=18 and bmi<24)
		cout<<"���d"<<endl;
		
		if(bmi>=24)
		cout<<"�L��"<<endl; 
	}
		
	else
	{
		if (bmi<13.9)
		cout<<"�L��"<<endl;
		
		if(bmi>=13.9 and bmi<18.8)
		cout<<"���d"<<endl;
		
		if(bmi>=18.8)
		cout<<"�L��"<<endl;
	 } 
	    	
	return 0;
}
