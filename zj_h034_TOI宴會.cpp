#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int l[n]={0}, mx_l=0; //�Ф@�Ӧs�U�r����ת��}�C�H�Χ�X�r����ת��̤j�� 
	char a[200][100]={0};	//�G���}�C������l�ơA��J���r���G�ŧi��char�A����l�Ƭ�={0} 
	for (int j=0; j<n; j++){//�̾ڤ@�}�l��J��n�M�w�|��J�X�Ӧr�� 
		string s; cin>>s;	//�}�l��J�r�� 
		l[j]=s.size();		//�O���C���r�ꪺ���� 
		mx_l=max(mx_l, l[j]);//��X�C���r����ת��̤j�� 
		for (int i=0; i<l[j]; i++){//�N��J���r��s�J�G���}�C(�o�����Q�W�[�~���\!) 
			a[j][i]=s[i];
		}
	}
/*	cout<<mx_l;
	for (int j=0; j<2; j++){
		for (int i=0; i<l[j]; i++)
			cout<<a[j][i];
			cout<<endl;
	}*/
	for (int i=0; i<mx_l; i++){	//�ھڦr����ת��̤j�ȨM�w���X���{�ǡC���T�w���O�u��(column)�v 
		for (int j=0; j<n; j++){//���]���O�u�C(row)�v�A��"�C"���ȶ]���A�]�~��T�w��"��" 
			if (a[j][i]>='A'&&a[j][i]<='Z')
				cout<<a[j][i];
		}
	}
	
return 0;
}
