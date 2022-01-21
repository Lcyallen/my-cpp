#include <iostream>
using namespace std;

int main (){
	int n, m; cin>>n>>m;
	int a[n]={};
	for (int i=0; i<n; i++){
		cin>>a[i];	//若是整數陣列輸入時需要用for-loop 
	}	
	for (int l=0; l<m; l++){//洗牌的次數 
		int b[n]={}, j=0;//每次洗牌時，b[]和j都要先歸零！想很久才發現的問題！ 
		for (int k=0; k<n/2; k++){
			for (int i=0; i<n; i++){
				if (i%(n/2)==k){//用數字測試時可以，換成符號卻忘記是"n/2"！ 
					b[j]=a[i];	//初始陣列a[]一定要存入新陣列b[]中，否則跑第二輪的i%(n/2)==k時就會出錯了！ 
					j++;
				}
			}
		}
		for (int i=0; i<n; i++){//因為要洗牌m次，故每次洗牌前都必須把b[]再存入a[]，這樣進入洗牌迴圈就能再把a[]當成初始陣列，b[]為結果陣列了！ 
			a[i]=b[i];
		}			
	}
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}
