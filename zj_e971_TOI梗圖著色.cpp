#include <iostream>
using namespace std;

int main (){
	int m, n;
	cin>>m>>n;
	while (m--){
		int j=0, a[105]={}, b[105]={-1};//�쥻�H���ۤv���{���g���F�A��ӵo�{�o�Ǫ�l�ȥ������i��while�j��̭�
		for (int i=0; i<n; i++){
			cin>>a[i];
			if (a[i]==1){
				b[j]=i;
				j++; //�ƦC����j��1 
			}
		}
		for (int k=0; 2*k<=j; k++){
			for (int i=0; i<n; i++){
				if (i>b[2*k] && i<b[2*k+1])
					a[i]=1;
			}
		}
		for (int i=0; i<n; i++){
			cout<<a[i]<<" ";
		} cout<<endl;
	}

	
	
	
	return 0;
}
