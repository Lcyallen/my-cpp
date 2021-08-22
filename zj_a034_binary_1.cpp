#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n; 
	while (cin>>n){
		long long int bi=0;
		for (int i=0; n!=0; n/=2, i++)
			bi+=(n%2)*pow(10.0,i);
	
		cout<<bi<<endl;
	}
	return 0;
}


/*
1.這是我第一個想到的解法，但只要輸入的數字大一點就超過int的位數了 
2.正向一點就是至少學會for()裡的初始值和執行後條件都可以寫多個 
3.沒想到我送出測試竟然AC！害我還想其他方法想了2天！ 
*/
