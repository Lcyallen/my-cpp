#include <iostream>
using namespace std;

int main (){
	int n=0, t=0; cin>>n>>t;
	int a[n][t]={};
	for (int i=0; i<n; i++){
		for (int j=0; j<t; j++)
			cin>>a[i][j];
	} 
	
	cout<<"AND: ";
	for (int i=0; i<t; i++){
		bool b=0, c=a[0][i], d=a[1][i];//�]�ĤG�椧�e��������b, c, d�����k�s�I 
		for (int j=0; j<n-1; j++){	//�]�����ƬOn-1���A�n�`�N�I 
			b=(c&&d);	//����(c&&d)�����G�D�X�� 
			c=b; d=a[j+2][i];//���ᴫ��Cb�s�J�s��c�B�U�@���s�J�s��d 
		}cout<<b<<" "; 
	} 
	cout<<endl<<" OR: ";
	for (int i=0; i<t; i++){
		bool b=0, c=a[0][i], d=a[1][i];
		for (int j=0; j<n-1; j++){
			b=(c||d);
			c=b; d=a[j+2][i];
		}cout<<b<<" "; 
	} 
	cout<<endl<<"XOR: ";
	for (int i=0; i<t; i++){
		bool b=0, c=a[0][i], d=a[1][i];
		for (int j=0; j<n-1; j++){
			b=(c xor d);
			c=b; d=a[j+2][i];
		}cout<<b<<" "; 
	}
	return 0;
}
