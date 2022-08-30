#include <iostream>
using namespace std;

int main (){
	int t; cin>>t;
	for (int j=1; j<=t; j++){
		int n; cin>>n;
		int wall[n] = {};
		for (int i=0; i<n; i++) cin>>wall[i]; 
		int hi = 0, low = 0;
		for (int i=1; i<n; i++){
			if (wall[i] > wall[i-1])
				hi++;
			else if (wall[i]<wall[i-1])
				low++;
		}
		cout<<"Case "<<j<<": "<<hi<<" "<<low<<endl;
	}	
}
