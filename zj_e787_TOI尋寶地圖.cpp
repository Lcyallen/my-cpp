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
			int sum=-b[k][l];//�쥻�H��sum�n�g���}�C�A��ӵo�{���ΡC���F�קKb[k][l]�[2���A�b�@�}�l�N�Osum=-b[k][l] 
			for (int j=0; j<m; j++)	sum+=b[k][j];//���P�@�C���ƥ��[�_�� 
			for (int i=0; i<n; i++) sum+=b[i][l];//�A�P�@�檺�ƥ[�_�ӡC�n�`�N�o�˪��g�k�P���~�j�骺�g�k���P 
			if (sum%2) a[k][l]=(a[k][l]+1)%2;//�Y��la[k][l]==0�A�[1�A/2�|�l1�F�Y��la[k][l]==1�A�[1/2�|�l0 
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}
	
	return 0;
}
