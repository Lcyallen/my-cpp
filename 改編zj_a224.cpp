//zj_a224���~�ѡA�H���n�P�_��D�^��r���簣�᪺�s�r��O�_���j��

#include <iostream>
using namespace std;

int main (){
	
	string A, B;
	int i=0, j=0;
	cin>>A;
	for (i; i<A.size(); i++){
		if (A[i]>='A'&&A[i]<='Z'||A[i]>='a'&&A[i]<='z'){	//��J���r�ꤤ�u���^�r���Q�̧Ǳ�B�r�� 
			B[j]=A[i]; j++;		//�O�o�nj++�A�U�@�ӱƶi�Ӫ��s�r���~�|���s����m 
		}
	}
	int k=j;	//�s�W�ܼ�k�A��r��B����Ʀs�ik�A�_�hB�r�ꪺ�r��L�k�o�� 

	for (j=0; j<k; j++){
		if (B[j]>='a'&&B[j]<='z'){
			B[j]-=('a'-'A');	//��r��B�����p�g�r�������j�g�r���C���ΰOA~a�O�h�֡A�u�ݥΦr���۴� 
		}
	}
	for (j=0; j<k/2; j++){		//�j��u�ݭn�ˬd�줤���r�� 
		if (B[j]!=B[k-j-1]){	//�ϦV����A�@�����ۦP�N���X 
			cout<<"no...\n"; return 0;
		}
	}cout<<"yes !";
					
	return 0;
}
