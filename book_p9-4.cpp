#include <iostream>
using namespace std;

int main (){
	int a[10]={95, 57, 53, 77, 92, 89, 79, 65, 47, 87};
	
	for (int i=0; i<10; i++){
		for (int j=i+1; j<10; j++){
			int temp=0;
			if (a[j]<a[i]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for (int i=0; i<10; i++){
		cout<<a[i]<<" ";		//���Τ@�ӨS�ƧǪ��ƦC�A�ۤv�Ƨ� 
	}
	cout<<endl;
	int x=92, l=0, r=9, m=(l+r)/2;
	
	while(1){				//�@�}�l�S�Q��p��g�j��A��ӷQ���a[]==x�f�treturn 0�����j�� 
		if (a[m]==x){		//�@�}�l��o�����j��̫�Awhile�̩�a[]!=x�A���o�˦p�Gx��n�O�������A�N�L�k�L�X���G 
		cout<<"a["<<m+1<<"]="<<x; return 0;
		}
		else if(a[m]<x){
			l=m+1;
			m=(l+r)/2;
		}
		else{
			r=m-1;
			m=(l+r)/2;
		}
	}
	
}
