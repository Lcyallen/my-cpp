#include <iostream>
using namespace std;

int main (){
	
	int n, a, b; cin>>n;
	
	for (int i=0; i!=n; i++){	//�]����X�ݭn�����ĴX��case�A�ҥH�����s�W�@���ܼ�i�A���M������while(n--)�N�n�F 
			cin>>a>>b;
			a+=(a%2==0);
			b-=(b%2==0);
		cout<<"Case "<<i+1<<": "<<(a+b)*((b-a)/2+1)/2<<endl;	//�n�`�N�ĴX��case����i+1 
		}

	return 0;
}
