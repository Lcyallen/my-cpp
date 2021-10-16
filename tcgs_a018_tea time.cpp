#include <iostream>
using namespace std;

int main(){
	
	int h, m; cin>>h>>m;
	
	((h==14 && m>=20)||(h==15)||(h==16 && m<=40))? cout<<"YES\n" :cout<<"NO\n";
		
	return 0;
}
