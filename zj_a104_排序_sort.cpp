#include <iostream>
#include <algorithm>//�}�l�ǲߥ�sort 
using namespace std;

int main (){
	int n;
	while(cin>>n){
		int a[n]={}; for (int i=0; i<n; i++)cin>>a[i];
		sort (a, a+n);//��Ʀr�ƧǡA�O��²�檺�@�� 
		for (int i=0; i<n; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
