#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	string s;
	int a[n]={}, i=0;
	for (int i=0; i<n; i++){	//�@�}�l�gwhile(n--)�@�����~�A��ӧ令for�~�i�C���ӭn��X��]�C 
		cin>>s; 
		a[i]=(s[3]-'0')*10+(s[4]-'0');//��r��s��"�r��"�ন"�G���"�A�æs�Ja[i] 
	}
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[j]<a[i])
				swap(a[i],a[j]);//��a[i]�Ѥp��j�ƦC 
		}
	}
	int b[n]={}, j=0;	//b[n]�ΨӦs�����ƪ�a[i]�Cj�Ob[i]���r�ƩҥH�����g�b�~�� 
	int c[n+1]={}; c[0]={-1};//c[n+1]�ΨӦs�C�Ӥ����b"�ĴX�Ӧ�m"�ɸ�k�䤸�����P�Cc[0]������-1�A�o�ˤ���b��-1�ɤ~��o��Ĥ@�Ӥ��������T�Ӽ� 
	for (int i=0; i<n; i++){
		if (a[i]!=a[i+1]){	//�Y��i�Ӥ����P��i+1�Ӥ��P�ɡA�s�Jb[j] 
			b[j]=a[i];
			c[j+1]= i; j++;//��i�Ӷ}�l���P�]�n�si�o�Ӹ�T 
		}
	}
	for (int i=0; i<j; i++)
		cout<<b[i]<<" "<<c[i+1]-c[i]<<endl;//���X�Ӥ�����n�i�H��c[]��i+1�����i�� 
	
return 0;
}
