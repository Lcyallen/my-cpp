#include <iostream>
using namespace std;

int main (){
	char b[10]="", s[10]="";
	cin>>b[0];
	int n; cin>>n;
	for (int i=0; i<n; i++)cin>>s[i];
	b[1]=s[0];
	for (int i=2; i<n; i++){
		if (b[i-1]=='5'&&b[i-2]=='5') b[i]='2';	//卡在這裡很久，一開始寫成(b[i-1]==b[i-2]=='5'")c++不能寫成a==b==c，要分開寫 
		else if (s[i-1]=='2'&&s[i-2]=='2') b[i]='0';
		else if (s[i-1]=='0'&&s[i-2]=='0') b[i]='5';
		else b[i]=s[i-1];	//還一度以為是else這邊寫錯，其實沒有錯 
	}
//	for (int i=0; i<n; i++)cout<<b[i]<<" ";
	for (int i=0; i<n; i++){
		cout<<b[i]<<" ";
		if (b[i]=='0'&&s[i]=='2'||b[i]=='2'&&s[i]=='5'||b[i]=='5'&&s[i]=='0'){
			cout<<": Won at round "<<i+1; return 0;	//第一次忘了寫return 0，程度跑了n次 
		}
		if (s[i]=='0'&&b[i]=='2'||s[i]=='2'&&b[i]=='5'||s[i]=='5'&&b[i]=='0'){
			cout<<": Lost at round "<<i+1; return 0;
		}
	}
	cout<<": Drew at round "<<n;	//能跑到完沒有中途return 0表示全部平手 
}
