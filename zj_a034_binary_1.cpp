#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n; 
	while (cin>>n){
		long long int bi=0;
		for (int i=0; n!=0; n/=2, i++)
			bi+=(n%2)*pow(10.0,i);
	
		cout<<bi<<endl;
	}
	return 0;
}


/*
1.�o�O�ڲĤ@�ӷQ�쪺�Ѫk�A���u�n��J���Ʀr�j�@�I�N�W�Lint����ƤF 
2.���V�@�I�N�O�ܤ־Ƿ|for()�̪���l�ȩM�������󳣥i�H�g�h�� 
3.�S�Q��ڰe�X���ճ��MAC�I�`���ٷQ��L��k�Q�F2�ѡI 
*/
