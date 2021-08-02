#include <iostream>
using namespace std;

int main(){
	
	int n, s=0;
	
	cin>>n;
	
	for (int i=n; i>1; i--)
	{
		if (n%i==0)
			s=s+n/i;
	}	
	
	if (s==n)
		cout<<"Perfect";
	
	else if (s>n)
		cout<<"Abundant";
	
	else
	{
		cout<<"Deficient";
	}
		
	return 0;
}

//卡在初始值s=0放在for裡面，int i後面，結果無法執行
 
