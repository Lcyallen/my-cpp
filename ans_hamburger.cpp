#include <iostream>
using namespace std;
int main (){
	
	int m, t=0;
	
	cin>>m;
	
	while (m>=39)
	{
		m=m-39;
		
		cout<<t<<":00 Eric ate a hamburger."<<endl;
		cout<<"    money : "<<m<<endl;
		
		t=t+5;
	}
	
	
	return 0;
}
