#include <iostream>
using namespace std;

int main (){
	int n, t=0; cin>>n;
	int a[n]={0};	
	for (int i=0; i<n; i++) cin>>a[i];
	cin>>t;
	if (t==1){	//�ڤ������P������A�p�G�@�}�l�����b�̥��䨫�o���� 
		while(a[t]<=a[t-1]) t++;	//�Y�����b�̥���h�����k��ơC�G�u�n�k�䰪��<=�ۤv�ht�N+1�A�@������ �A����k��@�Ӱ���>�ۤv�C
		cout<<t;
	}
	else if (t==n){	//�ĤG�ر��p�O�@�}�l�����b�̥k�� 
		while (a[t-1]>=a[t-2]&&t>=2)t-- ;//��������ơC�����`�N�|t�ˬd��t==-1�A�ҥH�u�n�bwhile()���]�wt>=2 
		cout<<t;
	}
	else{	//�ĤT�ر��p�O�����b���� 
		if (a[t-2]<a[t]){	//�Y�����I���䪺���פ�k�䰪�קC�A�h��������� 
			t--;	//t���w�������@�� 
			while (a[t-2]<=a[t-1]&&t>=2) t--;//�@�˦b���ưj�骺���󤤭n�[t>=2 
			cout<<t;
		}
		else{	//�����I�k�䰪�פ��䰪�קC 
			t++;//�����k��ơA�Gt�������k�@�� 
			while (a[t]<=a[t-1]) t++;
			cout<<t;
		}
	}
	
}
/*
1.�j��@�Ӥ�~�S�}�l�g�A��b���ӹj�o��[
2.���o�{�ŧia[n]�ɡA�q���|�]�wa[-1]=0�I
*/
