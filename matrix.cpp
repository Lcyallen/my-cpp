#include <iostream>
using namespace std;

int main(){
	
	int A[2][3]={{1,2,3},{3,2,1}};		//A�O2*3���x�}-->2�C3�� 
	int B[3][2]={{1,2},{2,3},{3,4}};	//B�O3*2���x�}-->3�C2�� 
	int C[2][2]={{0},{0}};			//C�OA*B���x�}=2*2-->2�C2��A��l�ƨC�Ӥ�������0 
	
	for (int i=0; i<2; i++)		//i�ȬO�C�A�n��C�άOA���C��-->2 
	{
		for (int j=0; j<2; j++)	//j�O��A�n��C�άOB�����-->2 
		{
			for (int k=0; k<3; k++)		//k�OA�MB�ۭ��Q"�l�� "��������-->3 
				C[i][j]+=A[i][k]*B[k][j];	//C�n�O�o�β֥[���覡��C��A(i,k)*B(k,j)�����G���[�_�� 
		}
	}
	
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout<<C[i][j]<<"\t";		//�C�L�ɤw�g�Τ���k�F 
		}
		cout<<endl;						//�C�@�C��X���n���C 
	}
	
	return 0;
}
