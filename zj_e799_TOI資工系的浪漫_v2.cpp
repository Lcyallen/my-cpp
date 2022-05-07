#include <iostream>
using namespace std;

int main (){
	int n, m; cin>>n>>m;
	char c, p[m]="";cin>>c;//輸出的結果是字元陣列 
	long s[n]={};	//參考之前寫的內容才由"int"更改為"long"！ 
	for (int i=0; i<n; i++)cin>>s[i];
	
	for (int j=0; j<n; j++){
		for (int i=0; i<m; i++){
			if (s[j]%2) p[m-i-1]=c;
			else p[m-i-1]='.';
			s[j]=s[j]/2;		
		}
		for (int i=0; i<m; i++)cout<<p[i]<<" ";
		cout<<endl;
	}
}
//一開始WA，參考之前寫內容發現以前是寫成二維陣列，但這次我寫成一維就可以了！
 
