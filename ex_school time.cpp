#include<iostream>
using namespace std;
int main (){
	int h, m;
	while(cin>>h>>m)
	//7:30~17:00
	if((h==7 and m>=30)or(h>=8 and h<=16))
	cout<<"At School"<<endl;
	
	else
	cout<<"Off School"<<endl;
		
	return 0;
}
