#include<iostream>
using namespace std;
int main (){
	
	int n, m, i, a[10];
	
	cin>>n>>m; 
	
	for (i=0; i<n; ++i)
		cin>>a[i];

	for (int j=1; j<=m; ++j)
	{
		cin>>i;
		cout<<a[i-1]<<endl;
	}
		return 0;
}


//*������L�k��m����J�����X�駹��A�A�@����X�� m�Ӧ��Z�H 
