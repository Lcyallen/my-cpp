#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n+1]={1};//一開始在1F，所以直接宣告原始a[]都=1 
	for (int i=1; i<n+1; i++) cin>>a[i];//從第二項a[1]開始輸入 
	int sum=0;
	for (int i=0; i<n; i++){
		sum+=(a[i]-a[i+1])*((a[i]>a[i+1])*2+(a[i]<a[i+1])*(-3));
	}
	cout<<sum;
	return 0;
}
