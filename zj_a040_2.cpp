#include <iostream>
#include <cmath>
using namespace std;
int Arm (int);
int main(){
	int a, b; cin>>a>>b;
	int t=0;
	for(int i=a; i<=b; i++){
		if(Arm(i)!=0)		//一開始是把所有回傳值印出來，要調整成不是0再印 
			cout<<Arm(i)<<" ";
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
	if (s==a0) return a0;	//其實把輸入的檢測值當成回傳值也是可以的 
	 	else return 0;		//若條件不符則回傳0 
}
