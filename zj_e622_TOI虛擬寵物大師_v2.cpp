#include <iostream>
using namespace std;

int main (){
	int n, s; cin>>n>>s;
	int a, b, c[n]={};	//��ӵo�{�C����J��a,b�ȳ��i�H�ߨ�p���s�Jc[]�A�ҥH�u�ݭn��c�ŧi���}�C�Aa,b���ΡI 
	
	for (int i=0; i<n; i++){
		cin>>a>>b;
		c[i]=a+(s/1000)*(10+(b>=30)*40+(b>=40&&b<=45)*50);//��n�P�_���޿観"���q�j�p"�A�ҥH�i�H²�g���o�� 
	}
	//for (int i=0; i<n; i++) cout<<c[i]<<" ";
	
	int mx=c[0];
	for (int i=1; i<n; i++)
		mx=max(mx, c[i]);
	
	for (int i=0; i<n; i++){
		if (c[i]==mx)
		cout<<i+1<<" "<<c[i];
	} 
	
	return 0;
}
