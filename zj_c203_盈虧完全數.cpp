#include <iostream>
#include <vector>
#include <cmath>	//sqrt(), floor()
#include <numeric>	//accumulate()
using namespace std;

int main (){

	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		vector <int> v = {};
		for (int i = 2; i <= floor(sqrt(n)); i++){	//要注意只需要檢查到"無條件捨去"根號n！
			if (n%i == 0){
				if (i != n/i){
					v.push_back(i);
					v.push_back(n/i);
				}
				else v.push_back(i);
			}
		}
		if (accumulate(v.begin(), v.end(), 1) > n) cout<<"abundant"<<endl;	//此題加總前的初始值=1
		else if (accumulate(v.begin(), v.end(), 1) == n) cout<<"perfect"<<endl;
		else cout<<"deficient"<<endl;
	}
	
return 0;
}