#include <iostream>
using namespace std;

int main (){
	long long L;
	while(cin>>L){
		cout<<(L/4)*(L/4+(L%4!=0))<<endl;	//��L��4�����ƮɡA�򦨪��O����ΡI 
	}
		
	return 0;
}
