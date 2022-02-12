#include <iostream>
using namespace std;

int main (){
	int n=0, m=0; cin>>n>>m;
	char c; cin>>c;
	int a[n][m]={};//一開始只宣告為一維陣列，但後來發現必須依序輸出結果於不同的列，所以必須宣告為二維陣列！ 
	long s[n]={};//一開始宣告為int,但WA。後來發現s<=2^64-1，所以宣告為long才AC。此題是要將所有的測資輸入完畢後再一次輸出，所以必須把資測輸入為一個陣列儲存。 
	for (int i=0; i<n; i++) cin>>s[i];
	for (int j=0; j<n; j++){
		for (int i=0; i<m; i++){
			a[j][m-i-1]=s[j]%2; s[j]/=2;//太久沒寫程式，一開始寫"a[m-1]=s%2;m--"，結果花了好久時間才發現錯誤的地方是m值會遞減，等要輸出時"i<m"就不對了！ 
		}
	}
	for (int j=0; j<n; j++){
		for (int i=0; i<m; i++){
			if (a[j][i]==0)cout<<". ";
			else cout<<c<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
//此題最重要的意涵是寒假時隔了好幾天沒寫，開學後第一週開始寫。果然犯了低階錯誤，希望我能維持寫程式的習慣。 
