#include <iostream>
using namespace std;

int main (){
	
	int t, i, n, a[20];
	cin>>t;
	while(t--){
		cin>>n;
	for (i=0; i<n; i++)	//依序輸入a[i]數值 
		cin>>a[i];
		
	int mx=0, mn=100;	//先初始化max和min 
	for (i=0; i<n; i++){
		if (a[i]>mx)	//將陣列中每個數值跟max比 
			mx=a[i];	//若比max大就丟入max
		if (a[i]<mn)	//將陣列中每個數值跟min比 
			mn=a[i];	//若比min小就丟入min
	}
	cout<<(mx-mn)*2<<endl;
	}
	
	
	return 0;
}
