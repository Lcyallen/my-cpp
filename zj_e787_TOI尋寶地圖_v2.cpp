#include <iostream>
using namespace std;

int main (){
	
	int r, c; cin>>r>>c;
	int a[r][c]={}, b[r][c]={};
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cin>>a[i][j];
	}
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cin>>b[i][j];
	}
	for (int n=0; n<r; n++){	//�bi,j���e�A�ŧi����ܼ�n,m�ӱ���P��P���P�C�A�o�ӧޥ��Q�n�[�~�Q��I 
		for (int m=0; m<c; m++){
			int s=-b[n][m];
			for (int i=0; i<r; i++)s+=b[i][m];//�P�@��[�` 
			for (int j=0; j<c; j++)s+=b[n][j];//�P�@�C�[�` 
			if (s%2) a[n][m]=-a[n][m]+1;// cout<<n<<" "<<m<<" "<<a[n][m]<<endl;�@�}�l�S�`�N�n����ܪ��ȥ�Ja[n][m] 
		}
	}	
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cout<<a[i][j]<<" ";
			cout<<endl;
	}
}
