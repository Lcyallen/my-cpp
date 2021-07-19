#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cin>>a >>b;
	
	c=(a*2+b)%3;
	
	if(c==0)
		cout<<"´¶³q"<<endl;
	
	else
	{
		if(c==1)
			cout<<"¦N"<<endl;

	    else
		{
		cout<<"¤j¦N"<<endl;
	    }
	}
	return 0;
}
