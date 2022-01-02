#include <iostream>
using namespace std;

int main (){
	int t; cin>>t;
	string s; getline(cin, s);
	while (t--){
		int a[26]={0};
		getline(cin,s);
		for (int i=0; i<s.size(); i++){
			int idx=-1;//idx是用來標示a[26]的哪一個數(可以想成有26個空位，要把計數加到哪一個空位) 
			if (s[i]>='A'&&s[i]<='Z')
				idx=s[i]-'A';
			if (s[i]>='a'&&s[i]<='z')
				idx=s[i]-'a';
			if (idx>=0)
				a[idx]++;
		}
		int mx=a[0];
		for (int i=1; i<26; i++){
			if (a[i]>mx)
				mx=a[i];
		}
		for (int i=0; i<26; i++){
			if (a[i]==mx)
				cout<<(char)('a'+i);	//從'a'的位置往右(+)幾格 
		}
		cout<<endl;
	}
	
	return 0;
}
