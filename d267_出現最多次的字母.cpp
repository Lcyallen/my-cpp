#include <iostream>
using namespace std;

int main (){
	int t; cin>>t;
	string s; getline(cin, s);
	while (t--){
		int a[26]={0};
		getline(cin,s);
		for (int i=0; i<s.size(); i++){
			int idx=-1;//idx�O�ΨӼХ�a[26]�����@�Ӽ�(�i�H�Q����26�ӪŦ�A�n��p�ƥ[����@�ӪŦ�) 
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
				cout<<(char)('a'+i);	//�q'a'����m���k(+)�X�� 
		}
		cout<<endl;
	}
	
	return 0;
}
