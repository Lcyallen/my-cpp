#include <iostream>
using namespace std;

int main (){
	
	int n;	cin>>n;
	int year[n];		//zj�����n�D�g�bcin>>n����A�@�}�l�ڼg�bcin>>n�e���ܦ�RE�I 
	for (int i=0; i<n; i++){
		cin>>year[i];
	}
	
	for (int i=0; i<n; i++){
		if ((year[i]%4==0)&&(year[i]%100!=0)||(year[i]%400==0))
			cout<<"Case "<<i+1<<": a leap year"<<endl;
		else{
			cout<<"Case "<<i+1<<": a normal year"<<endl;
		}
	}
	return 0;
}
