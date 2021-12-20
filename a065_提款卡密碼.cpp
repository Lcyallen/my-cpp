#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	string A;
	
	while(cin>>A){
		for (int i=0; i<6; i++){
		cout<<abs(A[i]-A[i+1]);
		}
		cout<<endl;
	}
	
	return 0;
}
