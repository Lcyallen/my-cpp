#include <iostream>
using namespace std;

int main (){
	
	string a;
	while (cin>>a){
		a[0]-=32;		//�@�}�l���M�ѤF�n�32�n"����"��a[0]�I�t�~�p�g�r���ܦ��j�g�n�O�o�O-32�C
		cout<<a<<endl;
	}
	
	return 0;
}
