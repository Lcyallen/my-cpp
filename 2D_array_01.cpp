#include <iostream>
using namespace std;

int main (){
	int d[5][3];//�ŧi5�Ӥ@���}�C�C�Ӥ@���}�C��3�Ӥ��� 
	int n=1;
	for (int i=0; i<5; i++)//i����@���}�C 
	{
		for (int j=0; j<3; j++)//j����̭������� 
		{
			d[i][j]=n;
			n++;	
		}
	}//���G���}�C���ȳv�ӫ����i�� 

	for (int i=0; i<5; i++)
	{
		for (int j=0; j<3; j++)
			cout<<d[i][j]<<"\t";	
	
		cout<<endl;
	}
	cout<<endl;//����������e�v�@�C�L�X�� 
	
	int temp=0;
	for (int i=0; i<2; i++)
	{
		for( int j=0; j<3; j++)
		{
		temp=d[i][j]; 
		d[i][j]=d[4-i][j];
		d[4-i][j]=temp;
		}
	}//��1�Ӱ}�C�P�̫�@�}�C��աF��2�Ӱ}�C�P�˼ƲĤG�Ӱ}�C���... 
	
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<3; j++)
			cout<<d[i][j]<<"\t";	
	
		cout<<endl;
	}
	cout<<endl;//����������e�v�@�C�L�X�� 


	
	for (int i=4; i>=0; i--)//��@���}�C���C�ƽմ��A�ѳ̫�@�C�}�l��X 
	{
		for (int j=0; j<3; j++)
			cout<<d[i][j]<<" ";	
		
		cout<<endl;
	}


	return 0;
}
