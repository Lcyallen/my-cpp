#include <iostream>
using namespace std;

int main (){
	int r, c; cin>>r>>c;
	int s[r][c]={};
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cin>>s[i][j];
	}
	cout<<"AND: ";
	int i, j;
	for (j=0; j<c; j++){
		for (i=0; i<r; i++){
			if (s[i][j]==0){
				cout<<"0 "; break;//只要有一個是0就可輸出0，然後跳出迴圈 
			}		
		}
		if (i==r) cout<<"1 ";//一開始放錯位置，果然久沒寫都忘了 
	}
	cout<<"\n OR: ";
	for (j=0; j<c; j++){
		for (i=0; i<r; i++){
			if (s[i][j]==1){
				cout<<"1 "; break;
			}		
		}
		if (i==r) cout<<"0 ";
	}
	cout<<"\nXOR: ";
	for (j=0; j<c; j++){
	int count=0;	//一開始放在for上面，但是錯的。因為每次進來for-loop都必須歸零！ 
		for (i=0; i<r; i++){
			if (s[i][j]==1)count++;
		}
		if (count%2)cout<<"1 ";
		else cout<<"0 ";
	}
}
