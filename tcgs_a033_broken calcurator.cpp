#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int a; cin>>a;
	
	if (a<10000)
		cout<<"|____"<<setw(4)<<setfill('_')<<a<<"|";
	
	
	else
		cout<<"|____"<<setw(4)<<setfill('0')<<a%10+(a/10%10)*10+(a/100%10)*100+(a/1000%10)*1000<<"|";
		
	return 0;
}

/*
1.�b�������Q�פ��~�ݨ줴�M�i�H���J���Ʀr�A�����j��10000�M�p��10000��ر���
2.�p�G�j��10000���e���Ʀr�O0�����d�U�ӡA���p�G�Q��%�o���|��̫e����0�O�d�C���ɥi�H��0��setfill('0')�ӳB�z�I�u���ӼF�`�F�I
3.�榡�ƿ�X�O�����Ʋߪ��D�D�I
*/ 
