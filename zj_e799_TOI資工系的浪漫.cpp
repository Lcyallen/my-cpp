#include <iostream>
using namespace std;

int main (){
	int n=0, m=0; cin>>n>>m;
	char c; cin>>c;
	int a[n][m]={};//�@�}�l�u�ŧi���@���}�C�A����ӵo�{�����̧ǿ�X���G�󤣦P���C�A�ҥH�����ŧi���G���}�C�I 
	long s[n]={};//�@�}�l�ŧi��int,��WA�C��ӵo�{s<=2^64-1�A�ҥH�ŧi��long�~AC�C���D�O�n�N�Ҧ��������J������A�@����X�A�ҥH����������J���@�Ӱ}�C�x�s�C 
	for (int i=0; i<n; i++) cin>>s[i];
	for (int j=0; j<n; j++){
		for (int i=0; i<m; i++){
			a[j][m-i-1]=s[j]%2; s[j]/=2;//�Ӥ[�S�g�{���A�@�}�l�g"a[m-1]=s%2;m--"�A���G��F�n�[�ɶ��~�o�{���~���a��Om�ȷ|����A���n��X��"i<m"�N����F�I 
		}
	}
	for (int j=0; j<n; j++){
		for (int i=0; i<m; i++){
			if (a[j][i]==0)cout<<". ";
			else cout<<c<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
//���D�̭��n���N�[�O�H���ɹj�F�n�X�ѨS�g�A�}�ǫ�Ĥ@�g�}�l�g�C�G�M�ǤF�C�����~�A�Ʊ�گ�����g�{�����ߺD�C 
