#include<iostream>
using namespace std;
int main (){
	
	int a, i, count;

	i=1; count=0;
	while(cin>>a)
	{
		if(a%2!=0)
		{
			cout<<"第"<<i<<"項:"<<a<<endl;
			count=count+1;
		}
		i=i+1; 
	}
	
	if (count==0)
		cout<<"沒有奇數"<<endl;
		
		return 0;
}


