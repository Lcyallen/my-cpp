#include <iostream>
using namespace std;

int main (){
	int n=0, t=0; cin>>n>>t;
	int a[n][t]={};
	for (int i=0; i<n; i++){
		for (int j=0; j<t; j++)
			cin>>a[i][j];
	} 
	
	cout<<"AND: ";
	for (int i=0; i<t; i++){
		bool b=0, c=a[0][i], d=a[1][i];//跑第二行之前必須先把b, c, d都先歸零！ 
		for (int j=0; j<n-1; j++){	//跑的次數是n-1次，要注意！ 
			b=(c&&d);	//先把(c&&d)的結果求出來 
			c=b; d=a[j+2][i];//之後換手。b存入新的c、下一項存入新的d 
		}cout<<b<<" "; 
	} 
	cout<<endl<<" OR: ";
	for (int i=0; i<t; i++){
		bool b=0, c=a[0][i], d=a[1][i];
		for (int j=0; j<n-1; j++){
			b=(c||d);
			c=b; d=a[j+2][i];
		}cout<<b<<" "; 
	} 
	cout<<endl<<"XOR: ";
	for (int i=0; i<t; i++){
		bool b=0, c=a[0][i], d=a[1][i];
		for (int j=0; j<n-1; j++){
			b=(c xor d);
			c=b; d=a[j+2][i];
		}cout<<b<<" "; 
	}
	return 0;
}
