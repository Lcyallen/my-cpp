#include<iostream>
using namespace std;
int main (){
	
	int a[10]={3,4,6,8,9,11,13,14,17,28};	
	int	b[8]={1,2,5,7,10,12,24,35};
//new arry	
	int i, j, k, c[20];
	
	for (i=0, k=0; i<10; i++, k++)
		c[k] = a[i];
		
	for (j=0, k=i; j<8; j++, k++)
		c[k] = b[j];
		
	for (k=0; k<i+j; k++)
		cout<<c[k]<<" ";

	cout<<endl;
		
//sorting new arry	
	int tmp, x;
	for (k=0; k<i+j; k++)
	{
		for (x=k+1; x<i+j; x++)
		{
			if (c[k]>c[x])
			{
				tmp=c[k];
				c[k]=c[x];
				c[x]=tmp;
			}
		}	
	}
	
//print new arry
	for (k=0; k<i+j; k++)
		cout<<c[k]<<" ";

		return 0;
}



