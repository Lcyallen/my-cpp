#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int a[n+1]={1};//�@�}�l�b1F�A�ҥH�����ŧi��la[]��=1 
	for (int i=1; i<n+1; i++) cin>>a[i];//�q�ĤG��a[1]�}�l��J 
	int sum=0;
	for (int i=0; i<n; i++){
		sum+=(a[i]-a[i+1])*((a[i]>a[i+1])*2+(a[i]<a[i+1])*(-3));
	}
	cout<<sum;
	return 0;
}
