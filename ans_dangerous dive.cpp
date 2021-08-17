#include <iostream>
using namespace std;

int main(){
	
	int n_go, n_re;	cin>>n_go>>n_re;
	int i, back;
	int V[1000];
	
	for (i=0; i<n_go; i++)
		V[i]=0; 			//將去的每個人都初始化為0 
	
	for (i=0; i<n_re; i++)
	{
		cin>>back;
		V[back-1]=1;	}	//將輸入的那些回來的號碼都指派為1 

	if (n_go==n_re) cout<<"*"; 
	else {
		for (i=0; i<n_go; i++)
		{
			if (V[i]==0)
				cout<<i+1<<" ";	//若號碼仍為0的就是沒有回來，輸出i+1 
		}
	}
	return 0;
}
/*
1.果然是高手寫的程式，真棒的思維
2.我也從中學到可以怎麼把陣列的數字做不同的指派與分類
*/ 
