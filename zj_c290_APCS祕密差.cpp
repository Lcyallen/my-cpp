#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char x[1000]="";cin>>x;
	int sum=0, odd=0;
	for (int i=0; i<strlen(x); i++){
		sum+=x[i]-'0';
		if (i%2) odd+=(x[i]-'0');
	}
	if (sum-2*odd<0)cout<<2*odd-sum;
	else cout<<(sum-2*odd);
	
}
//�o�D���²��A�]���ڽƲߤF�p�G��Ʀr���r��A�n�p��r�ꪺ���׭n��"strlen(�W)"�A�ӥB�n�ޤJ<cstring>���Y 
