#include <iostream>
#include <iomanip>>
using namespace std;

int main (){
	long long int h2, m2, s2, h, m, s;	//�ݸѵ��~�ոե�long long, �_�h�ڤ]�����D����|�X�{�t�� 
	cin>>h>>m>>s;
	s2 = s%60;
	m2 = (m+s/60)%60;
	h2 = (h+(m+s/60)/60)%24;
	cout<<setw(2)<<setfill('0')<<h2<<":"<<setw(2)<<setfill('0')<<m2<<":"<<setw(2)<<setfill('0')<<s2;
}

/*
1.�榡�ƿ�X�bcout<<�᭱�g'setw(2)'���w��X�e�׬�2
2.setfill('0') ���w��R�r����0 
3.�S���g�a�k����I��AC�A�O�_��ܹw�]����O�a�k 
