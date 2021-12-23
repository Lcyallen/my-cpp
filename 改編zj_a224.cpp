//zj_a224的誤解，以為要判斷把非英文字母剔除後的新字串是否為迴文

#include <iostream>
using namespace std;

int main (){
	
	string A, B;
	int i=0, j=0;
	cin>>A;
	for (i; i<A.size(); i++){
		if (A[i]>='A'&&A[i]<='Z'||A[i]>='a'&&A[i]<='z'){	//輸入的字串中只有英字母被依序排B字串 
			B[j]=A[i]; j++;		//記得要j++，下一個排進來的新字母才會有新的位置 
		}
	}
	int k=j;	//新增變數k，把字串B的位數存進k，否則B字串的字位無法得知 

	for (j=0; j<k; j++){
		if (B[j]>='a'&&B[j]<='z'){
			B[j]-=('a'-'A');	//把字串B中的小寫字母換成大寫字母。不用記A~a是多少，只需用字元相減 
		}
	}
	for (j=0; j<k/2; j++){		//迴文只需要檢查到中間字元 
		if (B[j]!=B[k-j-1]){	//反向思維，一旦不相同就跳出 
			cout<<"no...\n"; return 0;
		}
	}cout<<"yes !";
					
	return 0;
}
