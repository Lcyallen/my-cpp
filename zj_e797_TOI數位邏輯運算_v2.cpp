#include <iostream>
using namespace std;

int main (){
	int r, c; cin>>r>>c;
	int s[r][c]={};
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cin>>s[i][j];
	}
	cout<<"AND: ";
	int i, j;
	for (j=0; j<c; j++){
		for (i=0; i<r; i++){
			if (s[i][j]==0){
				cout<<"0 "; break;//�u�n���@�ӬO0�N�i��X0�A�M����X�j�� 
			}		
		}
		if (i==r) cout<<"1 ";//�@�}�l�����m�A�G�M�[�S�g���ѤF 
	}
	cout<<"\n OR: ";
	for (j=0; j<c; j++){
		for (i=0; i<r; i++){
			if (s[i][j]==1){
				cout<<"1 "; break;
			}		
		}
		if (i==r) cout<<"0 ";
	}
	cout<<"\nXOR: ";
	for (j=0; j<c; j++){
	int count=0;	//�@�}�l��bfor�W���A���O�����C�]���C���i��for-loop�������k�s�I 
		for (i=0; i<r; i++){
			if (s[i][j]==1)count++;
		}
		if (count%2)cout<<"1 ";
		else cout<<"0 ";
	}
}
