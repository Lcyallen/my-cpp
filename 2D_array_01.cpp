#include <iostream>
using namespace std;

int main (){
	int d[5][3];//宣告5個一維陣列每個一維陣列有3個元素 
	int n=1;
	for (int i=0; i<5; i++)//i控制一維陣列 
	{
		for (int j=0; j<3; j++)//j控制裡面的元素 
		{
			d[i][j]=n;
			n++;	
		}
	}//讓二維陣列的值逐個指派進來 

	for (int i=0; i<5; i++)
	{
		for (int j=0; j<3; j++)
			cout<<d[i][j]<<"\t";	
	
		cout<<endl;
	}
	cout<<endl;//把指派的內容逐一列印出來 
	
	int temp=0;
	for (int i=0; i<2; i++)
	{
		for( int j=0; j<3; j++)
		{
		temp=d[i][j]; 
		d[i][j]=d[4-i][j];
		d[4-i][j]=temp;
		}
	}//第1個陣列與最後一陣列對調；第2個陣列與倒數第二個陣列對調... 
	
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<3; j++)
			cout<<d[i][j]<<"\t";	
	
		cout<<endl;
	}
	cout<<endl;//把指派的內容逐一列印出來 


	
	for (int i=4; i>=0; i--)//把一維陣列的列數調換，由最後一列開始輸出 
	{
		for (int j=0; j<3; j++)
			cout<<d[i][j]<<" ";	
		
		cout<<endl;
	}


	return 0;
}
