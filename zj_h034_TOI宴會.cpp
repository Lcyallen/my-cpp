#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int l[n]={0}, mx_l=0; //創一個存各字串長度的陣列以及找出字串長度的最大值 
	char a[200][100]={0};	//二維陣列必須初始化，輸入為字元故宣告為char，但初始化為={0} 
	for (int j=0; j<n; j++){//依據一開始輸入的n決定會輸入幾個字串 
		string s; cin>>s;	//開始輸入字串 
		l[j]=s.size();		//記錄每次字串的長度 
		mx_l=max(mx_l, l[j]);//找出每次字串長度的最大值 
		for (int i=0; i<l[j]; i++){//將輸入的字串存入二維陣列(這部分想超久才成功!) 
			a[j][i]=s[i];
		}
	}
/*	cout<<mx_l;
	for (int j=0; j<2; j++){
		for (int i=0; i<l[j]; i++)
			cout<<a[j][i];
			cout<<endl;
	}*/
	for (int i=0; i<mx_l; i++){	//根據字串長度的最大值決定做幾次程序。先固定的是「行(column)」 
		for (int j=0; j<n; j++){//先跑的是「列(row)」，把"列"的值跑完再跑外圈固定的"行" 
			if (a[j][i]>='A'&&a[j][i]<='Z')
				cout<<a[j][i];
		}
	}
	
return 0;
}
