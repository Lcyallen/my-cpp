#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int a[n]; 
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		int temp=a[0];
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				if (a[j]%10<=a[i]%10){	//���I�b"<="�p�G�u�g"<"���Ӧ�Ƭ۵����Ʀr���|�Q��� 
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
/*	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;*/	//�o�O�b���ծɥΨӽT�{�W�����ƧǬO�_���\ 
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				if(a[i]%10==a[j]%10){
					if (a[i]<a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		for (int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
return 0;
}
/*
1.�Q�F�Z�[���A�@�˥��ۤv�Τ@�ǼƦr����Ӧ�ƪ��ƧǼg�X�Ӵ��ե��T
2.���F�T�O�Ӧ�ƬۦP���Ʀr�i�H�Q�Ʀb�@�_�A�n�`�N�g"<="
3.�ĤG���q�h�O�n���Ӧ�Ʀr�ۦP���ƭȥѤj��p�ƦC�A�ҥH�A�g�@���ƧǱ���A���ɧ��m��մN���ξ�ߦ�m����F 
4.�C�@�����n�ˬd�@���A�쥻���I��߷|�W�X�ɶ��A�٦n�@���NAC�I 
*/
