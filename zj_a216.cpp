#include <iostream>
using namespace std;
int F(int);
long long int G(int);	//看網路上的討論才知道G出來的值會很大要用long long 
int main(){
	int a;
	while(cin>>a){
		cout<<F(a)<<" "<<G(a)<<endl;
	}
	
return 0;
}

int F(int n){
	if (n==1)
		return 1;
	else{
		return n+F(n-1);
	} 
}

long long int G(int n){
	if (n==1)
		return 1;
	else{
		return F(n)+G(n-1);
	}
}

/*
1.利用這一題練習寫遞迴，先練習簡單的再回來寫這一題
2.不同函數之間可以相互呼叫(G可以呼叫F)
*/ 
