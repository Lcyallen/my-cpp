#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int a, b; cin>>a>>b;
	
	if (b+30>=60)
		cout<<setw(2)<<setfill('0')<<(a+3)%24<<":"<<setw(2)<<setfill('0')<<(b-30);
	else cout<<setw(2)<<setfill('0')<<(a+2)%24<<":"<<setw(2)<<setfill('0')<<(b+30);
	
return 0;
}
/*
1.������X���G���T�A�p�G����>=60�N�n�i���p�ɡA�h�p���ܦ�+3
2.�榡�ƿ�X�ѰO�F�C�n�]�w��X��ƬOsetw()�A�C�ӭn��X�����G�e���N�n�[
3.�Ů�H����Ÿ��񺡭n��setfill('')-->�n�h�Ʋ�
*/ 
