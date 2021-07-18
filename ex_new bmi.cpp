#include<iostream>
using namespace std;
int main(){
	
	int a, w; double h, bmi;

	cin>>a>>h>>w;

	bmi=w/(h*h);
	
	if (a==1)
	{
		if(bmi<18)
		cout<<"過輕"<<endl;
		
		if(bmi>=18 and bmi<24)
		cout<<"健康"<<endl;
		
		if(bmi>=24)
		cout<<"過重"<<endl; 
	}
		
	else
	{
		if (bmi<13.9)
		cout<<"過輕"<<endl;
		
		if(bmi>=13.9 and bmi<18.8)
		cout<<"健康"<<endl;
		
		if(bmi>=18.8)
		cout<<"過重"<<endl;
	 } 
	    	
	return 0;
}
