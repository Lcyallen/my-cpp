#include <iostream>
using namespace std;

int main(){
	
	int a, b; cin>>a>>b;
	
	if (b%3==2)
		cout<<200;
	
	else if (a%2!=0)	
		cout<<100;
	
	else if (a==b)
		cout<<50;	
		
	else
		cout<<0;
		
	return 0;
}

/*
1.重新複習if-else if 的使用時機。
2.除了單選時機外，程式是從第一個條件開始檢查。如果符合某個條件，下面的條件就不會再檢查了！
*/ 
