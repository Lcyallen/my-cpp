#include <iostream>
#include <cmath>
using namespace std;

int main (){
	string a;		//���J���Ʀr���r��ӳB�z 
	cin>>a;
	int l=a.size();	//�������D�o�Ӧr��X��� 
	
	int inv=0;		//�쥻��inv�g���}�C�A��ӵo�{inv���Ӽg����ƴN�n 

	for (int i=0; i<l; i++)
		inv+=(a[i]-48)*pow(10.0,i);	//��r���ܦ��Ʀr�O�o�n�u-48�v�A�٦�pow�����ƥ����g��float�A���M�|�X�{CE�I 

	cout<<inv;
	
		
return 0;
}

/*
1.���e���J���Ʀr����ƳB�z�A��J�M��X�������ΰ}�C�A�`ı�o���I�·�
2.�{�b���J���Ʀr���r��A�u�n�O�oa[i]�n��48�~�|�ܦ��Ʀr�I
3.pow�����ƭn�Ofloat�A�ڲĤ@���ݨ�CE�I
*/ 
