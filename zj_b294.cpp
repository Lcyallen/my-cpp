#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n]={}, s=0;
	
	for (int i=0; i<n; i++){
		cin>>a[i];
		s+=a[i]*(i+1);
	}
	cout<<s;	
	
	
return 0;
}
/*
1.�@�}�l���O�ΰ}�C�g�A�o�d�b��J�᪺�Ʀr�������B�z
2.�ΰ}�C�g�����x��
*/ 
