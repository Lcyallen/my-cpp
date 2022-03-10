#include <iostream>
using namespace std;

int main (){
	int r, c, n; cin>>r>>c>>n;
	int a[r+1][c+1]={}, ind=1;	//多加一行與一列是之後要「換手」時必須優先把最後一行(最後一列)的數字先移到空的陣列中，否則初始值會被蓋掉 
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			a[i][j]=ind; ind++;	//自動指派陣列的數字 
		} 
	}
	for (int k=(n-1)/2; k>0; k--){	//往後移動次數 
		for (int i=r; i>=0; i--){	//只想到怎麼用i--，還沒想到怎麼用i++ 
			for (int j=0; j<c; j++)
				a[i][j]=a[(i+r)%(r+1)][j];//這是想最久的地方！為了要"循環"所以必須用"%"，而且第一個要先把最後的陣列移到空白陣列 
		}
	}
	for (int k=n/2; k>0; k--){	//往右移動次數 
		for (int j=c; j>=0; j--){
			for (int i=0; i<r; i++)
				a[i][j]=a[i][(j+c)%(c+1)];
		}
	}
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cout<<a[i][j]<<" ";cout<<endl;
	}			
}
	
