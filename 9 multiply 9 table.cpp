#include <iostream>
using namespace std;
int main (){
	
	int i, j;
	
	for(j=1; j<=9; j++)
	{
		for (i=1; i<=9; i++)
			cout<<i<<" * "<<j<<" = "<<i*j<<"   ";
			cout<<endl;
	}
	
	
	return 0;
}
