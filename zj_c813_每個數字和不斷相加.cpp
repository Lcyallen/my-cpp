#include <iostream>
using namespace std;
int G(int n){
	int g=0;
	while (n){	//�u�n�i�Ӫ��Ʀrn!=0�A�N�@���]�j�� 
		g+=n%10;
		n/=10;
	}			//��n���C�ӼƦr�ۥ[ 
	if (g<10)	//�P�_�Ĥ@���Ʀr�M�O�_<10 
		return g;
	else
		return G(g);//�p�G�Ʀr�M>10�A�h�~���JG��ƦAreturn 
}
int main (){
	int n;
	while (cin>>n, n){
		cout<<G(n)<<endl;//�쥻�Q�b�^�ǭȳo�̧P�_�O�_�ݭn�A�I�sG��ơA���o���ѡC���ӦA�Q�Q���g 
	}
	
	return 0;
}
