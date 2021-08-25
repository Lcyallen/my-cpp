#include <iostream>
using namespace std;

int main (){
	string A;
	while (cin>>A){
		int l=A.size();
		for (int i=l-1; i>=0; i--)
			cout<<A[i];
	cout<<endl;
	}
	
return 0;
}
