#include <iostream>
using namespace std;

int main (){

	int n, k, total;
	while(cin>>n>>k){
		total=n;		//�`�M��@�}�l����n
		while (n>=k){	//��n>=k�~�ݭn�i�J�j��Q�� 
			total+=n/k;	//�C������n/k�[�J�`�M 
			n=n/k+n%k;	//�o������I���ӧ�n/k(�i�H���s�����)�Pn%k(���ഫ���l��)�ۥ[�~�O�U�@����n 
		}
		cout<<total<<endl;
	}
	
	return 0;
}
