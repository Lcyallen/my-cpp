#include <iostream>
using namespace std;

int main (){
	string A, B;
	cin>>A>>B;
	int la=A.size(), lb=B.size();
	int j=0, k=-1;
	
	for (int i=0; i<la; i++)
	{
		for (j=k+1; j<=(lb-la+i); j++)	//(2)
		{
			if (A[i]==B[j]){	//(3)
				k=j; break;		//(6)
			}
		}
		if (j==lb-la+i+1){		//(4)
			cout<<"NO\n"; return 0;
		}	
	}
	cout<<"YES\n";	//(5)

return 0;
}
/*
1.�o�@�D�@�}�l�����D���٭n�D���ӡu���ǡv�ҥH�d�b�̫�@�Ӵ���S�L�C���G�Q�F�n�[
2.1�@���H�ӹ��o�إ�for-loop+if�ˬd�A�ˬd�̫�p�G���S���ŦX�������ӫ��g���S���ⴤ�C�{�b�j�����I�߱o�C
2.2 j���ˬd�����ˬd��string B���̫�@�Ӧr���A�]���o�D�@�w�n�Ӷ��ǡA�ҥHA[0]�̫�X�{�����|�u��B[lb-la+0]�A�W�L�F�N��ŦX�]�S���� 
3.if�u�t�d�ˬd����@���Abreak��O���Xfor-loop���u�U�v����~��loop�A���ɪ�j�Obreak��ɪ�j�C 
4.�o�̴N�O�u�p�G�Ҧ���j���ˬd���A�ӥB�S���ŦXif���󪺮ɭԡv���ӫ��B�z--���p�G�S���A�@��if�A�h�O�C�@�ӡu���X�v�j��Ρu�����v�j�鳣�|����A�n�`�N�I 
5.�Ӳz�o�����ӬO18�檺if���ŦX��21�檺for-loop�����᳣�|����22��A��19�榳�g�p�G�L�XNO�Nreturn 0�F�A�ҥH�ਫ��22�檺�u��YES�����p
6.��j������k�ܭ��n�A�]���U�@�Ӧr�����j�M�N�qk+1�Ӷ}�l�N�n�F�A���p�G�S���s�ؤ@���ܼ�k�Aj�O�|�ܰʪ� 
*/ 
