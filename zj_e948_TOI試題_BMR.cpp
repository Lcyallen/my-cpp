#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int n, g, a, h, w;
	cin>>n;
	while(n--){
		cin>>g>>a>>h>>w;
		if (g==1)
			cout<<fixed<<setprecision(2)<<(13.7*w)+(5.*h)-(6.8*a)+66<<endl;
		else
			cout<<fixed<<setprecision(2)<<(9.6*w)+(1.8*h)-(4.7*a)+655<<endl;
	}
	
	
	return 0;
}
