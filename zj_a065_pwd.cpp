#include <iostream>
#include <cmath>
using namespace std;

int main (){
	string A;
	while(cin>>A){
		for (int i=1; i<=6; i++){
		cout<<abs(A[i]-A[i-1]);		//�p�G��A�ŧi���r��A�i�H�������䤤���r���۴��ܦ��ƭȡC���p�G�ŧi���r���A���G�n�[''	
		}
		cout<<endl;
	}
	
	
	
		return 0;
}
