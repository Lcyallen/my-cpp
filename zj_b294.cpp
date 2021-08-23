#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n]={}, s=0;
	
	for (int i=0; i<n; i++){
		cin>>a[i];
		s+=a[i]*(i+1);
	}
	cout<<s;	
	
	
return 0;
}
/*
1.一開始不是用陣列寫，卻卡在輸入後的數字不知怎麼處理
2.用陣列寫比較能掌握
*/ 
