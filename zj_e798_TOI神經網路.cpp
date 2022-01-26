#include <iostream>
using namespace std;

int main (){
	int n=0; cin>>n;
	int a[n][n]={};
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)
		cin>>a[i][j];
	} 
	int  i=0;//最外圍放完全不需歸零的i 
	for (int l=1; 2*l<=n; l++){//注意l從1開始不是從0；條件可以2*l<=n，也可以寫l<=n/2 
		int j=0;	//往內一層放每列輸出完後，再下一列時必須歸零的j 
		for (int k=1; 2*k<=n; k++){//k從1開始不是從0開始 
			int mx=a[i][j], b=a[i][j+1], c=a[i+1][j], d=a[i+1][j+1];//最內圈是每次要求最大值的4個數都得歸零一次 
			mx=max(max(max(mx,b),c),d); cout<<mx<<" "; j=j+2;
		}cout<<endl; i=i+2;
	}
	
	return 0;
}
//這次使用「換手」的策略，感覺比較好寫。若只用for-loop應該會寫得更麻煩 
