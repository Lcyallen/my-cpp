#include <iostream>
using namespace std;

int main (){
	int n, s; cin>>n>>s;
	int a[n]={}, b[n]={}, c[n]={};	//因為最後CP值需要比大小，所以用陣列存各組資料 
	for (int i=0; i<n; i++) cin>>a[i]>>b[i];//第一次寫每次輸入兩個陣列的值 
	
	for (int i=0; i<n; i++)
		c[i]=a[i]+(s/1000)*((b[i]>=0&&b[i]<=29)*10+(b[i]>=30&&b[i]<=39)*50+(b[i]>=40&&b[i]<=45)*100);//剛好利用每組不同的大小作為邏輯判斷 
	
	int mx=c[0];
	for (int i=1; i<n; i++)
		mx=max(mx, c[i]);
	
	for (int i=0; i<n; i++){
		if (c[i]==mx)
		cout<<i+1<<" "<<c[i];
	} 
	
	return 0;
}
