#include <iostream>
using namespace std;

int main (){
	string s; cin>>s;
	int l=s.size();
	if (l%2){
		cout<<"NO"; return 0;
	}
	for (int i=0; 2*i<l; i++){
		if (s[i]!=s[l-i-1]){
			cout<<"NO"; return 0;
		}
	}
	cout<<"YES\n";	//程式能走到這裡一定是yes了 
	for (int i=0; 2*i<l; i++)cout<<s[i];
}
