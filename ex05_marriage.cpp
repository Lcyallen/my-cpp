 #include<iostream>
using namespace std;
int main(){
	
	int a, b;
	cin>>a>>b;
	
	if (a==1)
    {
    	if(b>=18)
    	cout<<"You are marriageable."<<endl;
    	
    	else
    	cout<<"You are NOT marriageable."<<endl;
	}
	
	if (a==2)
	{
		if(b>=16)
		cout<<"You are marriageable."<<endl;
    	
    	else
    	cout<<"You are NOT marriageable."<<endl;
	}
		
	return 0;
}
