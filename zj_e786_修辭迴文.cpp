#include <iostream>
using namespace std;

int main (){
	string s;
	int i;
	while (cin>>s){
		int l=s.size();
		if (l%2) cout<<"NO\n";
		else{
			for (i=0; i<l/2; i++){
				if (s[i]!=s[l-i-1]){
					cout<<"NO\n"; break;
				}				
			}
			if (i==l/2){
				cout<<"YES\n";
				for (int i=0; i<l/2; i++)
					cout<<s[i];
			} 
			 
		}
	}
	
	
	return 0;
}
