#include <iostream>
using namespace std;

int main (){
	string s;
	while(cin>>s){
		int a[26]={0}, c=0;
		for (int i=0; i<s.size(); i++){
			int idx=-1;	//idx必須寫在for-loop裡面因為每次判斷字元時都要把idx歸零 
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
				cout<<"no...\n"; break;//因為是連續資料所以不能用return 0，要用break 
			}
		}
		if (c<2)	//一開始寫錯(n>2)但條件是奇數個的數量要<2才能回文 
			cout<<"yes !\n";
	}
	
	
	
	return 0;
}
