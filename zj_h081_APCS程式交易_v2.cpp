#include <iostream>
using namespace std;

int main (){
	int n, d; cin>>n>>d;
	int a[n]={}, i=0;
	for (int i=0; i<n; i++)
		cin>>a[i];
	int buy=a[0], sell=0, income=0;//��ӵo�{�C���Y���buy��sell�A��곣�����s�i�h�N�n�C�ҥH���Ϋŧi���}�C�A�]�٥h�`�Nindex�����D�I 
	while(i<n){
		for (i=i+1; i<n; i++){
			if (a[i]-buy>=d){
				sell=a[i];
				income+=sell-buy; break;
			}
		}
		for (i=i+1; i<n; i++){
			if (sell-a[i]>=d){
				buy=a[i]; break;
			}
		}
	}
	cout<<income;
	return 0;
}
