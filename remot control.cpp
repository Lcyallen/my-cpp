#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a, b;
	
	while (cin>>a>>b){
		if ((a==-1) && (b==-1))
			break;
			
		else if (abs(a-b)<50)
			cout<<abs(a-b)<<endl;
			
		else{
			cout<<100-abs(a-b)<<endl;
		}
	}
	
	return 0;
}
