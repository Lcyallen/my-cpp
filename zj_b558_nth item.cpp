#include <iostream>
using namespace std;
int F(int);
int main (){
	int a;
	while (cin>>a){
		cout<<F(a)<<endl;
	}
	
return 0;
}

int F(int a){
	if (a==1) return 1;
	else return (a-1+F(a-1));
}
//�ݧ��D�شN�Q�n�λ��j�g�A���Ӥ]�i�H�ոլݤ��n�λ��j���ӫ��g
 
