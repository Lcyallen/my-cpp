#include <iostream>
using namespace std;

int main (){
	long long int n=0; cin>>n;
	int k[10]={};	
	while (n){
		k[n%10]++;	//�p��X�q0~9�����N�ץX�{���� 
		 n=n/10;
	}	
	for (int i=19; i>0; i--){	//n�u��19��ơA�ҥH���N�ץX�{�̦h�]�u��19���C�ѥX�{"�̦h"���}�l�L 
		for (int j=0; j<10; j++){
			if (k[j]==i) cout<<j<<" ";	//���N��"�Ӽ�"=i�ɡA�N�L�X�O"�ĴX�Ӽ�j" 
		}		
	}
}

/*
1.�o�@���]�ק�L�ܦh���A�쥻��Ĥ@���@�ˡA�Q�⺡�N��0~9�X�{�����ƥѤp�ƨ�j�A���o���٬O�|�����D�I
2.�]���p�G���ƬۦP�ɭn�q���N�פp�����L�A�p�G��swap�A�̫᪺�ƦC���@�w�O���N�פp���b�e
3.�p�G��sort�A�|���h�@�}�lk[i]��i�����
4.��ӷQ�n��"���Ƴ̰�"���}�l�L�A�L�즸��=1���N����C�o�˴N�i�H�qk[i]�}�C�ѥ��V�k�M��
5.�o�˪��g�k���ΦA�h�g�@��idx�}�C�A�]���ξ��n�O�X��ơI 
