#include <iostream>
using namespace std;

int main (){
	int a[10]={95, 57, 53, 77, 92, 89, 79, 65, 47, 87};
	
	for (int i=0; i<10; i++){
		for (int j=i+1; j<10; j++){
			int temp=0;
			if (a[j]<a[i]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for (int i=0; i<10; i++){
		cout<<a[i]<<" ";		//先用一個沒排序的數列，自己排序 
	}
	cout<<endl;
	int x=92, l=0, r=9, m=(l+r)/2;
	
	while(1){				//一開始沒想到如何寫迴圈，後來想到用a[]==x搭配return 0結束迴圈 
		if (a[m]==x){		//一開始把這條件放迴圈最後，while裡放a[]!=x，但這樣如果x剛好是中間項，就無法印出結果 
		cout<<"a["<<m+1<<"]="<<x; return 0;
		}
		else if(a[m]<x){
			l=m+1;
			m=(l+r)/2;
		}
		else{
			r=m-1;
			m=(l+r)/2;
		}
	}
	
}
