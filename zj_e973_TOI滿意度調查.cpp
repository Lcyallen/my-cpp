#include <iostream>
using namespace std;

int main (){
	string s;
	int idx[10]={0}, a[10]={0};//若直接把idx[]重新排列，會失去之前第幾個位置的資訊，所以再創一個新陣列用來排列 
	cin>>s;
		for (int i=0; i<10; i++){
			for (int j=0; j<s.size(); j++){
				if (s[j]-'0'==i)//又忘記要把字串轉成數字！ 
					idx[i]++;	//計算0~9滿意度出現幾次 
			}a[i]=idx[i];		//把算好的滿意度結果存入新陣列a[]	
		}
		for (int i=0; i<10; i++){
			for (int j=i+1; j<10; j++){
				if (a[j]>a[i])
					swap(a[j], a[i]);//把滿意度由高到低排列，形成新的a[i]
			}		
		}
		for (int i=0; i<10; i++){
			for (int j=0; j<10; j++){
				if (idx[j]==a[i]&&a[i]!=a[i+1]&&a[i]!=0)//若少第2個條件會重複輸出相同滿意度的位置；若少第3個條件則沒出現的滿意度也會輸出 
					cout<<j<<" ";
			}
			 
		}
			
	
	
	
return 0;
}
