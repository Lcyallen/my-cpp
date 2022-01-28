#include <iostream>
#include <string>
using namespace std;

int main (){
	string a=""; cin>>a; int l_a=a.size();
	string x=""; cin>>x; int l_x=x.size();
	int x_0=a.find(x, 0);//透過此題學習str1.find("str2",0)的寫法。str1是被找的字串，str2是要找到的標的物，()前面放要找的字，後面是要從str1第幾個字元開始找 
	
	for (int i=l_a-1; i>=l_x+x_0; i--) cout<<a[i];
	for (int i=0; i<l_x; i++) cout<<x[i];
	for (int i=x_0-1; i>=0; i--) cout<<a[i];
	
	return 0;
}
