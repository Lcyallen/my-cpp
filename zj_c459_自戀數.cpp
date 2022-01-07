#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int b;
	string n;
	while (cin>>b>>n){
		int sum=0, g=0, l=n.size();
		for (int i=0; i<l; i++){
			sum+=pow(n[i]-'0',l);//要記得字串變數字要減'0' 
			g=g*b+(n[i]-'0');	//看高手的解答發現可以同時在for-loop裡作兩件事，根本不用再額外寫一個函數！ 
		}
		if (sum-g) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
