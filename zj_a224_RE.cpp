#include <iostream>
using namespace std;

int main (){
	
	string a, b; cin>>a;
	int j=0;
	for (int i=0; i<a.size(); i++){
		if (a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'){
			b[j]=a[i]; j++;
		}			
	}
	int k=j;	//k�O�r��b���r�� 
	for (int i=0; i<k; i++){	//��r��b���j�g�r���ഫ���p�g�r�� 
		if (b[i]>='A'&&b[i]<='Z')
			b[i]+=('a'-'A');
	}
	for (int i=0; i<k; i++){			//��r��Ѥp��j�Ƨ� 
		for (int j=i+1; j<k; j++){
			if (b[j]<b[i])
				swap(b[j], b[i]);		
		}			
	}
	for (int i=0; i<k; i++)			//��X�ƧǦn���r�� 
		cout<<b[i];
	cout<<endl;
	int l=0, c[k];				//�s�Ф@�Ӿ�ư}�C 
	for (int i=1; i<k; i++){	//�ХܥX�P����r�����P���O�ĴX�Ӧ�m 
		if(b[i]!=b[i-1]){		//��ĴX�����r�����P���Ʀr��J�s�}�C 
			c[l]=i; l++;
		}
	}
	c[l]=k;
	int m=l+1;cout<<m<<endl;					//�s�}�C����� 
	for (int i=0; i<m; i++)
		cout<<c[i]<<" ";
	cout<<endl;
	int n=0;
	if (c[0]%2)  n++;
	for (int i=1; i<m; i++){
		if ((c[i]-c[i-1])%2) n++;
		if (n==2) {
			cout<<"no..."; return 0;
		}
	}
	if (n<2) cout<<"yes !";
	
	return 0;
}

/*
1.�ۤv�b���ծɥi�H�A�e�X��X�{RE(Runtime Error): ��ܰ���ɿ��~�A�q�`���O����t�m���~ �p�G�ϥΤF�W�L�}�C�j�p����m 
2.���M�p������F�n�h�ѧ�i�檺��k�g�X�ӡA�٬O�i�H�P����ۤv���i�B
3.�p���D�r�����r���簣�í��s�Ʀ��s�r��
4.�p���r���ഫ�������j(�p)�g
5.�p���r���Ѥp��j�Ƨ�
6.�p��M���O�H���P���r����m
*/ 
