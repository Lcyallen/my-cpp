#include <iostream>
#include <cstring>//�n�Ψ�strlen(a) 
using namespace std;

int main (){
	char a[26]="";char b[500000]="";char c[500000]="";//�Y�ھ��D�N�ŧib[5000000]�h�W�L�O����Ŷ��ܦ�RE�A�ŧib[500000]���M�L�F�I 
	cin>>a>>b;
	int k=0;
	for (int j=0; j<strlen(a); j++){
		for (int i=0; i<strlen(b); i++){
			if (b[i]==a[j]){
				c[k]=b[i]; k++;//�@�Ӥ@�ӧ�b[i]�s�Jc[k]�A�G�nk++ 
			} 
		}
	}
	int q=0, x=0; cin>>q;
	while (q--){
		cin>>x;
		cout<<c[x-1]<<endl;
	} 
	
	return 0;
}
