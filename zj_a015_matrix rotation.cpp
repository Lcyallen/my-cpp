#include <iostream>
using namespace std;
int main (){
	int r, c;

	while(cin>>r>>c){
		int A[r][c]={0}, At[c][r]={0};
	
		for (int i=0; i<r; i++){
			for (int j=0; j<c; j++){
				cin>>A[i][j];
				At[j][i]=A[i][j];
			}
		}
/*	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cout<<A[i][j]<<" ";
			
			cout<<endl;
	}//�o�O�ڦb�g���ɭԥ��T�w��J���x�}�S���D*/
		for (int j=0; j<c; j++){	//�n�`�N½��x�}�����ƻP�C�ƪ��p�ƾ����F�A�n�O�o��I
			for (int i=0; i<r; i++)
				cout<<At[j][i]<<" ";//½��x�}��ƥ�j�ӱ���A�C�ƥ�i�ӱ���I
			
				cout<<endl;
		}
	
	}
	
	return 0;
}
