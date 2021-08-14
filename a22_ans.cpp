#include <iostream>
using namespace std;

int main(){
	
	string A;
	cin>>A;
	
	int l=A.size();
	
	for (int i=0; i<l/2; i++){
		if (A[i]!=A[l-1-i]){
			cout<<"no\n";
			return 0;
		}
	}
	cout<<"yes\n";
	
	return 0;
}
/*
1.Yui Huang的解答，真是太厲害了！
2.想到可以直接"return 0;"這樣電腦就不用再跑後續的程序了
3.如果是我自己寫，可能會從「正面條件」寫吧！不知道這兩種寫法電腦跑得誰比較快。
*/
