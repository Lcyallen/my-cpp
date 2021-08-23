#include <iostream>
using namespace std;

int main (){
	string A, B;
	int n;
	
	cin>>A>>n;
	for (int i=0; i<n; i++){
		cin>>B;	//被卡在這裡很久，一直以為輸入必須用while，但其實可以直接寫在 for-loop裡面就好！ 
		int c_a=0, c_b=0;
		for (int i=0; i<4; i++){
			if (A[i]==B[i]) c_a++;
		}
		cout<<c_a<<"A";	
		for (int i=0; i<=4; i++){
			for (int j=0; j<=4; j++){
				if (i==j) continue;	//一開始沒有想到用continue，還把i!=j寫在判斷式，但無法執行。後來才想到用if...continue 
				if (A[i]==B[j]) c_b++;
			}
		}
		cout<<c_b<<"B"<<endl;
	}
	
return 0;
}
/*
1.最大的進步在於想到用if..continue來跳過不執行的狀況
2.要記得輸入幾次測資cin可以直接寫在for-loop裡面
*/ 
