#include <iostream>
using namespace std;

int main (){
	string a=""; cin>>a;
	int l_a=a.size();
	string x=""; cin>>x;
	int l_x=x.size();
	int x_0=0;
	if (l_x==1){	//��½��b����1�Ӧr������ 
		for (int i=0; i<l_a; i++){
			if (a[i]==x[0]){
				x_0=i; break;
			}	
		}			
	}
	else{
		for (int i=0; i<l_a; i++){//½��b�W�L1�Ӧr�� 
			if (a[i]==x[0]&&a[i+1]==x[1]&&a[i+l_x-1]==x[l_x-1]){//�����ˬd��1�Ӧr�B��2�Ӧr�M�̫�1�Ӧr�O�_���ۦP 
				x_0=i; break;
			}			
		}
	}
	//cout<<x_0<<endl;
	for (int i=l_a-1; i>=(l_x+x_0); i--)
		cout<<a[i];
	for (int i=0; i<l_x; i++)
		cout<<x[i];
	for (int i=(x_0-1); i>=0; i--)
		cout<<a[i];
	return 0;
}
