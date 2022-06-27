#include <iostream>
using namespace std;

int main (){
	int n,d, sum=0; cin>>n>>d;
	int a[n]={}; for (int i=0; i<n; i++)cin>>a[i];
	
	int buy=a[0], sell=0, i=0;
	for (i=i+1; i<n; i++){
		if (a[i]-buy>=d){
			sell=a[i];
			sum+=sell-buy;
			for (i=i+1; i<n; i++){
				if (sell-a[i]>=d){
					buy=a[i];
					break;
				}
			}
		}
	}
	cout<<sum;
}
//自己寫的第二版，值得跟第一版作比較。 
