#include <iostream>
#include <cctype>
using namespace std;

int main (){
	string A, B;
	int n=0, s=0;
	for (int i=1; i<=3; i++){
		cin>>A;
		int l=A.size();
	
		for (int i=0; i<l; i++){
			if (isdigit(A[i]))
				n=n*10+(A[i]-'0');//(1)
		}
		s+=n;
		n=0;
	}
		cout<<s<<endl;
	
	return 0;
}
/*
1-1.�o�˼g���O�ݺ����O�H���g�k���A�쥻�S�Q��i�H�����ഫ���ƭ� 
1-2.�i�H������A[i]-'0'�ഫ���Ʀr�N���ΰO-48�F 
2.�쥻��o�D�3�ӨB�J�A���M�ۤv�b���ծɥi�H�A�����������@�Ӵ���S�L�A���S����] 
