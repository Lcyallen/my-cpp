#include <iostream>
using namespace std;

int main(){
	int n, i, j;
	while(cin>>n){
		int a[n]; 
		for (i=0; i<n; i++){
			cin>>a[i];
		}
		int temp=a[0];
		for (i=0; i<n; i++){
			for (j=i+1; j<n; j++){
				if ((a[j]%10<a[i]%10)||(a[i]%10==a[j]%10)&&(a[i]<a[j])){	//把3個條件寫在一起！ 
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
		for (i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
return 0;
}
/*
1.把3個判斷條件寫在一起是我看高手寫的，這樣不是節省版面，還減少很多檢查的時間
2.但寫在一起第1個條件必須改成"<"，原因我還沒想得很清楚
3.把多個判斷式寫在一起一定要學起來 ！
*/ 
