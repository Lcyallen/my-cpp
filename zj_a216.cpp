#include <iostream>
using namespace std;
int F(int);
long long int G(int);	//�ݺ����W���Q�פ~���DG�X�Ӫ��ȷ|�ܤj�n��long long 
int main(){
	int a;
	while(cin>>a){
		cout<<F(a)<<" "<<G(a)<<endl;
	}
	
return 0;
}

int F(int n){
	if (n==1)
		return 1;
	else{
		return n+F(n-1);
	} 
}

long long int G(int n){
	if (n==1)
		return 1;
	else{
		return F(n)+G(n-1);
	}
}

/*
1.�Q�γo�@�D�m�߼g���j�A���m��²�檺�A�^�Ӽg�o�@�D
2.���P��Ƥ����i�H�ۤ��I�s(G�i�H�I�sF)
*/ 
