#include <iostream>
using namespace std;

int main (){
	
	int n, m;
	while(cin>>n>>m){
		int i=1, sum=n;	//�@�}�l�ڥOn=0, sum=0��WA�C�@�}�l��n���ɭ�i���ӴN�O1�ӥBsum�N�On�F�C 
		for (; sum<=m; i++){
			n++;sum+=n; 
		}
		cout<<i<<endl;
	}
	
	return 0;
}
