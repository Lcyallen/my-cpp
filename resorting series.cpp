#include<iostream>
using namespace std;
int main (){
	
	int a[10]={3,4,6,8,9,11,13,14,17,28};	
	int	b[8]={1,2,5,7,10,12,24,35};
//new array	
	int c[18], i;
	for (i=0; i<10; i++)
	{
		c[i] = a[i];
//		cout<<c[i]<<" ";
	}
	for (i=0; i<8; i++)
	{
		c[i+11]=b[i];
//		cout<<c[i+11]<<" ";
	}
//	cout<<endl;
		
//sorting new array	
	int tmp, j;
	for (int i=0; i<i+11; i++)
	{
		for (j=i+1; j<i+11; j++)
		{
			if (c[i]>c[j])
			{
				tmp=c[i];
				c[i]=c[j];
				c[j]=tmp;
			}
		}	
	}
	
//print new arry
	for (i=0; i<i+11; i++)
		cout<<c[i]<<" ";

		return 0;
}



