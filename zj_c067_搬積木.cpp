#include <iostream>
using namespace std;

int main (){
	
	int n, j=1;
	while(cin>>n, n){
		int i, a[n]={0};	//�Ǻ����g���A�e����Jn��o�̴N��a[n]�F 
		int sum=0;			//�Ǻ����g���A�����X�֨�ӱԭz�N�i�H�F�I 
		for (i=0; i<n; i++){
			cin>>a[i];
		//int sum=0;
		//for (i=0; i<n; i++)
			sum+=a[i];
		}
		int h=sum/n;
		//cout<<h;
	
		int move=0;
		for (i=0; i<n; i++){
			if (a[i]>h)
				move+=(a[i]-h);
		}
		//j++;(�@�}�l�ۤv�g��) 
		cout<<"Set #"<<j++<<endl;	//�Ǻ����g���A�����g�b��X�a�A++�A�N�i�H����X��A+1�I 
		cout<<"The minimum number of moves is "<<move<<"."<<endl;
	}
	
	return 0;
}
