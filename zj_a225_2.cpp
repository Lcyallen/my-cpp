#include <iostream>
using namespace std;

int main(){
	int n, i, j;
	while(cin>>n){
		int a[n]; 
		for (i=0; i<n; i++){
			cin>>a[i];
		}
		int temp=a[0];
		for (i=0; i<n; i++){
			for (j=i+1; j<n; j++){
				if ((a[j]%10<a[i]%10)||(a[i]%10==a[j]%10)&&(a[i]<a[j])){	//��3�ӱ���g�b�@�_�I 
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
		for (i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
return 0;
}
/*
1.��3�ӧP�_����g�b�@�_�O�ڬݰ���g���A�o�ˤ��O�`�٪����A�ٴ�֫ܦh�ˬd���ɶ�
2.���g�b�@�_��1�ӱ��󥲶��令"<"�A��]���٨S�Q�o�ܲM��
3.��h�ӧP�_���g�b�@�_�@�w�n�ǰ_�� �I
*/ 
