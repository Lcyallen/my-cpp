#include <iostream>
using namespace std;

int main (){
	int a;
	while (cin>>a, a){
		int ans = 0;
		for (int i=1; i<=a; i++)
			ans += i*i;
		cout<<ans<<endl;
	}
}
//�o�D�g�L���R�o�{n*n�Ӥp����Υi�H�e�X1^2+2^2+3^2+...+n^2�ӥ���� 
