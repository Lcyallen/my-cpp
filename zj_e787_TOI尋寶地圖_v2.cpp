#include <iostream>
using namespace std;

int main (){
	
	int r, c; cin>>r>>c;
	int a[r][c]={}, b[r][c]={};
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cin>>a[i][j];
	}
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cin>>b[i][j];
	}
	for (int n=0; n<r; n++){	//在i,j之前再宣告兩個變數n,m來控制不同行與不同列，這個技巧想好久才想到！ 
		for (int m=0; m<c; m++){
			int s=-b[n][m];
			for (int i=0; i<r; i++)s+=b[i][m];//同一行加總 
			for (int j=0; j<c; j++)s+=b[n][j];//同一列加總 
			if (s%2) a[n][m]=-a[n][m]+1;// cout<<n<<" "<<m<<" "<<a[n][m]<<endl;一開始沒注意要把改變的值丟入a[n][m] 
		}
	}	
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cout<<a[i][j]<<" ";
			cout<<endl;
	}
}
