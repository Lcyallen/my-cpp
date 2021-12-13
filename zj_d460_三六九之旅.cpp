#include <iostream>
using namespace std;

int main (){
	
	int a;
	
	while(cin>>a)
	
	cout<<(a>=6)*590+(a>=12)*200+(a>=18)*100-(a>=60)*491;//學板中老師的寫法，用()當成判斷結果作為數學式 
	
	
	
	return 0;
}
