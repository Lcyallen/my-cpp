#include <iostream>
using namespace std;

int main (){
	int r, c, n; cin>>r>>c>>n;
	int a[r+1][c+1]={}, ind=1;	//�h�[�@��P�@�C�O����n�u����v�ɥ����u����̫�@��(�̫�@�C)���Ʀr������Ū��}�C���A�_�h��l�ȷ|�Q�\�� 
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			a[i][j]=ind; ind++;	//�۰ʫ����}�C���Ʀr 
		} 
	}
	for (int k=(n-1)/2; k>0; k--){	//���Ჾ�ʦ��� 
		for (int i=r; i>=0; i--){	//�u�Q�����i--�A�٨S�Q�����i++ 
			for (int j=0; j<c; j++)
				a[i][j]=a[(i+r)%(r+1)][j];//�o�O�Q�̤[���a��I���F�n"�`��"�ҥH������"%"�A�ӥB�Ĥ@�ӭn����̫᪺�}�C����ťհ}�C 
		}
	}
	for (int k=n/2; k>0; k--){	//���k���ʦ��� 
		for (int j=c; j>=0; j--){
			for (int i=0; i<r; i++)
				a[i][j]=a[i][(j+c)%(c+1)];
		}
	}
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cout<<a[i][j]<<" ";cout<<endl;
	}			
}
	
