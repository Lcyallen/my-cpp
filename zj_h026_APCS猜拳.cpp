#include <iostream>
using namespace std;

int main (){
	char b[10]="", s[10]="";
	cin>>b[0];
	int n; cin>>n;
	for (int i=0; i<n; i++)cin>>s[i];
	b[1]=s[0];
	for (int i=2; i<n; i++){
		if (b[i-1]=='5'&&b[i-2]=='5') b[i]='2';	//�d�b�o�̫ܤ[�A�@�}�l�g��(b[i-1]==b[i-2]=='5'")c++����g��a==b==c�A�n���}�g 
		else if (s[i-1]=='2'&&s[i-2]=='2') b[i]='0';
		else if (s[i-1]=='0'&&s[i-2]=='0') b[i]='5';
		else b[i]=s[i-1];	//�٤@�ץH���Oelse�o��g���A���S���� 
	}
//	for (int i=0; i<n; i++)cout<<b[i]<<" ";
	for (int i=0; i<n; i++){
		cout<<b[i]<<" ";
		if (b[i]=='0'&&s[i]=='2'||b[i]=='2'&&s[i]=='5'||b[i]=='5'&&s[i]=='0'){
			cout<<": Won at round "<<i+1; return 0;	//�Ĥ@���ѤF�greturn 0�A�{�׶]�Fn�� 
		}
		if (s[i]=='0'&&b[i]=='2'||s[i]=='2'&&b[i]=='5'||s[i]=='5'&&b[i]=='0'){
			cout<<": Lost at round "<<i+1; return 0;
		}
	}
	cout<<": Drew at round "<<n;	//��]�짹�S�����~return 0��ܥ������� 
}
