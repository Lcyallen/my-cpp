#include <iostream>
using namespace std;

int main (){
	string A, B;
	int n;
	
	cin>>A>>n;
	for (int i=0; i<n; i++){
		cin>>B;	//�Q�d�b�o�̫ܤ[�A�@���H����J������while�A�����i�H�����g�b for-loop�̭��N�n�I 
		int c_a=0, c_b=0;
		for (int i=0; i<4; i++){
			if (A[i]==B[i]) c_a++;
		}
		cout<<c_a<<"A";	
		for (int i=0; i<=4; i++){
			for (int j=0; j<=4; j++){
				if (i==j) continue;	//�@�}�l�S���Q���continue�A�٧�i!=j�g�b�P�_���A���L�k����C��Ӥ~�Q���if...continue 
				if (A[i]==B[j]) c_b++;
			}
		}
		cout<<c_b<<"B"<<endl;
	}
	
return 0;
}
/*
1.�̤j���i�B�b��Q���if..continue�Ӹ��L�����檺���p
2.�n�O�o��J�X������cin�i�H�����g�bfor-loop�̭�
*/ 
