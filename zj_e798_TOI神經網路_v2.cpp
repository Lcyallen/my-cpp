#include <iostream>
using namespace std;

int main (){
	int n=0;cin>>n;
	int s[n][n]={};
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)cin>>s[i][j];
	}
	for (int i=0; 2*i<n; i++){	//
		for (int j=0; 2*j<n; j++){//
			int a, b, c, d;	//�h�ŧi4���ܼơA�U���n��̤j�� 
			a=s[2*i][2*j], b=s[2*i][2*j+1], c=s[2*i+1][2*j], d=s[2*i+1][2*j+1];//�o�̷Q�̤[�A�n�p����Ӥߤ����Q�k�]loop�O�̤j���D�� 
			int mx=a;
			mx=max(max(max(mx,b),c),d);//���M�ѤF�i�H�o�˼g�I 
			cout<<mx<<" ";
		}cout<<endl;
	}
}
/*
1.�j�F�ܤ[�^�Ӵ_�ߡA �G�M�ѤF�ܦh�F��C�D�n�d�b�����index�]���@�������2�椧��C
2.�o���g����k��W�����P�A�i�H���۰ѦҾǲߡC
*/ 
