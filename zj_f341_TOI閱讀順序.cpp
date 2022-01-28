#include <iostream>
using namespace std;

int main (){
	string a=""; cin>>a;
	int l_a=a.size();
	string x=""; cin>>x;
	int l_x=x.size();
	int x_0=0;
	if (l_x==1){	//把翻轉軸分為1個字的情形 
		for (int i=0; i<l_a; i++){
			if (a[i]==x[0]){
				x_0=i; break;
			}	
		}			
	}
	else{
		for (int i=0; i<l_a; i++){//翻轉軸超過1個字時 
			if (a[i]==x[0]&&a[i+1]==x[1]&&a[i+l_x-1]==x[l_x-1]){//必須檢查第1個字、第2個字和最後1個字是否都相同 
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
