#include <iostream>
using namespace std;

int main (){
	int n, a, m;
	cin>>n;
	for (int i=1; i<=n; i++){
		while (cin>>a){
			if (a==0)		//�Ĥ@�����ծɨS�`�N���J�ȭY��0�����p 
				cout<<0<<endl;
			else{
				for(m=1; a>0; a/=10){
					m*=a%10;
				}
			cout<<m<<endl;
			}
		}
	}
			
	return 0;
}
