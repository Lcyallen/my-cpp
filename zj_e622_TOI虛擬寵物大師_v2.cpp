#include <iostream>
using namespace std;

int main (){
	int n, s; cin>>n>>s;
	int a, b, c[n]={};	//後來發現每次輸入的a,b值都可以立刻計算後存入c[]，所以只需要把c宣告為陣列，a,b不用！ 
	
	for (int i=0; i<n; i++){
		cin>>a>>b;
		c[i]=a+(s/1000)*(10+(b>=30)*40+(b>=40&&b<=45)*50);//剛好判斷的邏輯有"階段大小"，所以可以簡寫為這樣 
	}
	//for (int i=0; i<n; i++) cout<<c[i]<<" ";
	
	int mx=c[0];
	for (int i=1; i<n; i++)
		mx=max(mx, c[i]);
	
	for (int i=0; i<n; i++){
		if (c[i]==mx)
		cout<<i+1<<" "<<c[i];
	} 
	
	return 0;
}
