#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	
	int j, temp=-10;	//�@�}�l�ڳ]��l�Ȭ�a[0]�A���p�Ga[0]�N�O�̤j�ȡA�N���|�洫�A����i���N�|�X���F 
	for (int i=0; i<n; i++){
		if (a[i]>temp){
			temp=a[i];
			j=i+1;
		} 
	}
	cout<<j<<" "<<temp;
	
return 0;
}
/*
1.�쥻�H�����e�m�߹L�ҥH�i�H�@��AC�A���G�S�`�N��n�C�X��i���٬O������
2.��l�Ȥ���]�ƦC������@���A�_�h�p�G��n���@���O�̤j�ȴN���|��temp�洫�A�N�o���쥿�T��i��
*/ 
