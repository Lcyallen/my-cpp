#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char x[1000];
	cin>>x;		//�ܤ[�S���gchar[]�A��J����for 
	int l = strlen(x);
	for (int i=0; i<l; i++){
		for (int j=0; j<l; j++)
			cout<<x[(i+j)%l];	//����b��C�L���@���n����@��}�l, �ӥB�n"�`��"�ҥH��% 
		cout<<endl;	
	}
}
