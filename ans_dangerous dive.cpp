#include <iostream>
using namespace std;

int main(){
	
	int n_go, n_re;	cin>>n_go>>n_re;
	int i, back;
	int V[1000];
	
	for (i=0; i<n_go; i++)
		V[i]=0; 			//�N�h���C�ӤH����l�Ƭ�0 
	
	for (i=0; i<n_re; i++)
	{
		cin>>back;
		V[back-1]=1;	}	//�N��J�����Ǧ^�Ӫ����X��������1 

	if (n_go==n_re) cout<<"*"; 
	else {
		for (i=0; i<n_go; i++)
		{
			if (V[i]==0)
				cout<<i+1<<" ";	//�Y���X����0���N�O�S���^�ӡA��Xi+1 
		}
	}
	return 0;
}
/*
1.�G�M�O����g���{���A�u�Ϊ����
2.�ڤ]�q���Ǩ�i�H����}�C���Ʀr�����P�������P����
*/ 
