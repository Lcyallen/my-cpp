#include <iostream>
using namespace std;
int main (){
	
	int N, i, ans;
	
	cin>>N;
	
	if (N<=0)
		cout<<0<<endl;
	
	else
	{
		i=0; ans=0;
		while (i<N)
		{
		ans=ans+(N-i)*(N-i);
		
		i=i+1;
		}
	
		cout<<ans<<endl;
	}
	
	return 0;
}
