#include <iostream>
using namespace std;
int G(int n){
	int g=0;
	while (n){	//只要進來的數字n!=0，就一直跑迴圈 
		g+=n%10;
		n/=10;
	}			//把n的每個數字相加 
	if (g<10)	//判斷第一次數字和是否<10 
		return g;
	else
		return G(g);//如果數字和>10，則繼續丟入G函數再return 
}
int main (){
	int n;
	while (cin>>n, n){
		cout<<G(n)<<endl;//原本想在回傳值這裡判斷是否需要再呼叫G函數，但卻失敗。應該再想想怎麼寫 
	}
	
	return 0;
}
