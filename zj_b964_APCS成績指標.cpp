#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int n, low=0; cin>>n;
	int a[n]={}; for (int i=0; i<n; i++)cin>>a[i];
	sort(a,a+n);	//練習用sort寫排序 
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
		if (a[i]<60)low++;
	}
	cout<<endl;
	if (low==0)cout<<"best case"<<endl;
	else cout<<a[low-1]<<endl;
	if (low==n)cout<<"worst case"<<endl;
	else cout<<a[low]<<endl;
}

//剛好有練習到用sort寫排序，6/12參加的APCS線上考也有用sort寫出第一題！ 
