#include <iostream>
using namespace std;

int main (){
	int h1, m1, h2, m2; cin>>h1>>m1>>h2>>m2;
	if (h1==h2 and m1>m2)
		cout<<23<<" "<<60+m2-m1;
	else
		cout<<((h2+24-h1)%24*60+(m2-m1))/60<<" "<<((h2+24-h1)%24*60+(m2-m1))%60;
}
