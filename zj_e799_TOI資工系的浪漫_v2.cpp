#include <iostream>
using namespace std;

int main (){
	int n, m; cin>>n>>m;
	char c, p[m]="";cin>>c;//��X�����G�O�r���}�C 
	long s[n]={};	//�ѦҤ��e�g�����e�~��"int"��אּ"long"�I 
	for (int i=0; i<n; i++)cin>>s[i];
	
	for (int j=0; j<n; j++){
		for (int i=0; i<m; i++){
			if (s[j]%2) p[m-i-1]=c;
			else p[m-i-1]='.';
			s[j]=s[j]/2;		
		}
		for (int i=0; i<m; i++)cout<<p[i]<<" ";
		cout<<endl;
	}
}
//�@�}�lWA�A�ѦҤ��e�g���e�o�{�H�e�O�g���G���}�C�A���o���ڼg���@���N�i�H�F�I
 
