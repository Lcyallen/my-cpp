#include <iostream>
using namespace std;

int main (){
	
	long long int a; 
	int i, b[100];	//居然是因為把b初始化為0，造成錯誤！ 
	
	while (cin>>a){
		for (i=0; a>0; i++){
		b[i]=a%2;//cout<<"b["<<i<<"]"<<"="<<b[i]<<endl;//到第2輪時就錯了！
		a/=2;//cout<<"a="<<a<<endl;//第2輪時a也錯了！ 
		}
		//cout<<"digit = "<<i<<endl;			 
		for (int j=i-1; j>=0; j--){ 		//發現i其實比位數多1，所以j要從i-1開始印 
			cout<<b[j];	 
		}
		cout<<endl;
	}

	return 0;
}
/*
1.這個題目想了兩天才終於測試出來！
2.這一題居然不要把陣列初始化才行
3.在遇到問題時，把每個關卡都印出結果，再逐漸想辦法解決
4.for迴圈最後的i雖然沒有進入迴圈但已先+1
5.測試時其實覺得不會AC，因為如果輸入的a很大，這樣寫其實是無法正確的
6.網路上有提到bitwise operation可以很快處理這問題，但我看不懂 ！
*/ 
