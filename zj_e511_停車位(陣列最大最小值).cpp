#include <iostream>
using namespace std;

int main (){
	
	int t, i, n, a[20];
	cin>>t;
	while(t--){
		cin>>n;
	for (i=0; i<n; i++)	//�̧ǿ�Ja[i]�ƭ� 
		cin>>a[i];
		
	int mx=0, mn=100;	//����l��max�Mmin 
	for (i=0; i<n; i++){
		if (a[i]>mx)	//�N�}�C���C�Ӽƭȸ�max�� 
			mx=a[i];	//�Y��max�j�N��Jmax
		if (a[i]<mn)	//�N�}�C���C�Ӽƭȸ�min�� 
			mn=a[i];	//�Y��min�p�N��Jmin
	}
	cout<<(mx-mn)*2<<endl;
	}
	
	
	return 0;
}
