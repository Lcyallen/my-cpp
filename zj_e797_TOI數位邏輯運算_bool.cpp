#include <iostream>
using namespace std;

int main (){
	int n=0, t=0; cin>>n>>t;
	int a[n][t]={};//a�}�C�i�ŧi��int 
	for (int i=0; i<n; i++){
		for (int j=0; j<t; j++)
			cin>>a[i][j];
	}
	cout<<"AND: ";
	for (int j=0; j<t; j++){
		bool b=a[0][j];//�n��b�ܦ�bool�ȩҥHb�n�ŧi��bool 
		for (int i=1; i<n; i++){
			b=(b && a[i][j]);//�n��a�}�C���C�ӼƳ��@&&�ӭp��bool�ȩҥH�����Q��b���La�}�C���ȧ@&& 
		}
		cout<<b<<" ";		
	}
	cout<<endl<<" OR: ";
	for (int j=0; j<t; j++){
		bool c=a[0][j];
		for (int i=1; i<n; i++){
			c=(c || a[i][j]);
		}
		cout<<c<<" ";		
	}
	cout<<endl<<"XOR: ";
	for (int j=0; j<t; j++){
		bool d=a[0][j];
		for (int i=1; i<n; i++){
			d=(d xor a[i][j]);
		}
		cout<<d<<" ";		
	}
	cout<<endl;
	return 0;
}
