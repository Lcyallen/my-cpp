#include <iostream>
using namespace std;

int main (){
	int b=0, p=0;cin>>b>>p;
	int x=0, y=0, idx[b+1]={};//idx�n�q1��~b���A�ҥHidx[]�����h�@�� 
	while (p--){
		cin>>x>>y;
		if (x>y) swap(x, y);//�C����Jx, y�����ˬd�j�p�A�Yx>y�h���ƥ洫 
		for (int i=x; i<=y; i++) idx[i]++;
	}
	int mn=idx[1], mx=idx[1];
	for (int i=2; i<=b; i++){
		mn=min(mn, idx[i]);
		mx=max(mx, idx[i]);
	}
	for (int i=1; i<=b; i++){
		if (idx[i]==mn){
			cout<<i<<" "; break;//�]���n�D�u��X�Ʀr�̤p���A�ҥH�@�����Ĥ@�ӵ��G�N�nbreak(����) 
		}	
	}
	for (int i=b; i>=1; i--){//�n�D�u��X�Ʀr�̤j���A�ҥH�n�qi=b(�Ʀr�̤j��)�}�l�ˬd 
		if (idx[i]==mx){
			cout<<i; break;//�@�����Ĥ@�ӵ��G�Nbreak 
		}		 
	}
	return 0;
}
