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
	cout<<"YES\n";	//�{���ਫ��o�̤@�w�Oyes�F 
	for (int i=0; 2*i<l; i++)cout<<s[i];
}
