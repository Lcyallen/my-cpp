#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int n, low=0; cin>>n;
	int a[n]={}; for (int i=0; i<n; i++)cin>>a[i];
	sort(a,a+n);	//�m�ߥ�sort�g�Ƨ� 
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
		if (a[i]<60)low++;
	}
	cout<<endl;
	if (low==0)cout<<"best case"<<endl;
	else cout<<a[low-1]<<endl;
	if (low==n)cout<<"worst case"<<endl;
	else cout<<a[low]<<endl;
}

//��n���m�ߨ��sort�g�ƧǡA6/12�ѥ[��APCS�u�W�Ҥ]����sort�g�X�Ĥ@�D�I 
