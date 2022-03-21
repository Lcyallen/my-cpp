#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int h[n]={0}, w[n]={0};
	for (int i=0; i<n; i++) cin>>h[i];
	for (int i=0; i<n; i++) cin>>w[i];
	int mn=h[0]*w[0];
	for (int i=1; i<n; i++)
		mn=min(mn, h[i]*w[i]);
	for (int i=0; i<n; i++){
		if (h[i]*w[i]==mn) cout<<h[i]<<" "<<w[i];
	}
	
}
