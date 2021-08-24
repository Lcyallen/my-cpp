#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	
	int j, temp=-10;	//一開始我設初始值為a[0]，但如果a[0]就是最大值，就不會交換，那第i項就會出錯了 
	for (int i=0; i<n; i++){
		if (a[i]>temp){
			temp=a[i];
			j=i+1;
		} 
	}
	cout<<j<<" "<<temp;
	
return 0;
}
/*
1.原本以為之前練習過所以可以一次AC，結果沒注意到要列出第i項還是有陷阱
2.初始值不能設數列中任何一項，否則如果剛好那一項是最大值就不會跟temp交換，就得不到正確的i值
*/ 
