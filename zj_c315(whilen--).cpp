#include <iostream>
using namespace std;

int main (){
	int n, a, b;
	int x = 0, y = 0;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if (a==0) y += b;
		else if (a==2) y -= b;
		else if (a==1) x += b;
		else x -= b;
	}
	cout<<x<<" "<<y;
	
}
