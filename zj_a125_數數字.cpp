#include <iostream>
using namespace std;

int main (){
	
	int n, m;
	while(cin>>n>>m){
		int i=1, sum=n;	//一開始我令n=0, sum=0但WA。一開始有n的時候i應該就是1而且sum就是n了。 
		for (; sum<=m; i++){
			n++;sum+=n; 
		}
		cout<<i<<endl;
	}
	
	return 0;
}
