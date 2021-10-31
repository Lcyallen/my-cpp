#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int a; cin>>a;
	
	if (a<10000)
		cout<<"|____"<<setw(4)<<setfill('_')<<a<<"|";
	
	else
		cout<<"|____"<<setw(4)<<setfill('0')<<a%10000<<"|";//後來頓悟如果要留最後四位數，其實就是"%1000 "就可以了!! >"< 
		
	return 0;
}


