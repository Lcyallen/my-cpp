#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
	int a[]={2,4,6,8,10};
	vector <int> v;

	//��}�Ca�������ƻs��v: 
	for (int i:a)
		v.push_back(i);
	
	for (int i:v)       //�o�Og++�̷s���i�H�������g�k(���I����py)
		cout<<i<<" ";	//��vector_v �̪��C�Ӥ������L�X��
	cout<<endl;
	
	for (int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";	//�ΰ}�C���g�k�]��L�Xv������
	cout<<endl<<"=========="<<endl;
/*	//�t�@�ӽƻs���g�k:
	int l = sizeof(a)/sizeof(int);
	vector <int> v2(a, a+l); 
//	for (int i:v2)
//		cout<<i<<" "<<endl;
	cout<<*max_element(v2.begin(),v2.end())<<endl;
	cout<<*min_element(v2.begin(),v2.end());
*/
return 0;	
}