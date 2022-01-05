#include <iostream>
using namespace std;

int main (){
	
	int n, a, b; cin>>n;
	
	for (int i=0; i!=n; i++){	//因為輸出需要說明第幾個case，所以必須新增一個變數i，不然直接用while(n--)就好了 
			cin>>a>>b;
			a+=(a%2==0);	//利用邏輯判斷讓a+1或a+0，讓首項成為正確的奇數
			b-=(b%2==0);	//利用邏輯判斷讓b-1或b-0，讓末項為正確的奇數
		cout<<"Case "<<i+1<<": "<<(a+b)*((b-a)/2+1)/2<<endl;	//要注意第幾個case必須i+1 
		}

	return 0;
}
