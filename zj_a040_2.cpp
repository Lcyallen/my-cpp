#include <iostream>
#include <cmath>
using namespace std;
int Arm (int);
int main(){
	int a, b; cin>>a>>b;
	int t=0;
	for(int i=a; i<=b; i++){
		if(Arm(i)!=0)		//�@�}�l�O��Ҧ��^�ǭȦL�X�ӡA�n�վ㦨���O0�A�L 
			cout<<Arm(i)<<" ";
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
	if (s==a0) return a0;	//�����J���˴��ȷ��^�ǭȤ]�O�i�H�� 
	 	else return 0;		//�Y���󤣲ūh�^��0 
}
