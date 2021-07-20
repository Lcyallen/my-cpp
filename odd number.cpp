#include<iostream>
using namespace std;
int main (){
	
	int a, i, odd;
	
	i=0; odd=0;
	while (cin>>a)
	{
		if (a%2!=0)
		{
			odd=odd+1;
		}
		
		i=i+1;
		
	}
		cout<<"odd number = "<<odd<<endl;
		
	return 0;
}
