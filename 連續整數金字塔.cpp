#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int row, k=1, an=k;		//k�b�ifor-loop�e��l�Ȭ�1�A�����ŧi�@�ӷs�ܼ�an��k��i�h�x�s�A�~��bfor-loop�̭��ϥ� 
	cin>>row;
	for (int j=1; j<=row; j++){	//j�Ψӱ���ĴX�C�A�g�b�̤W�h�C�@�w�O�q1~row 
		for (int i=row-j; i>0; i--)//��i����C�@�C�̥������ơC�p�G�n��X�ۦP���F��(�Ů�)�n�Q���O�C�@�C�n�L�X�Ӥ~����A��"i=row-j"�ӱ��� 
			cout<<" ";
		for (; k<j+an; k++)		//��k�ӱ����X�Ʀr�A���C�@�C��"��l��"�O����W�@�C�̥��ȡA�ҥHk����bfor-loop�̭��ŧi�A�n�b�~���ŧi�C 
			cout<<fixed<<setw(4)<<k;
		an=k;
		cout<<endl;
	}
	
	return 0;
}
