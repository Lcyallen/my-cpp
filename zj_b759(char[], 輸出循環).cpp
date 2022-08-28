#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char x[1000];
	cin>>x;		//很久沒有寫char[]，輸入不用for 
	int l = strlen(x);
	for (int i=0; i<l; i++){
		for (int j=0; j<l; j++)
			cout<<x[(i+j)%l];	//關鍵在於每印完一次要往後一格開始, 而且要"循環"所以用% 
		cout<<endl;	
	}
}
