#include <iostream>
using namespace std;

int main (){
	int n=3, a[n]={}, idx[9]={};	//�Ф@��idx�}�C 
	for (int i=0; i<n; i++){
		cin>>a[i];
		idx[a[i]-1]++;				//���J���Ʀr+1�p���J���Ʀr���X�� 
	} 
	
	int mx=idx[0];
	for (int i=1; i<8; i++){
		mx=max(mx, idx[i]);			//�������⪺�g�k�O�g�b�W�@��for�̭��I�I 
	} 
	cout<<mx<<" ";	
	
	for (int i=8; i>=0; i--){
		if (idx[i]) cout<<i+1<<" ";
	}
}

/*
1. 2022.6.12APCS���Ĥ@�D�A��ɦ]���L�k���Q�]�wcode blocks�A�u�n�νa�|�k�C
2. ��ӰѦҺ������⪺�Q�k�A�g�F�o�Ӫ����C 
3.�O�H�g��������²��
*/ 
