#include <iostream>
using namespace std;

int main (){
	long long L;
	while(cin>>L){
		cout<<(L/4)*(L/4+(L%4!=0))<<endl;	//當L為4的倍數時，圍成的是正方形！ 
	}
		
	return 0;
}
