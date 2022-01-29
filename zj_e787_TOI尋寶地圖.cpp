#include <iostream>
using namespace std;

int main (){
	int n=2, m=5; cin>>n>>m;
	int a[n][m]={}, b[n][m]={};
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin>>b[i][j];
		}
	}
	for (int k=0; k<n; k++){
		for (int l=0; l<m; l++){
			int sum=-b[k][l];//原本以為sum要寫成陣列，後來發現不用。為了避免b[k][l]加2次，在一開始就令sum=-b[k][l] 
			for (int j=0; j<m; j++)	sum+=b[k][j];//先同一列的數全加起來 
			for (int i=0; i<n; i++) sum+=b[i][l];//再同一行的數加起來。要注意這樣的寫法與內外迴圈的寫法不同 
			if (sum%2) a[k][l]=(a[k][l]+1)%2;//若原始a[k][l]==0，加1再/2會餘1；若原始a[k][l]==1，加1/2會餘0 
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}
	
	return 0;
}
