#include <iostream>
using namespace std;
int main (){

	int a ; cin>>a;
	int b = a, f = 0;
	for (int i=2; i<b; i++){	//從i=2開始往上加，直到i<一開始的a才停止
		int pow = 0;
		while(a%i == 0){	//把i拿來除a，直到i不是a的因數才離開while
			pow ++;
			a /= i;
		if (pow) f++;		//這次的pow若!=1就把f+1，可以知道是否是第一個因數
		}					//離開while迴圈時知道這個i可以整除a幾次(pow)		
		if (f == 1){		//如果這是第一個因數
			if (pow == 1) cout<<i;	//次數==1，只需印i(因數)
			if (pow>1) cout<<i<<"^"<<pow;	//如果次數>1，就要再列出次數
		}
		else{				//若不是第一個因數
			if (pow == 1) cout<<" * "<<i;	//次數==1，前面要多印*
			if (pow>1) cout<<" * "<<i<<"^"<<pow;	//若次數>1,要多印次數
		}
	}
	if (a == b) cout<<a;

return 0;
}