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
1.���Q�k�o�g���X�ڷQ�F�쪺�ĪG�C��j==R[i]�ɤw�gbreak�F�o�٬O��Xj�I�Q�����k�ѨM�o�Ӱ��D
2.���Ѳש��@�}�l���Q�k�g�X�ӤF�A���L�o��k���Ӧn�A�n�j�M�Ӧh���A�٬O�n�ǲ߰��⪺�g�k�I 
*/
