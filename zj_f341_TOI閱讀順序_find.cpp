#include <iostream>
#include <string>
using namespace std;

int main (){
	string a=""; cin>>a; int l_a=a.size();
	string x=""; cin>>x; int l_x=x.size();
	int x_0=a.find(x, 0);//�z�L���D�ǲ�str1.find("str2",0)���g�k�Cstr1�O�Q�䪺�r��Astr2�O�n��쪺�Ъ����A()�e����n�䪺�r�A�᭱�O�n�qstr1�ĴX�Ӧr���}�l�� 
	
	for (int i=l_a-1; i>=l_x+x_0; i--) cout<<a[i];
	for (int i=0; i<l_x; i++) cout<<x[i];
	for (int i=x_0-1; i>=0; i--) cout<<a[i];
	
	return 0;
}
