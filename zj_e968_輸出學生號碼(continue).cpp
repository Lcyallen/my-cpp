#include <iostream>
using namespace std;

int main (){
	
	int n, a, b, c;
	cin>>n>>a>>b>>c;
	
	for (int i=n; i>0; i--){
		if (i==a||i==b||i==c)	//一開始是放在cout後面結果沒有作用，後來改在cout前面才正確。要先判斷是否符合條件再執行cout。 
			continue;
	cout<<"No. "<<i<<endl;
	}
	
	return 0;
}
