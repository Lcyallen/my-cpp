#include <iostream>
using namespace std;

int main (){
	int a;
	while (cin>>a, a){
		int ans = 0;
		for (int i=1; i<=a; i++)
			ans += i*i;
		cout<<ans<<endl;
	}
}
//這題經過分析發現n*n個小正方形可以畫出1^2+2^2+3^2+...+n^2個正方形 
