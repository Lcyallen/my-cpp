#include <iostream>
using namespace std;

int main(){
	
	int a, i;

	while (cin>>a)	
	{
		if (a==0)
			break;
		
		else
		{
			for (i=1; i<a; i++)
			{
				if (i%7!=0)
					cout<<i<<" ";
			}
			
			cout<<endl;
		}
	}
	
	return 0;
}
