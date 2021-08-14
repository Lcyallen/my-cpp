#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	
	int i, j, n;
	cin>>n;
	
	for(j=1; j<=n; j++)
	{
		for (i=1; i<=n; i++)
			cout<<i<<"x"<<j<<"="<<setw(2)<<i*j<<"  ";
			cout<<endl;
	}
	
	
	return 0;
}
