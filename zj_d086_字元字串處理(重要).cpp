#include <iostream>
using namespace std;

int main (){
	
	string A;
	int i;
	while(cin>>A, A!="0"){	//�o�O�ݪO���Ѯv�g���A�~���D���while�A���̥i�H�g���u�@�ӱ���A�u�n�γr�I���}�C�ӥB�O�Φr��ӿ�J���� 0�A�ҥH�n��"0" 
		int l=A.size();
		int sum=0;
		for (i=0; i<l; i++){
			if (A[i]<'A'||A[i]>'Z'&&A[i]<'a'||A[i]>'z')	//�Y��J���O�j�p�g�^��r���A�N���X�j�� 
				break; 
			if ('a'<=A[i] && A[i]<='z')					//�O���v�g���O if ('a'<=A[i])�������Ӥw�A�ȱo�ǲ� 
				sum = sum+(A[i]-'a'+1);
			else										//�O���v�g���A�[���W�j�I 
				sum = sum+(A[i]-'A'+1);	
			/*else
				cout<<"Fail\n";*///�o�̤��ޫ��ﳣ�L�k���\�I���X���j����٬O�|��Xsum�A�@���Q������ѨM
		}
		
		if (i==l) 
			cout<<sum<<endl;
		else
			cout<<"Fail\n";		/*��ӭn�o�˼g�C�Q�ζ]���j��᪺i�P�_���ӿ�X���@�ر��p�I 
	}
		
	return 0;
}
