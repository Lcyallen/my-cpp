#include <iostream>
using namespace std;

int main (){
	
	int n, a=0; cin>>n;
	
	while(n!=0){
		a=a*10+n%10;
		n/=10;
	}
	cout<<a;
	
	return 0;
}
/*
1.重新用while寫，針對新數值如何處理想比較久
2.初始值設為0，每次有新數字就加進來
3.有新數字時，舊a值就要變為10倍
*/ 
