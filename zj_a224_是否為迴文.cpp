#include <iostream>
using namespace std;

int main (){
	string s;
	while(cin>>s){
		int a[26]={0}, c=0;
		for (int i=0; i<s.size(); i++){
			int idx=-1;	//idx�����g�bfor-loop�̭��]���C���P�_�r���ɳ��n��idx�k�s 
			if (s[i]>='A'&&s[i]<='Z')
				idx=s[i]-'A';
			if (s[i]>='a'&&s[i]<='z')
				idx=s[i]-'a';
			if (idx>=0)
				a[idx]++;
		}
		for (int i=0; i<26; i++){
			if (a[i]%2)
				c++;
			if (c==2){
				cout<<"no...\n"; break;//�]���O�s���ƩҥH�����return 0�A�n��break 
			}
		}
		if (c<2)	//�@�}�l�g��(n>2)������O�_�ƭӪ��ƶq�n<2�~��^�� 
			cout<<"yes !\n";
	}
	
	
	
	return 0;
}
