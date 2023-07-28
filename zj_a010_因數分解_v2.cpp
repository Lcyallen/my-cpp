#include <iostream>
using namespace std;
int main (){

	int a ; cin>>a;
	int f = 0;
	for (int i=2; i<=a; i++){	//從i=2開始往上加，直到i<=a才停止
		int pow = 0;
		while(a%i == 0){	//把i拿來除a，直到i不是a的因數才離開while
			pow ++;
			a /= i;
		}					//離開while迴圈時知道這個i可以整除a幾次(pow)		

		if (pow){			//只有在pow != 0時才有輸出的必要
			if (f > 0) cout<<" * ";	//先寫"最先輸出的東西"--若不是第一個因數時，輸入因數之前要有" * "。(f>0)是因為第二個因數的f==1

			cout<<i;				//不然就是只輸出因數i
			
			if (pow > 1) cout<<"^"<<pow;	//印完因數i後，還有特殊情況要考慮--"次數>1"時，要在後面輸出"^"和次數
			
			f++;					//都考慮完再把因數個數+1。所以第一個因數印完後才會+1
		}
	}
//	if (a == b) cout<<a;	//第一版以為若a為質數則上面無法輸出，但即使a為質數仍可正確輸出。且不用再浪費一個變數b！
return 0;
}