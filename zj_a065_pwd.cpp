#include <iostream>
#include <cmath>
using namespace std;

int main (){
	string A;
	while(cin>>A){
		for (int i=1; i<=6; i++){
		cout<<abs(A[i]-A[i-1]);		//如果把A宣告為字串，可以直接拿其中的字元相減變成數值。但如果宣告為字元，似乎要加''	
		}
		cout<<endl;
	}
	
	
	
		return 0;
}
