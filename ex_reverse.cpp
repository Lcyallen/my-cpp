#include<iostream>
using namespace std;
int main (){
	
	int N, tall[10], i;
	
	cin>>N;
	
	i=0;
	while (i<N)
	{
		cin>>tall[i];
		i=i+1;
	}
	
	i=N-1;
	while (i>=0)
	{
		cout<<tall[i]<<endl;
		i=i-1;
	}
		
	return 0;
}
