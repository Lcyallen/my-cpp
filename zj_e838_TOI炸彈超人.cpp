#include <iostream>
using namespace std;

int main (){
	int n=0; cin>>n;
	char a[n][n]; //�ŧi���G���r���}�C�I���٬O�ѰO�p���l�ơI 
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)cin>>a[i][j];
	}
	int row[n*n]={}, column[n*n]={};//��row[]�Mcolumn[]�s��*����ƩM�C�ơA���n�`�N���u�i�H��n������ӡI 
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
			a[row[i]][j]='*';//��u�ؼЦ�v���C�Ӥ������令* 
		}
	}
	for (int j=0; j<l; j++){
		for (int i=0; i<n; i++){
			a[i][column[j]]='*';//��u�ؼЦC�v���C�Ӥ������令* 
		}
	} 
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
