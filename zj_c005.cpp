#include <iostream>
using namespace std;

int main(){

	int n; cin>>n;
	for (int j=1; j<=n; j++){
		int f ; long long int a1, a2, a3;
		cin>>f;
		long long int s=0;		//�n�`�N�����ƾڥ[�`��O�_�W�Xint
		for (int i=1; i<=f; i++){
			cin>>a1>>a2>>a3;
			s+=a1*a3;
		}
		cout<<s<<endl;	
	}
	
	
return 0;	
}
/*
1.�쥻�H�������ΰ}�C�g�A ���G��ۤv�d���F�]�g���X�ӡI
2.��ӥ���̤��骺�n�D(i=1)�g�X�Ӥ���A�~���A�[�@�Ӱj��(j=1)�A�~����
3.�j�鰵�X���i�H�����έp�ƾ�(i=1��j=1)�B�z�A�̭��A��Ja�� 
*/
