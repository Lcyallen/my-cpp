#include <iostream>
using namespace std;

int main (){
	int m, n;cin>>m>>n;
	int a=0, b=0, s_a=0, s_b=0;
	for (int i=0; i<m; i++){ //一開始寫"while(m--)但WA想很久才想到這樣寫最後m會=0！所以要改成用for-loop 
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
