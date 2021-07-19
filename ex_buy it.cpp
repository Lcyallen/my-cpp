#include <iostream>
using namespace std;
int main (){
	
	int x, now=0, goal=100000;
	
	while (cin>>x)
	{
		if(now+x>=goal)
		cout<<"You can buy it"<<endl;
	
		else
		{
		cout<<"Now you have: "<<now+x<<endl;
		now=now+x;
		}
		
	}
	
	return 0;
}
