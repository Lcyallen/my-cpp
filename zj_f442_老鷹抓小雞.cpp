#include <iostream>
using namespace std;

int main (){
	int n=0; cin>>n;
	int a[n]={}; for (int i=0; i<n; i++) cin>>a[i];
	int e, q; cin>>e>>q;
	int b[q]={}; for (int i=0; i<q; i++) cin>>b[i];
	
	for (int i=0; i<q; i++){
		for (int j=0; j<n; j++){
			if (a[j]==b[i]){
				swap(a[j], e); break;
			}
				
		}
	}
	for (int i=0; i<n; i++) cout<<a[i]<<" ";	
	
	return 0;
}
