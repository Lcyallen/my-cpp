#include <iostream>
using namespace std;
int main (){
	int r, c;

	while(cin>>r>>c){
		int A[r][c]={0}, At[c][r]={0};
	
		for (int i=0; i<r; i++){
			for (int j=0; j<c; j++){
				cin>>A[i][j];
				At[j][i]=A[i][j];
			}
		}
/*	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++)
			cout<<A[i][j]<<" ";
			
			cout<<endl;
	}//硂琌и糶絋﹚块痻皚⊿拜肈*/
		for (int j=0; j<c; j++){	//璶猔種陆锣痻皚北︽计籔计璸计竟传璶癘眔э
			for (int i=0; i<r; i++)
				cout<<At[j][i]<<" ";//陆锣痻皚︽计ノjㄓ北计ノiㄓ北
			
				cout<<endl;
		}
	
	}
	
	return 0;
}
