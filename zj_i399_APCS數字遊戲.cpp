#include <iostream>
using namespace std;

int main (){
	int n=3, a[n]={}, idx[9]={};	//創一個idx陣列 
	for (int i=0; i<n; i++){
		cin>>a[i];
		idx[a[i]-1]++;				//把輸入的數字+1計算輸入的數字有幾個 
	} 
	
	int mx=idx[0];
	for (int i=1; i<8; i++){
		mx=max(mx, idx[i]);			//網路高手的寫法是寫在上一個for裡面！！ 
	} 
	cout<<mx<<" ";	
	
	for (int i=8; i>=0; i--){
		if (idx[i]) cout<<i+1<<" ";
	}
}

/*
1. 2022.6.12APCS的第一題，當時因為無法順利設定code blocks，只好用窮舉法。
2. 後來參考網路高手的想法，寫了這個版本。 
3.別人寫的版本更簡潔
*/ 
