#include <iostream>
using namespace std;

int main (){
	int m, n;cin>>m>>n;
	int a=0, b=0, s_a=0, s_b=0;
	for (int i=0; i<m; i++){ //�@�}�l�g"while(m--)��WA�Q�ܤ[�~�Q��o�˼g�̫�m�|=0�I�ҥH�n�令��for-loop 
		cin>>a;
		s_a+=a;
	}
	for (int i=0; i<n; i++){ 
		cin>>b;
		s_b+=b;
	}
	if (m>n&&s_a>s_b) cout<<"Yes\n";
	else cout<<"No\n";
}
