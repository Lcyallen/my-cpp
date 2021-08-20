#include <iostream>
using namespace std;

int main (){
	
	int n;	cin>>n;
	int year[n];		//zj網站要求寫在cin>>n之後，一開始我寫在cin>>n前面變成RE！ 
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
