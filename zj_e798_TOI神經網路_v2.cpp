#include <iostream>
using namespace std;

int main (){
	int n=0;cin>>n;
	int s[n][n]={};
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)cin>>s[i][j];
	}
	for (int i=0; 2*i<n; i++){	//
		for (int j=0; 2*j<n; j++){//
			int a, b, c, d;	//多宣告4個變數，下面要找最大值 
			a=s[2*i][2*j], b=s[2*i][2*j+1], c=s[2*i+1][2*j], d=s[2*i+1][2*j+1];//這裡想最久，要如何按照心中的想法跑loop是最大的挑戰 
			int mx=a;
			mx=max(max(max(mx,b),c),d);//竟然忘了可以這樣寫！ 
			cout<<mx<<" ";
		}cout<<endl;
	}
}
/*
1.隔了很久回來復習， 果然忘了很多東西。主要卡在怎麼讓index跑完一次後跳到2格之後。
2.這次寫的方法跟上次不同，可以互相參考學習。
*/ 
