#include <iostream>
using namespace std;

int main (){
	int n=0, t=0; cin>>n>>t;
	int a[n][t]={};//a陣列可宣告為int 
	for (int i=0; i<n; i++){
		for (int j=0; j<t; j++)
			cin>>a[i][j];
	}
	cout<<"AND: ";
	for (int j=0; j<t; j++){
		bool b=a[0][j];//要讓b變成bool值所以b要宣告為bool 
		for (int i=1; i<n; i++){
			b=(b && a[i][j]);//要讓a陣列的每個數都作&&而計算bool值所以必須利用b跟其他a陣列的值作&& 
		}
		cout<<b<<" ";		
	}
	cout<<endl<<" OR: ";
	for (int j=0; j<t; j++){
		bool c=a[0][j];
		for (int i=1; i<n; i++){
			c=(c || a[i][j]);
		}
		cout<<c<<" ";		
	}
	cout<<endl<<"XOR: ";
	for (int j=0; j<t; j++){
		bool d=a[0][j];
		for (int i=1; i<n; i++){
			d=(d xor a[i][j]);
		}
		cout<<d<<" ";		
	}
	cout<<endl;
	return 0;
}
