#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n]={}, b[n]={};
	for (int i=0; i<n; i++) cin>>a[i];
	int k=1;
	b[0]=a[0];
	for (int i=1; i<n; i++){	//���s��g�A��Xa[]�������ƪ��Ʀs�Jb[]�� 
		int j;
		for (j=0; j<i; j++){
			if (a[i]==a[j]) break;						
		}
		if (j==i){	//�θ��X�j��ɪ�j�@���O�_���ƪ��P�_ 
			b[k]=a[i]; k++;//b[]�Oa[]�������P�����Fk�Ob[]���Ӽ� 
		}
	}
	cout<<k<<endl;
	if (k==n){
	cout<<"NO\n"; return 0; }//�쥻�O�g�b���Ƴ̤j�ȧ�X�Ӥ���A��ӵo�{�o�ɴN��P�_�O�_�n��Xno 
	//for (int i=0; i<k; i++)	cout<<b[i]<<" ";
	int idx[k]={};
	for (int j=0; j<k; j++){
		for (int i=0; i<n; i++){
			if (a[i]==b[j])
				idx[j]++;	//idx[]�s�Jb[]�C�Ӥ������Ӽ� 
		}
	}
	//for (int i=0; i<k; i++)	cout<<idx[i]<<" ";
	int mx_idx=idx[0];
	for (int i=1; i<k; i++){
		mx_idx=max(mx_idx, idx[i]);
	}
	//cout<<mx_idx;
	for (int i=0; i<k; i++){
		if (idx[i]==mx_idx) cout<<b[i]<<" ";
	}
	return 0;
}
