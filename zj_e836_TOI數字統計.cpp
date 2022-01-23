#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n]={}, b[n]={};
	for (int i=0; i<n; i++) cin>>a[i];
	int k=1;
	b[0]=a[0];
	for (int i=1; i<n; i++){	//穝э糶тa[]いぃ狡计b[]い 
		int j;
		for (j=0; j<i; j++){
			if (a[i]==a[j]) break;						
		}
		if (j==i){	//ノ铬癹伴j琌狡耞 
			b[k]=a[i]; k++;//b[]琌a[]いぃじk琌b[]计 
		}
	}
	cout<<k<<endl;
	if (k==n){
	cout<<"NO\n"; return 0; }//セ琌糶Ω计程тㄓぇㄓ祇瞷硂碞耞琌璶块no 
	//for (int i=0; i<k; i++)	cout<<b[i]<<" ";
	int idx[k]={};
	for (int j=0; j<k; j++){
		for (int i=0; i<n; i++){
			if (a[i]==b[j])
				idx[j]++;	//idx[]b[]–じ计 
		}
	}
	//for (int i=0; i<k; i++)	cout<<idx[i]<<" ";
	int mx_idx=idx[0];
	for (int i=1; i<k; i++){
		mx_idx=max(mx_idx, idx[i]);
	}
	//cout<<mx_idx;
	for (int i=0; i<k; i++){
		if (idx[i]==mx_idx) cout<<b[i]<<" ";
	}
	return 0;
}
