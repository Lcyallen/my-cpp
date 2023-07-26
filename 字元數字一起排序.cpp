#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main (){
	char a[20] ="125aiekdn65vnkIIFeo";
	int l = strlen(a);
	sort(a,a+l);
	for (int i=0; i<l; i++) cout<<a[i];
	cout<<endl;
	for (int i=1; i<l; i++){
		if (a[i]!=a[i-1])
			cout<<i<<" ";	
	} 
	
}

