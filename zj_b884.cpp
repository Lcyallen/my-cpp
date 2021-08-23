#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int x, y;
	while (cin>>x>>y){
		int r=100-(x+y);
	
		if (r>0 && r<=30) cout<<"sad!"<<endl;
		else if (r>30 && r<=60) cout<<"hmm~~"<<endl;
		else if (r>60 && r<100) cout<<"Happyyummy"<<endl;
		else cout<<"evil!!"<<endl;
	}
	
return 0;
}
