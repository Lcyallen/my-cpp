#include <iostream>
using namespace std;
int main (){
	
	int n, t[5];
	
	cin>>n;
	
	for (int j=1; j<=n; j++)
	{
		for (int i=0; i<5; i++)
			cin>>t[i];
			
		if ((t[2]-t[0])*60+(t[3]-t[1])>=t[4])
				cout<<"Yes"<<endl;
			
		else{
			cout<<"No"<<endl;
			}
	}
	
	
	return 0;
}
