#include <iostream>
using namespace std;

int main (){
	int n;cin>>n;
	char map[n][n];
	int row[n*n]={}, column[n*n]={},c=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin>>map[i][j];
			if (map[i][j]=='*'){
				row[c]=i; column[c]=j;//炸彈數量有c個，存炸彈row和column的數量是同步的 
				c++;	//計算有幾個炸彈 
			}	
		}
	}
//	for (int i=0; i<c; i++)
//		cout<<row[i]<<" "<<column[i]<<endl;

	for (int i=0; i<c; i++){	//先固定炸彈的列，炸彈有c個！ 
		for (int j=0; j<n; j++) //把每一行的炸彈換成*，要做n次！ 
		map[row[i]][j]='*';
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<c; j++)
		map[i][column[j]]='*';
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)
		cout<<map[i][j];
		cout<<endl;
	}
}
