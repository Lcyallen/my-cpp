#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	while(n--){
		string a; cin>>a;
		int l = a.size();
		if (l==5) cout<<3<<endl;
		else if (l==3 and a[0]=='t' and a[1]=='w' or
			l==3 and a[0]=='t' and a[2]=='o' or
			l==3 and a[1]=='w' and a[2]=='o') cout<<2<<endl;
		else if (l==3 and a[0]=='o' and a[1]=='n' or
			l==3 and a[0]=='o' and a[2]=='e' or
			l==3 and a[1]=='n' and a[2]=='e') cout<<1<<endl;
	}
}
