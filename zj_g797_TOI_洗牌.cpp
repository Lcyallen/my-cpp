#include <iostream>
using namespace std;

int main (){
	int n, m; cin>>n>>m;
	int a[n]={};
	for (int i=0; i<n; i++){
		cin>>a[i];	//�Y�O��ư}�C��J�ɻݭn��for-loop 
	}	
	for (int l=0; l<m; l++){//�~�P������ 
		int b[n]={}, j=0;//�C���~�P�ɡAb[]�Mj���n���k�s�I�Q�ܤ[�~�o�{�����D�I 
		for (int k=0; k<n/2; k++){
			for (int i=0; i<n; i++){
				if (i%(n/2)==k){//�μƦr���ծɥi�H�A�����Ÿ��o�ѰO�O"n/2"�I 
					b[j]=a[i];	//��l�}�Ca[]�@�w�n�s�J�s�}�Cb[]���A�_�h�]�ĤG����i%(n/2)==k�ɴN�|�X���F�I 
					j++;
				}
			}
		}
		for (int i=0; i<n; i++){//�]���n�~�Pm���A�G�C���~�P�e��������b[]�A�s�Ja[]�A�o�˶i�J�~�P�j��N��A��a[]����l�}�C�Ab[]�����G�}�C�F�I 
			a[i]=b[i];
		}			
	}
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}
