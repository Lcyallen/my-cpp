#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int a[] = {1,5,-30,14,0,26,};
	int l = sizeof(a)/sizeof(int);	//�L�N���ݨ��������H�o�˼g�A���a[]�����סI 
	cout<<*max_element(a,a+l)<<endl;	//so cool!��ӥi�H�o�˼g
	cout<<*min_element(a,a+l); 			//�����[�J* �_�h�|�L�X 
	
}
