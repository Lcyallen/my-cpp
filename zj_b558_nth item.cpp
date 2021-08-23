#include <iostream>
using namespace std;
int F(int);
int main (){
	int a;
	while (cin>>a){
		cout<<F(a)<<endl;
	}
	
return 0;
}

int F(int a){
	if (a==1) return 1;
	else return (a-1+F(a-1));
}
//看完題目就想要用遞迴寫，應該也可以試試看不要用遞迴應該怎麼寫
 
