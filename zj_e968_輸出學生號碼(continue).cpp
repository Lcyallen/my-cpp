#include <iostream>
using namespace std;

int main (){
	
	int n, a, b, c;
	cin>>n>>a>>b>>c;
	
	for (int i=n; i>0; i--){
		if (i==a||i==b||i==c)	//�@�}�l�O��bcout�᭱���G�S���@�ΡA��ӧ�bcout�e���~���T�C�n���P�_�O�_�ŦX����A����cout�C 
			continue;
	cout<<"No. "<<i<<endl;
	}
	
	return 0;
}
