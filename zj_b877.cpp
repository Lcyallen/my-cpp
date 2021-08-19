#include <iostream>
using namespace std;

int main(){
	
	int a, b;
	cin>>a>>b;

	if (a<b)
		cout<<b-a<<endl;
			
	else{
		cout<<100-(a-b)<<endl;
		}
	
	return 0;
}

//網站上說可以不用if來寫，但我還沒想出來怎麼寫... 
