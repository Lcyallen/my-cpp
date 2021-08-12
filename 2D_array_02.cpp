#include <iostream>
using namespace std;

int main (){
	
	int a[5][4];
	int i=0, j=0, n=1;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<4; j++)
		{
			a[i][j]=n;
			n++;
		}	
	}//«ü¬£°}¦Cªº­È 
	for (i=0; i<5; i++)
	{
		for (j=0; j<4; j++)
			cout<<a[i][j]<<"\t";
				
		cout<<endl;
	}//§â°}¦C­È¿é¥X		
	cout<<endl<<endl;
	
	int temp=0;
	for (int i=0; i<2; i++)
	{
		for( int j=0; j<4; j++)
		{
		temp=a[i][j]; 
		a[i][j]=a[4-i][j];
		a[4-i][j]=temp;
		}
	}//Â½Âà°}¦C 
	for (i=0; i<5; i++)
	{
		for (j=0; j<4; j++)
			cout<<a[i][j]<<"\t";
				
		cout<<endl;
	}		
	cout<<endl<<endl;
	
	temp=0;
	for (i=0; i<5; i++)
	{
		for (j=0; j<4/2; j++)
		{
			temp=a[i][j];
			a[i][j]=a[i][3-j];
			a[i][3-j]=temp;
		}//Ãè®g°}¦C 
	}	
/*	int temp; 
	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			temp=a[i][j];
			a[i][j]=a[4-i][3-j];
			a[4-i][3-j]=temp;
		}
	}*/
	for (i=0; i<5; i++)
	{
		for (j=0; j<4; j++)
			cout<<a[i][j]<<"\t";
				
		cout<<endl;
	}	
	
	return 0;
}
