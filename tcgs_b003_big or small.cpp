#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n+1], c_b=0, c_s=0;	//�p�ƾ��쥻�ک�for()���A�o�����T�A�u�n��ӳo�� 
	
	for (int i=0; i<n+1; i++)
		cin>>a[i];
	
	for (int i=0; i<n; i++){
		if (a[i]>a[n]) c_b++;
		if (a[i]<a[n]) c_s++;
	}
	cout<<c_b<<" "<<c_s;
	
return 0;
}
