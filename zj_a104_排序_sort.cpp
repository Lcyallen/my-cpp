#include <iostream>
#include <algorithm>//開始學習用sort 
using namespace std;

int main (){
	int n;
	while(cin>>n){
		int a[n]={}; for (int i=0; i<n; i++)cin>>a[i];
		sort (a, a+n);//把數字排序，是最簡單的一種 
		for (int i=0; i<n; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
