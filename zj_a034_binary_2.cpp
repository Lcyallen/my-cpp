#include <iostream>
using namespace std;

int main (){
	
	long long int a; 
	int i, b[100];	//�~�M�O�]����b��l�Ƭ�0�A�y�����~�I 
	
	while (cin>>a){
		for (i=0; a>0; i++){
		b[i]=a%2;//cout<<"b["<<i<<"]"<<"="<<b[i]<<endl;//���2���ɴN���F�I
		a/=2;//cout<<"a="<<a<<endl;//��2����a�]���F�I 
		}
		//cout<<"digit = "<<i<<endl;			 
		for (int j=i-1; j>=0; j--){ 		//�o�{i�����Ʀh1�A�ҥHj�n�qi-1�}�l�L 
			cout<<b[j];	 
		}
		cout<<endl;
	}

	return 0;
}
/*
1.�o���D�طQ�F��Ѥ~�ש���եX�ӡI
2.�o�@�D�~�M���n��}�C��l�Ƥ~��
3.�b�J����D�ɡA��C�����d���L�X���G�A�A�v���Q��k�ѨM
4.for�j��̫᪺i���M�S���i�J�j����w��+1
5.���ծɨ��ı�o���|AC�A�]���p�G��J��a�ܤj�A�o�˼g���O�L�k���T��
6.�����W������bitwise operation�i�H�ܧֳB�z�o���D�A���ڬݤ��� �I
*/ 
