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
				row[c]=i; column[c]=j;//���u�ƶq��c�ӡA�s���urow�Mcolumn���ƶq�O�P�B�� 
				c++;	//�p�⦳�X�Ӭ��u 
			}	
		}
	}
//	for (int i=0; i<c; i++)
//		cout<<row[i]<<" "<<column[i]<<endl;

	for (int i=0; i<c; i++){	//���T�w���u���C�A���u��c�ӡI 
		for (int j=0; j<n; j++) //��C�@�檺���u����*�A�n��n���I 
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
