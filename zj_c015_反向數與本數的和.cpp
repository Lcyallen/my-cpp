#include <iostream>
using namespace std;
int rev(int a){	//�g�@�ӧ�Ʀr�ϦV����� 
	int re=0;
	 while(a){
	 	re=re*10+a%10;//�o�˪��g�k�O�Q�ܤ[�᪺²�ƪ����I�n�O��I 
	 	a/=10;
	 }
	 return re;
	
}
int main (){
	
	int n, a;
	cin>>n;
	while(n--){
		cin>>a;
		int count=1;	//�٨S�i�j��ɧ�ϦV�Ƹ򥻼Ƭۥ[�ɴN��1���F 
		while(rev(rev(a)+a)!=rev(a)+a){//�~��]�j�骺����O�p�G�ϦV�ƻP���ƪ��M���O�^�� 
			a+=rev(a);	//���ƭn�ܦ�"�M" 
			count++;	//�p�ƾ��n+1 
		}
		cout<<count<<" "<<a+rev(a)<<endl;
	}
		
	return 0;
}
