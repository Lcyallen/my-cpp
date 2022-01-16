/*https://zerojudge.tw/ShowProblem?problemid=h034題目，
想挑戰一開始存入陣列a[i][j]時就"旋轉"，然後再依以前的方式輸出。
*/
#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int l=0, mx_l=0;
	char a[200][200]={0};//要注意因為存入這個新陣列就"旋轉"，所以行、列數會對調！一開始WA就是錯在這裡。 
	for (int j=0; j<n; j++){
		string s; cin>>s;	
		l=s.size();		
		mx_l=max(mx_l, l);
		for (int i=0; i<l; i++){
			a[i][j]=s[i];
		}
	}
	for (int i=0; i<mx_l; i++){
		for (int j=0; j<n; j++){
			if (a[i][j]>='A'&&a[i][j]<='Z')
				cout<<a[i][j];
		}
	}
	
return 0;
}
