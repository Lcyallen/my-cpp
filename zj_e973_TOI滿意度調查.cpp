#include <iostream>
using namespace std;

int main (){
	string s;
	int idx[10]={0}, a[10]={0};//�Y������idx[]���s�ƦC�A�|���h���e�ĴX�Ӧ�m����T�A�ҥH�A�Ф@�ӷs�}�C�ΨӱƦC 
	cin>>s;
		for (int i=0; i<10; i++){
			for (int j=0; j<s.size(); j++){
				if (s[j]-'0'==i)//�S�ѰO�n��r���ন�Ʀr�I 
					idx[i]++;	//�p��0~9���N�ץX�{�X�� 
			}a[i]=idx[i];		//���n�����N�׵��G�s�J�s�}�Ca[]	
		}
		for (int i=0; i<10; i++){
			for (int j=i+1; j<10; j++){
				if (a[j]>a[i])
					swap(a[j], a[i]);//�⺡�N�ץѰ���C�ƦC�A�Φ��s��a[i]
			}		
		}
		for (int i=0; i<10; i++){
			for (int j=0; j<10; j++){
				if (idx[j]==a[i]&&a[i]!=a[i+1]&&a[i]!=0)//�Y�ֲ�2�ӱ���|���ƿ�X�ۦP���N�ת���m�F�Y�ֲ�3�ӱ���h�S�X�{�����N�פ]�|��X 
					cout<<j<<" ";
			}
			 
		}
			
	
	
	
return 0;
}
