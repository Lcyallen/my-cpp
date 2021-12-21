#include <iostream>
using namespace std;

int main (){
	
	int h1, m1, h2, m2;
	while(cin>>h1>>m1>>h2>>m2, h1+h2+m1+m2!=0)
		cout<<((h2+(h2*60+m2<h1*60+m1)*24)*60+m2)-(h1*60+m1)<<endl;
	
	return 0;
}
