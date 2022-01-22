/*https://zerojudge.tw/ShowProblem?problemid=h081
第一次考APCS的實作題。當時想不出來，也很緊張！之後也想不到問題怎麼解決。
今天(2022.1.22)終於解出來了！ */
#include <iostream>
using namespace std;

int main (){
	int n, d; cin>>n>>d;
	int a[n]={}, i=0;//i是檢查到哪一個變數，所以必須寫在for-loop外面 
	for (int i=0; i<n; i++)
		cin>>a[i];
	int buy[n]={}, j=0;//買進的我一開始寫成陣列，index=j必須寫在外面 
	int sell[n]={}, k=0;//賣掉的我一開始也寫成陣列，index=k必須寫在外面 
	int income=0;
	while(i<n){
		buy[j]=a[i];//buy[0]=a[0]
		for (i=i+1; i<n; i++){	//每一輪檢查是從i=i+1開始！這是突破點！ 
			if (a[i]-buy[j]>=d){
				sell[k]=a[i]; //cout<<"sell = "<<sell[k]<<endl;
				income+=sell[k]-buy[j]; //cout<<"income = "<<income<<endl;
				j++; break;
			}
		}
		//cout<<"i = "<<i<<" j ="<<j<<endl;
		for (i=i+1; i<n; i++){	//每一輪檢查是從i=i+1開始！這是突破點！
			if (sell[k]-a[i]>=d){
				buy[j]=a[i]; //cout<<"buy = "<<buy[j]<<" i = "<<i;
				k++; break;
			}
		}
	}
	cout<<income;
	return 0;
}
