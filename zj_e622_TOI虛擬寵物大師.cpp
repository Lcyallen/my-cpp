#include <iostream>
using namespace std;

int main (){
	int n, s; cin>>n>>s;
	int a[n]={}, b[n]={}, c[n]={};	//�]���̫�CP�Ȼݭn��j�p�A�ҥH�ΰ}�C�s�U�ո�� 
	for (int i=0; i<n; i++) cin>>a[i]>>b[i];//�Ĥ@���g�C����J��Ӱ}�C���� 
	
	for (int i=0; i<n; i++)
		c[i]=a[i]+(s/1000)*((b[i]>=0&&b[i]<=29)*10+(b[i]>=30&&b[i]<=39)*50+(b[i]>=40&&b[i]<=45)*100);//��n�Q�ΨC�դ��P���j�p�@���޿�P�_ 
	
	int mx=c[0];
	for (int i=1; i<n; i++)
		mx=max(mx, c[i]);
	
	for (int i=0; i<n; i++){
		if (c[i]==mx)
		cout<<i+1<<" "<<c[i];
	} 
	
	return 0;
}
