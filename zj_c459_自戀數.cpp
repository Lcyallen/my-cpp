#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int b;
	string n;
	while (cin>>b>>n){
		int sum=0, g=0, l=n.size();
		for (int i=0; i<l; i++){
			sum+=pow(n[i]-'0',l);//�n�O�o�r���ܼƦr�n��'0' 
			g=g*b+(n[i]-'0');	//�ݰ��⪺�ѵ��o�{�i�H�P�ɦbfor-loop�̧@���ơA�ڥ����ΦA�B�~�g�@�Ө�ơI 
		}
		if (sum-g) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
