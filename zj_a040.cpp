#include <iostream>
#include <cmath>
using namespace std;
int Arm (int);
int main(){
	int a, b; cin>>a>>b;
	int t=0;
	for(int i=a; i<=b; i++){
		if (Arm(i)==1)	//如果回傳值為1，表示丟入的i是Arm 
			cout<<i<<" ";
		t+=Arm(i);		//為了確認是否全部非Arm，把回傳值累加 
	}
	if (t==0) cout<<"none";//如果所有回傳值累加=0，則完全不是Arm 
return 0;
}

int Arm (int a){
	int a0=a;	//a在處理後值會改變，所以再寫一個變數存a的初始值 
	int d=log10(a)+1;
	int s=0;
	for (int j=0; j<d; j++){
		if (a>0){
			s+=pow(a%10,d);
			a/=10;
		}
	}
	 return (s==a0);	//想到可以利用bool值做回傳值，以()做為判斷式 
}
/*
1.覺得檢驗過程寫成函式好像比較好
2.一開始讓回傳值為s卻不行，還不知道原因
*/ 
