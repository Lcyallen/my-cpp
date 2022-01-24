#include <iostream>
using namespace std;

int main (){
	int n=0, s=0; cin>>n>>s;
	int ans[n]={};
	for (int i=0; i<n; i++) cin>>ans[i];
	int m=0; cin>>m;
	while (m--){
		int st[n]={}, count=0;
		for (int i=0; i<n; i++){
			cin>>st[i];
			if (st[i]==ans[i]) count++;
		}
		cout<<s*count<<endl;
	}
	
	return 0;
}
