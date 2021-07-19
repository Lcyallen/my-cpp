#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n)
    {
	 if (((n%4==0) and (n%100!=0) )or (n%400==0))
	 cout<<"¶|¦~"<<endl;
	 
	 else
	 cout<<"¥­¦~"<<endl;
		}	
	return 0;
}
