#include <iostream>
using namespace std;

int main(){

	int n; cin>>n;
	for (int j=1; j<=n; j++){
		int f ; long long int a1, a2, a3;
		cin>>f;
		long long int s=0;		//要注意給的數據加總後是否超出int
		for (int i=1; i<=f; i++){
			cin>>a1>>a2>>a3;
			s+=a1*a3;
		}
		cout<<s<<endl;	
	}
	
	
return 0;	
}
/*
1.原本以為必須用陣列寫， 結果把自己搞死了也寫不出來！
2.後來先把最內圈的要求(i=1)寫出來之後，外面再加一個迴圈(j=1)，才完成
3.迴圈做幾次可以直接用計數器(i=1或j=1)處理，裡面再輸入a值 
*/
