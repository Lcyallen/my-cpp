#include <iostream>
#include <cstring>	//�U���|�Ψ�p��char������ 
using namespace std;

int main (){
	char n1[300], n2[300]={}, x;//�ŧi��char���n�B�O�i�H��l�ưO����j�p[300]�A�Ӥ��O�ŧi��string 
	cin>>n1; cin>>x;
	int j=0;
	for (int i=0; i<strlen(n1); i++){//�p��char�����ת��g�k�I�n�O�I 
		if (n1[i]==x) continue;	//�o�O�Ǹѵ����g�k 
		n2[j]=n1[i]; j++;//j�On2���r���� 
	}
	//cout<<n2<<" "<<strlen(n2)<<" "<<j;
	for (int i=0; i<j/2; i++){	//�u���ˬd��n2���ת��@�b�N�n 
		if (n2[i]!=n2[j-i-1]){
			cout<<"No\n"; return 0;
		}
	}
	cout<<"Yes\n";
	
	return 0;
}
