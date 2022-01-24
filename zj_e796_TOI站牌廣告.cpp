#include <iostream>
using namespace std;

int main (){
	int b=0, p=0;cin>>b>>p;
	int x=0, y=0, idx[b+1]={};//idx要從1號~b號，所以idx[]必須多一格 
	while (p--){
		cin>>x>>y;
		if (x>y) swap(x, y);//每次輸入x, y都先檢查大小，若x>y則把兩數交換 
		for (int i=x; i<=y; i++) idx[i]++;
	}
	int mn=idx[1], mx=idx[1];
	for (int i=2; i<=b; i++){
		mn=min(mn, idx[i]);
		mx=max(mx, idx[i]);
	}
	for (int i=1; i<=b; i++){
		if (idx[i]==mn){
			cout<<i<<" "; break;//因為要求只輸出數字最小的，所以一旦找到第一個結果就要break(停止) 
		}	
	}
	for (int i=b; i>=1; i--){//要求只輸出數字最大的，所以要從i=b(數字最大值)開始檢查 
		if (idx[i]==mx){
			cout<<i; break;//一旦找到第一個結果就break 
		}		 
	}
	return 0;
}
