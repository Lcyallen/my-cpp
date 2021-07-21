#include<iostream>
using namespace std;
int main (){
	
	int i, a, M;
	i=0;
	while (cin>>a)
	{
		if (i=0)
			M=a;
			
		else if (M<a)
			{
			M=a;
			}
		i++;
	}
	
	cout<<M<<endl;
	
	return 0;
}

//要如何用更簡單的while或for迴圈寫呢？？ 

