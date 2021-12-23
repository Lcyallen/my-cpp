#include <iostream>
using namespace std;

int main (){
	
	int n, j=1;
	while(cin>>n, n){
		int i, a[n]={0};	//學網高寫的，前面輸入n後這裡就有a[n]了 
		int sum=0;			//學網高寫的，直接合併兩個敘述就可以了！ 
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
		//j++;(一開始自己寫的) 
		cout<<"Set #"<<j++<<endl;	//學網高寫的，直接寫在輸出地再++，就可以先輸出後再+1！ 
		cout<<"The minimum number of moves is "<<move<<"."<<endl;
	}
	
	return 0;
}
