#include <iostream>
using namespace std;

int main (){
	string A; cin>>A;
	int l=A.size();
	
	for (int i=0; i<l; i++)
		cout<<char((A[i]-40)%26+64);//(5)

//cout<<char(('A'-64-2+26)%26+64);	//(4)
return 0;
}
/*
1.cout<<int('a');�i�H�����L�X�C�Ӧr����ASCII code
2.cout<<'a'-'b';�i�H�ন�ƭ� 
3.cout<<char(65)�i�H�L���r��
4.��A���ݪ�ascii�X(65)��-64�����^��1,�A-2���e���(�������}�r���F)����+26�A%26�~��^�쥿�T�r���u���ǡv�A+64�^�쥿�Tascii�X 
5.�쥻�H���u�n��C�Ӧr��-2�N�i�H�F�A���S�`�N��A�MB��Ӧr��-2�|�u�X�ɡv�A�u�n�Q��%��Ʀr�վ�^�� 
*/
