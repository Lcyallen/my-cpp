#include<iostream>
using namespace std;
int main(){
	
	int n, a[30], b[30], i;
	
	cin>>n;
	
	i=0;
	while (i<n)
	{
	cin>>a[i]>>b[i];
	i=i+1;
	}
	
	i=0;
	while (i<n)
	{
	cout<<a[i]+b[i]<<endl;
	i=i+1;
	}
	return 0;
}

//終於寫出自己想要的樣子了~~原來要用陣列 
