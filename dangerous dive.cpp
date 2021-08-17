#include <iostream>
using namespace std;

int main(){
	
	int n, r, i, j;
	cin>>n>>r;
	int N[n], R[r];
	
	for (j=0; j<n; j++)
		N[j]=j+1; 
	
	for (i=0; i<r; i++)
		cin>>R[i];
	
	for (j=0; j<n; j++)
	{
		for (i=0; i<r; i++)
		{
			if (N[j]==R[i])
			{	N[j]=0;	break;	}	
		}
	}
	
	for (j=0; j<n; j++)
	{
		if (N[j]!=0)
			cout<<N[j]<<" ";
	}
	return 0;
}
/*
1.有想法卻寫不出我想達到的效果。當j==R[i]時已經break了卻還是輸出j！想不到方法解決這個問題
2.今天終於把一開始的想法寫出來了，不過這方法不太好，要搜尋太多次，還是要學習高手的寫法！ 
*/
