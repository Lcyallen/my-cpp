#include <iostream>
using namespace std;

int main (){
	int n=0; cin>>n;
	int a[n][n]={};
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)
		cin>>a[i][j];
	} 
	int  i=0;//�̥~��񧹥������k�s��i 
	for (int l=1; 2*l<=n; l++){//�`�Nl�q1�}�l���O�q0�F����i�H2*l<=n�A�]�i�H�gl<=n/2 
		int j=0;	//�����@�h��C�C��X����A�A�U�@�C�ɥ����k�s��j 
		for (int k=1; 2*k<=n; k++){//k�q1�}�l���O�q0�}�l 
			int mx=a[i][j], b=a[i][j+1], c=a[i+1][j], d=a[i+1][j+1];//�̤���O�C���n�D�̤j�Ȫ�4�ӼƳ��o�k�s�@�� 
			mx=max(max(max(mx,b),c),d); cout<<mx<<" "; j=j+2;
		}cout<<endl; i=i+2;
	}
	
	return 0;
}
//�o���ϥΡu����v�������A�Pı����n�g�C�Y�u��for-loop���ӷ|�g�o��·� 
