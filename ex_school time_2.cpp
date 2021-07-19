#include<iostream>
using namespace std;
int main (){
	
	int h, m, x;
	cin>>h>>m;
	x=h*60+m;
	
	if(x>=450 and x<1020)
	cout<<"At School"<<endl;
	
	else
	cout<<"Off School"<<endl;	
	
	return 0;
}
