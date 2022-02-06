#include <iostream>
using namespace std;

int main (){
	int n=0; cin>>n;
	char a[n][n]; //蝴じ皚临琌а癘﹍て 
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)cin>>a[i][j];
	}
	int row[n*n]={}, column[n*n]={};//ノrow[]㎝column[]Τ*︽计㎝计璶猔種紆Τnキよ 
	int k=0, l=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (a[i][j]=='*'){
				row[k]=i; k++;
				column[l]=j; l++;
			}
		}
	}
/*	for (int i=0; i<k; i++)cout<<row[i]<<" ";
	cout<<endl;
	for (int j=0; j<l; j++)cout<<column[j]<<" ";			
*/		
	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			a[row[i]][j]='*';//рヘ夹︽–じ常эΘ* 
		}
	}
	for (int j=0; j<l; j++){
		for (int i=0; i<n; i++){
			a[i][column[j]]='*';//рヘ夹–じ常эΘ* 
		}
	} 
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
