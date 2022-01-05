#include <iostream>
using namespace std;
int rev(int a){	//寫一個把數字反向的函數 
	int re=0;
	 while(a){
	 	re=re*10+a%10;//這樣的寫法是想很久後的簡化版本！要記住！ 
	 	a/=10;
	 }
	 return re;
	
}
int main (){
	
	int n, a;
	cin>>n;
	while(n--){
		cin>>a;
		int count=1;	//還沒進迴圈時把反向數跟本數相加時就算1次了 
		while(rev(rev(a)+a)!=rev(a)+a){//繼續跑迴圈的條件是如果反向數與本數的和不是回文 
			a+=rev(a);	//本數要變成"和" 
			count++;	//計數器要+1 
		}
		cout<<count<<" "<<a+rev(a)<<endl;
	}
		
	return 0;
}
