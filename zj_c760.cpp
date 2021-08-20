#include <iostream>
using namespace std;

int main (){
	
	string a;
	while (cin>>a){
		a[0]-=32;		//一開始竟然忘了要減完32要"指派"給a[0]！另外小寫字母變成大寫要記得是-32。
		cout<<a<<endl;
	}
	
	return 0;
}
