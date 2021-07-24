#include <iostream>
using namespace std;

int main(){
	
	int a[15]={1,  1, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1};
	int b[15]={10,20,30,10,40,20,30,50,50,40,50,60,70,70,85};
	
	int i, sum=0;
	
	for (i=0; i<15; i++)
	{
		if (a[i]==1)
			sum=sum+b[i];
		
		else
			sum=sum-b[i];			
	}
	
	cout<<"Sum = "<<sum;
	
	return 0;
}
