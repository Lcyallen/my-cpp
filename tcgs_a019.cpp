#include <iostream>
using namespace std;

int main(){
	
	int a, b; cin>>a>>b;
	
	if (b%3==2)
		cout<<200;
	
	else if (a%2!=0)	
		cout<<100;
	
	else if (a==b)
		cout<<50;	
		
	else
		cout<<0;
		
	return 0;
}

/*
1.���s�Ʋ�if-else if ���ϥήɾ��C
2.���F���ɾ��~�A�{���O�q�Ĥ@�ӱ���}�l�ˬd�C�p�G�ŦX�Y�ӱ���A�U��������N���|�A�ˬd�F�I
*/ 
