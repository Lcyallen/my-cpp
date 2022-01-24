#include <iostream>
using namespace std;

int main (){
	int n=0, t=0; cin>>n>>t;
	int a[n][t]={};//後來發現直接寫成二維陣列 
	for (int j=0; j<n; j++){
		for (int i=0; i<t; i++){
			cin>>a[j][i];
		}	
	}
	cout<<"AND: ";
	for (int i=0; i<t; i++){
		int j;
		for (j=0; j<n; j++){
			if (a[j][i]-1){
				cout<<"0 "; break;
			}
		}
		if (j==n) cout<<"1 ";
	}
	cout<<endl<<" OR: ";
	for (int i=0; i<t; i++){
		int j;
		for (j=0; j<n; j++){
			if (a[j][i]){
				cout<<"1 "; break;
			}
		}
		if (j==n) cout<<"0 ";
	}
	cout<<endl<<"XOR: ";
	for (int i=0; i<t; i++){
		int sum=0;
		for (int j=0; j<n; j++)
			sum+=a[j][i];		
	
		if (sum%2) cout<<"1 ";
		else cout<<"0 ";
	}
	return 0;
}
