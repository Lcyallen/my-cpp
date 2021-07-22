#include<iostream>
using namespace std;
int main (){
	
	int N, Max, min, heart[20], i;
	
	cin>>N;
	
	for (i=1; i<=N; i++)
		cin>>heart[i];
		
	for (i=1, Max=heart[1], min=heart[1]; i<=N; i++)
	{
		if(Max<heart[i])
			Max=heart[i];
				
		if(min>heart[i])
			min=heart[i];
	}
	cout<<"Max= "<<Max<<endl;
	cout<<"min= "<<min<<endl;
	
		return 0;
}



