#include <iostream>
using namespace std;

int main(){
	
	string A;
	cin>>A;
	
	int l=A.size();
	
	for (int i=0; i<l/2; i++){
		if (A[i]!=A[l-1-i]){
			cout<<"no\n";
			return 0;
		}
	}
	cout<<"yes\n";
	
	return 0;
}
/*
1.Yui Huang���ѵ��A�u�O�ӼF�`�F�I
2.�Q��i�H����"return 0;"�o�˹q���N���ΦA�]���򪺵{�ǤF
3.�p�G�O�ڦۤv�g�A�i��|�q�u��������v�g�a�I�����D�o��ؼg�k�q���]�o�֤���֡C
*/
