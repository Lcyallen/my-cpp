#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int a[n]; 
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		int temp=a[0];
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				if (a[j]%10<=a[i]%10){	//重點在"<="如果只寫"<"那個位數相等的數字不會被更動 
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
/*	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;*/	//這是在測試時用來確認上面的排序是否成功 
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				if(a[i]%10==a[j]%10){
					if (a[i]<a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		for (int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
return 0;
}
/*
1.想了蠻久的，一樣先自己用一些數字先把個位數的排序寫出來測試正確
2.為了確保個位數相同的數字可以被排在一起，要注意寫"<="
3.第二階段則是要讓個位數字相同的數值由大到小排列，所以再寫一次排序條件，此時把位置對調就不用擔心位置不對了 
4.每一次都要檢查一輪，原本有點擔心會超出時間，還好一次就AC！ 
*/
