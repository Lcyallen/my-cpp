#include <iostream>
#include <cstring>//要用到strlen(a) 
using namespace std;

int main (){
	char a[26]="";char b[500000]="";char c[500000]="";//若根據題意宣告b[5000000]則超過記憶體空間變成RE，宣告b[500000]竟然過了！ 
	cin>>a>>b;
	int k=0;
	for (int j=0; j<strlen(a); j++){
		for (int i=0; i<strlen(b); i++){
			if (b[i]==a[j]){
				c[k]=b[i]; k++;//一個一個把b[i]存入c[k]，故要k++ 
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
