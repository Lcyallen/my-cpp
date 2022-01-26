#include <iostream>
using namespace std;

int main (){
	int n=0; cin>>n;
	int m=n/1000;
	cout<<n-100*m<<" "<<1-(m%2==0);//其實輸出金額無論哪一個百貨都是一樣，只有選擇的百貨公司在m為偶數時要輸出0 
	
	return 0;
}
