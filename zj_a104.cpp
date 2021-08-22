#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int a[n], temp=a[0];
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				if (a[i]>a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
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
剛好寫完更複雜的排序，所以接著寫這題基本排序就完全沒有寫測試，一氣呵成！ */
