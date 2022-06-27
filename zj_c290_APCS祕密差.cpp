#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char x[1000]="";cin>>x;
	int sum=0, odd=0;
	for (int i=0; i<strlen(x); i++){
		sum+=x[i]-'0';
		if (i%2) odd+=(x[i]-'0');
	}
	if (sum-2*odd<0)cout<<2*odd-sum;
	else cout<<(sum-2*odd);
	
}
//這題比較簡單，也讓我複習了如果把數字當成字串，要計算字串的長度要用"strlen(名)"，而且要引入<cstring>標頭 
