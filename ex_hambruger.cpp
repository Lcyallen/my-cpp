#include<iostream>
using namespace std;
int main(){
	
	int m, t, i;
	
	cin>>m;
	
	t=0; i=0;
	while (m-39*i>=39)
	{
		cout<<t<<":00 Eric ate a hamburger."<<endl;
		cout<<"    money : "<<m-39*(i+1)<<endl;
		
		t=t+5; i=i+1;
	}
	
	return 0;
}
