#include <iostream>
#include <cmath>
using namespace std;
int Arm (int);
int main(){
	int a, b; cin>>a>>b;
	int t=0;
	for(int i=a; i<=b; i++){
		if (Arm(i)==1)	//�p�G�^�ǭȬ�1�A��ܥ�J��i�OArm 
			cout<<i<<" ";
		t+=Arm(i);		//���F�T�{�O�_�����DArm�A��^�ǭȲ֥[ 
	}
	if (t==0) cout<<"none";//�p�G�Ҧ��^�ǭȲ֥[=0�A�h�������OArm 
return 0;
}

int Arm (int a){
	int a0=a;	//a�b�B�z��ȷ|���ܡA�ҥH�A�g�@���ܼƦsa����l�� 
	int d=log10(a)+1;
	int s=0;
	for (int j=0; j<d; j++){
		if (a>0){
			s+=pow(a%10,d);
			a/=10;
		}
	}
	 return (s==a0);	//�Q��i�H�Q��bool�Ȱ��^�ǭȡA�H()�����P�_�� 
}
/*
1.ı�o����L�{�g���禡�n������n
2.�@�}�l���^�ǭȬ�s�o����A�٤����D��]
*/ 
