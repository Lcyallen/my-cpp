#include <iostream>
using namespace std;

int main (){
	
	int n, a=0; cin>>n;
	
	while(n!=0){
		a=a*10+n%10;
		n/=10;
	}
	cout<<a;
	
	return 0;
}
/*
1.���s��while�g�A�w��s�ƭȦp��B�z�Q����[
2.��l�ȳ]��0�A�C�����s�Ʀr�N�[�i��
3.���s�Ʀr�ɡA��a�ȴN�n�ܬ�10��
*/ 
